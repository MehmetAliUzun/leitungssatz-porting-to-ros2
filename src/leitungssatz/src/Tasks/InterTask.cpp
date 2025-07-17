#include "leitungssatz/Tasks/InterTask.hpp"


using namespace leitungssatz;

TaskStatus InterTask::exec(){

    status = TaskStatus::RUNNING;
    int i =1;

    for(Task_ptr currTask : _queue){
        RCLCPP_INFO(logger_, "Executing Task %d", i);
        TaskStatus success = currTask->execute();
        if(success == TaskStatus::FAILED){
            RCLCPP_ERROR(logger_, "failed task, aborting...");
            status = TaskStatus::FAILED;
            return status;
        } else if(success == TaskStatus::FAILEDSAFE){
            RCLCPP_ERROR(logger_, "failed task, but safe to continue");
            break;
        }
        i++;
    }
    status = TaskStatus::FAILEDSAFE;
    return status;

};

void InterTask::queue(Task_ptr task){
    _queue.push_back(task);
}