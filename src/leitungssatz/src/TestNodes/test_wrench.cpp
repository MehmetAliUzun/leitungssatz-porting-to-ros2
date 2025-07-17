#include "leitungssatz/Wrench.hpp"
#include <rclcpp/rclcpp.hpp>

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("test_wrench_node");

    RCLCPP_INFO(node->get_logger(), "Starting Wrench Test Node");

    leitungssatz::Wrench wrench(node);

    rclcpp::spin(node);

    RCLCPP_INFO(node->get_logger(), "Shutting down Wrench Test Node");
    rclcpp::shutdown();
    return 0;
}