#!/usr/bin/env python3
"""
Example bridge node showing how to use custom leitungssatz_interfaces 
with the official UR ROS2 driver.

This demonstrates how your custom high-level services can be mapped 
to standard ROS2 interfaces used by the official UR driver.
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

# Your custom interfaces
from leitungssatz_interfaces.srv import SetCartTarget, SetJointTarget, SetGripper, SetFreedrive
from leitungssatz_interfaces.msg import JogControl

# Standard ROS2 interfaces used by official UR driver
from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import Twist
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from ur_dashboard_msgs.srv import SetMode as URSetMode
from std_srvs.srv import SetBool

class LeitungssatzURBridge(Node):
    """
    Bridge node that translates between your custom interfaces 
    and the official UR ROS2 driver interfaces.
    """
    
    def __init__(self):
        super().__init__('leitungssatz_ur_bridge')
        
        # Service servers for ALL your custom interfaces
        self.set_cart_target_srv = self.create_service(
            SetCartTarget, 
            'leitungssatz/set_cart_target', 
            self.handle_set_cart_target
        )
        
        self.set_joint_target_srv = self.create_service(
            SetJointTarget,
            'leitungssatz/set_joint_target',
            self.handle_set_joint_target
        )
        
        # Add more of your custom services
        self.set_gripper_srv = self.create_service(
            SetGripper,
            'leitungssatz/set_gripper', 
            self.handle_set_gripper
        )
        
        self.set_freedrive_srv = self.create_service(
            SetFreedrive,
            'leitungssatz/set_freedrive',
            self.handle_set_freedrive
        )
        
        # TODO: Add handlers for all your other services:
        # SetForceTarget, SetTrajectory, SetPayload, etc.
        
        # Subscriber for jog control
        self.jog_sub = self.create_subscription(
            JogControl,
            'leitungssatz/jog_control',
            self.handle_jog_control,
            10
        )
        
        # Action client to official UR driver
        self.joint_trajectory_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/joint_trajectory_controller/follow_joint_trajectory'
        )
        
        # Publisher for twist commands (for jogging)
        self.twist_pub = self.create_publisher(
            Twist,
            '/servo_node/delta_twist_cmds',
            10
        )
        
        # Clients to official UR driver services
        self.ur_dashboard_client = self.create_client(URSetMode, '/dashboard_client/set_mode')
        self.freedrive_client = self.create_client(SetBool, '/dashboard_client/freedrive_mode')
        
        # Subscribe to joint states from official driver
        self.joint_state_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        self.current_joint_state = None
        self.get_logger().info('Leitungssatz UR Bridge Node started')
    
    def joint_state_callback(self, msg):
        """Store current joint state from official UR driver."""
        self.current_joint_state = msg
    
    async def handle_set_cart_target(self, request, response):
        """
        Handle custom SetCartTarget service by converting to 
        joint trajectory using inverse kinematics.
        """
        self.get_logger().info(f'Received cart target: mode={request.mode}')
        
        # Here you would:
        # 1. Use MoveIt2 or your own IK to convert cartesian goal to joint angles
        # 2. Create a JointTrajectory message
        # 3. Send it to the official UR driver via action
        
        # For demonstration, this is a simplified example:
        if self.current_joint_state is None:
            response.success = False
            return response
        
        # Create a simple joint trajectory (you'd replace this with actual IK)
        goal = FollowJointTrajectory.Goal()
        goal.trajectory = JointTrajectory()
        goal.trajectory.joint_names = self.current_joint_state.name
        
        # Add trajectory points (simplified - you'd calculate these properly)
        point = JointTrajectoryPoint()
        point.positions = list(self.current_joint_state.position)  # Keep current position for demo
        point.time_from_start.sec = 2  # 2 seconds to reach target
        goal.trajectory.points = [point]
        
        # Send to official UR driver
        self.joint_trajectory_client.wait_for_server()
        future = self.joint_trajectory_client.send_goal_async(goal)
        
        # In a real implementation, you'd await the result
        response.success = True
        return response
    
    async def handle_set_joint_target(self, request, response):
        """Handle custom SetJointTarget service."""
        self.get_logger().info('Received joint target')
        
        # Convert your custom joint target to standard trajectory
        goal = FollowJointTrajectory.Goal()
        goal.trajectory = JointTrajectory()
        goal.trajectory.joint_names = ['shoulder_pan_joint', 'shoulder_lift_joint', 
                                     'elbow_joint', 'wrist_1_joint', 
                                     'wrist_2_joint', 'wrist_3_joint']
        
        point = JointTrajectoryPoint()
        point.positions = request.joint_target  # Your custom joint angles
        point.time_from_start.sec = int(request.duration)
        point.time_from_start.nanosec = int((request.duration % 1) * 1e9)
        goal.trajectory.points = [point]
        
        # Send to official UR driver
        self.joint_trajectory_client.wait_for_server()
        future = self.joint_trajectory_client.send_goal_async(goal)
        
        response.success = True
        return response
    
    async def handle_set_gripper(self, request, response):
        """Handle custom gripper commands."""
        self.get_logger().info(f'Received gripper command: {request}')
        
        # TODO: Forward to robotiq gripper driver
        # For now, just acknowledge
        response.success = True
        return response
    
    async def handle_set_freedrive(self, request, response):
        """Handle freedrive mode toggle."""
        self.get_logger().info(f'Setting freedrive mode: {request.enable}')
        
        # Call official UR dashboard service
        req = SetBool.Request()
        req.data = request.enable
        
        self.freedrive_client.wait_for_service()
        future = self.freedrive_client.call_async(req)
        # In production, you'd await the result properly
        
        response.success = True
        return response
    
    def handle_jog_control(self, msg):
        """
        Handle custom JogControl messages by converting to 
        Twist commands for the official UR driver.
        """
        twist = Twist()
        
        # Map your custom jog control to standard twist
        # This depends on your JogControl message structure
        if hasattr(msg, 'linear_x'):
            twist.linear.x = msg.linear_x
        if hasattr(msg, 'linear_y'):
            twist.linear.y = msg.linear_y
        if hasattr(msg, 'linear_z'):
            twist.linear.z = msg.linear_z
        if hasattr(msg, 'angular_x'):
            twist.angular.x = msg.angular_x
        if hasattr(msg, 'angular_y'):
            twist.angular.y = msg.angular_y
        if hasattr(msg, 'angular_z'):
            twist.angular.z = msg.angular_z
        
        # Publish to official UR driver's servo interface
        self.twist_pub.publish(twist)
        self.get_logger().info('Published jog command')

def main(args=None):
    rclpy.init(args=args)
    bridge = LeitungssatzURBridge()
    
    try:
        rclpy.spin(bridge)
    except KeyboardInterrupt:
        pass
    finally:
        bridge.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
