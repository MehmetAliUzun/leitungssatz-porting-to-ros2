#include "leitungssatz/Tasks/MoveTask.hpp"

using namespace leitungssatz;

MoveTask::MoveTask() {}

MoveTask::MoveTask(Robot_ptr robot) : Task(robot) {
  init();
}

MoveTask::MoveTask(Robot_ptr robot, std::string point_name)
  : Task(robot), _point_name(point_name) {
  init();
}

MoveTask::MoveTask(Robot_ptr robot, std::string point_name, MoveType movetype)
  : Task(robot), _point_name(point_name), _movetype(movetype) {
  init();
}

bool MoveTask::init() {
  bool isPointPublished = _robot->isTransformExist(_parent_name, _point_name);
  if (!isPointPublished) {
    throw std::runtime_error("Point " + _parent_name + " -> " + _point_name + " doesn't exist!");
  }
  return true;
}

bool MoveTask::moveJ() {
  ur_ros_driver::srv::SetCartTarget srv = _robot->createCartTarget(
    _parent_name, _point_name, _vel, _acc, 0);
  return _robot->call_cart_target(srv);
}

bool MoveTask::moveL() {
  ur_ros_driver::srv::SetCartTarget srv = _robot->createCartTarget(
    _parent_name, _point_name, _vel, _acc, 1);
  return _robot->call_cart_target(srv);
}