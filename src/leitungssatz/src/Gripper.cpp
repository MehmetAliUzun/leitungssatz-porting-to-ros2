#include "leitungssatz/Gripper.hpp"

using namespace leitungssatz;

Gripper::Gripper(rclcpp::Node::SharedPtr node)
{
    // Service client
    gripper_move_client_ = node->create_client<ur_ros_driver::srv::SetGripper>("/ur_hardware_interface/robotiq/set_gripper");

    // Subscription
    gripper_info_sub_ = node->create_subscription<ur_ros_driver::msg::GripperInfo>(
        "/ur_hardware_interface/robotiq/gripper_infos", 10,
        std::bind(&Gripper::gripper_info_callback, this, std::placeholders::_1));
}

void Gripper::gripper_info_callback(const ur_ros_driver::msg::GripperInfo::SharedPtr msg)
{
    gripper_info_ = *msg;
    position = gripper_info_.position_per;
   
}

