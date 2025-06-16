#pragma once

#include <memory>
#include <string>
#include <stdexcept>

#include "leitungssatz/Task.hpp"
#include "ur_ros_driver/srv/set_cart_target.hpp" 
// Above line includes robot driver, probably will be changed to include ROS2 drivers.

namespace leitungssatz {
    class MoveTask : public Task {
private:
  const std::string _parent_name = "base";
  std::string _point_name;
  const double _vel = 0.5;
  const double _acc = 0.5;
  MoveType _movetype;

public:
  MoveTask();
  MoveTask(Robot_ptr robot);
  MoveTask(Robot_ptr robot, std::string point_name);
  MoveTask(Robot_ptr robot, std::string point_name, MoveType movetype);

  bool init();
  bool moveJ();
  bool moveL();
};

}  // namespace leitungssatz
