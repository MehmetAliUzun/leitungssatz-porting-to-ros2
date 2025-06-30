#pragma once

#include "leitungssatz/Task.hpp"
#include <rclcpp/rclcpp.hpp>
#include "leitungssatz/srv/set_gripper.hpp"

namespace leitungssatz {

class GripperTask : public Task {
public:
  GripperTask(std::shared_ptr<rclcpp::Node> node);

private:
  double _target_position;
  double _speed = 100.0;
  double _force = 0.0;
  bool _asynchronous = false;

  std::shared_ptr<rclcpp::Node> _node;
  rclcpp::Client<leitungssatz::srv::SetGripper>::SharedPtr _gripper_client;

  bool call_gripper(leitungssatz::srv::SetGripper::Request &request);
};

}  // namespace leitungssatz