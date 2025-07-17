#include "leitungssatz/Gripper.hpp"
#include <rclcpp/rclcpp.hpp>
#include <iostream>

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("test_gripper_node");

    RCLCPP_INFO(node->get_logger(), "Starting Gripper Test Node");

    leitungssatz::Gripper gripper(node);

    RCLCPP_INFO(node->get_logger(), "Gripper object created");

    rclcpp::spin_some(node);

    RCLCPP_INFO(node->get_logger(), "Shutting down Gripper Test Node");
    rclcpp::shutdown();
    return 0;
}