# Leitungssatz Interfaces Package
*Custom ROS2 interfaces for Universal Robots UR5e automation project*

This package contains custom ROS2 interfaces (messages and services) for the Leitungssatz (wiring harness) automation project. **This package works alongside the official Universal Robots ROS2 driver** to provide domain-specific interfaces while maintaining professional-grade robot control.

## ✅ **Current Workspace Setup**

Your workspace now contains:
- **✅ `leitungssatz_interfaces/`** - Your custom interfaces (this package)
- **✅ `Universal_Robots_ROS2_Driver/`** - Official UR ROS2 driver  
- **✅ `Universal_Robots_ROS2_Description/`** - Official UR robot descriptions
- **✅ `Universal_Robots_ROS2_Gazebo_Simulation/`** - Official UR simulation
- **✅ `ros2_robotiq_gripper/`** - Robotiq gripper support
- **✅ `leitungssatz/`** - Your main application package
- **✅ Custom MoveIt2 configurations** for UR5e + gripper

## Package Contents

### Messages (`msg/`)
- `DashboardInfo.msg` - Dashboard status information
- `GripperInfo.msg` - Gripper state and control information  
- `JogControl.msg` - Manual jogging control commands
- `PathEntry.msg` - Path planning waypoint definition

### Services (`srv/`)
- `SetCartTarget.srv` - Cartesian target positioning
- `SetJointTarget.srv` - Joint space target positioning
- `SetTrajectory.srv` - Multi-point trajectory execution
- `SetGripper.srv` - Gripper control commands
- `SetForceTarget.srv` - Force-controlled operations
- `SetFreedrive.srv` - Enable/disable freedrive mode
- `StartJog.srv` - Start manual jogging mode
- And many more...

## Recommended Architecture

### Using Official UR ROS2 Driver + Custom Interfaces

Instead of maintaining a custom hardware driver, we recommend using the **official Universal Robots ROS2 driver** with your custom interfaces:

```
┌─────────────────────────────────────┐
│     Your Application Layer         │
│  (uses leitungssatz_interfaces)    │
└─────────────┬───────────────────────┘
              │ Custom Services/Messages
              ▼
┌─────────────────────────────────────┐
│      Bridge Node Layer             │
│  (translates custom ↔ standard)    │
└─────────────┬───────────────────────┘
              │ Standard ROS2 Interfaces
              ▼
┌─────────────────────────────────────┐
│    Official UR ROS2 Driver         │
│   (ros2_control + MoveIt2)         │
└─────────────┬───────────────────────┘
              │ Hardware Interface
              ▼
┌─────────────────────────────────────┐
│         UR5e Robot                  │
└─────────────────────────────────────┘
```

### Benefits

✅ **Maintained & Updated**: Official driver receives regular updates and bug fixes  
✅ **ROS2 Control**: Full `ros2_control` framework integration  
✅ **MoveIt2 Ready**: Seamless motion planning integration  
✅ **Safety Features**: Built-in safety monitoring and emergency stops  
✅ **Community Support**: Well-documented with active community  
✅ **Your Custom Logic**: Keep all domain-specific interfaces  

### Implementation

1. **Keep this interfaces package** for your custom messages/services
2. **Use official UR driver** for robot hardware communication
3. **Create bridge nodes** that translate between your custom interfaces and standard ROS2 interfaces
4. **Application nodes** use your custom interfaces as usual

See `examples/ur_bridge_example.py` for a demonstration of how to implement the bridge layer.

## Building

```bash
cd /home/bt/Desktop/leitunssatz-ROS2-conversion/ls_ros2_ws
colcon build
source install/setup.bash
```

**✅ Verified working** - All packages build successfully in this workspace!

## Quick Start

### 1. **Using Official UR Driver + Your Custom Interfaces**
```bash
# Terminal 1: Start the official UR driver
ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5e robot_ip:=172.31.1.200

# Terminal 2: Start your bridge node (when you create it)
ros2 run your_package leitungssatz_ur_bridge

# Terminal 3: Use your custom interfaces
ros2 service call /leitungssatz/set_cart_target leitungssatz_interfaces/srv/SetCartTarget "{mode: 1, cartesian_goal: {translation: {x: 0.5, y: 0.0, z: 0.3}}, speed: 0.1, acceleration: 0.2, asynchronous: false}"
```

### 2. **Testing Your Custom Interfaces**
```bash
# List all your custom interfaces
ros2 interface list | grep leitungssatz_interfaces

# Show interface definition
ros2 interface show leitungssatz_interfaces/srv/SetCartTarget

# Check available services (when your bridge is running)
ros2 service list | grep leitungssatz
```

## Usage Example

```python
import rclpy
from rclpy.node import Node
from leitungssatz_interfaces.srv import SetCartTarget
from geometry_msgs.msg import Transform

class ExampleClient(Node):
    def __init__(self):
        super().__init__('example_client')
        self.client = self.create_client(SetCartTarget, 'leitungssatz/set_cart_target')
        
    async def move_to_position(self, x, y, z):
        request = SetCartTarget.Request()
        request.mode = 1  # moveL
        request.cartesian_goal = Transform()
        request.cartesian_goal.translation.x = x
        request.cartesian_goal.translation.y = y
        request.cartesian_goal.translation.z = z
        request.speed = 0.1
        request.acceleration = 0.2
        request.asynchronous = False
        
        future = self.client.call_async(request)
        response = await future
        return response.success
```

## Integration with Official UR Driver

**✅ RECOMMENDED APPROACH:** Use the official UR ROS2 driver with your custom interfaces.

### Why This Setup is Better:

1. **✅ Professional Grade**: Official driver is production-ready with safety features
2. **✅ Maintained**: Regular updates and bug fixes from Universal Robots  
3. **✅ ROS2 Control**: Full `ros2_control` framework integration
4. **✅ MoveIt2 Ready**: Seamless motion planning integration
5. **✅ Your Custom Logic**: Keep all your domain-specific interfaces
6. **✅ Same Workspace**: Everything builds together cleanly

### Current Status:
- **✅ Custom interfaces package built successfully**
- **✅ Official UR driver installed and built**  
- **✅ All dependencies resolved**
- **✅ Ready for bridge node development**

### Next Steps:
1. **Create bridge nodes** (see `examples/ur_bridge_example.py`)
2. **Test with simulation** using the included Gazebo packages
3. **Deploy to real hardware** using the official driver
4. **Your application continues using custom interfaces** - no changes needed!

This approach gives you enterprise-grade robot control while maintaining all your custom application interfaces and business logic.
