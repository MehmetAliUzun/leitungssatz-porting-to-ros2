#pragma once

#include "Main.hpp"
#include <rclcpp/rclcpp.hpp>

// These should be replaced by new ROS 2 message/service names. Do I need to create them, or are they already available?
#include <ur_ros_driver/msg/gripper_info.hpp>
#include <ur_ros_driver/srv/set_gripper.hpp>



namespace leitungssatz {

class Gripper
{
private: // Driver related calls should be adjusted when driver is available
    rclcpp::Subscription<ur_ros_driver::msg::GripperInfo>::SharedPtr gripper_info_sub_;
    ur_ros_driver::msg::GripperInfo gripper_info_;
    rclcpp::Client<ur_ros_driver::srv::SetGripper>::SharedPtr gripper_move_client_;

public:
    double position;

    Gripper(rclcpp::Node::SharedPtr node);

   
    void gripper_info_callback(const ur_ros_driver::msg::GripperInfo::SharedPtr msg);

    
    bool move(double target_position);
};

} 
