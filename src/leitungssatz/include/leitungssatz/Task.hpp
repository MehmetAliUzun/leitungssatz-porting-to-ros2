#pragma once

#include <memory>
#include "Robot.hpp"
#include "Gripper.hpp"
#include "Main.hpp"

namespace leitungssatz {

enum class TaskStatus { IDLE, RUNNING, COMPLETED, FAILED };  // example enum

class Task {
protected:
    Robot_ptr _robot;
    TaskStatus _task_status = TaskStatus::IDLE;

public:
    explicit Task(Robot_ptr robot) : _robot(robot) {}
    virtual ~Task() = default;

    virtual bool init();
    virtual TaskStatus execute();
};

}  // namespace leitungssatz