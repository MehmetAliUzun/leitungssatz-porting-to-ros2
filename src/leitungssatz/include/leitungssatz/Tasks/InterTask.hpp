#include "leitungssatz/Main.hpp"
#include "leitungssatz/Task.hpp"
#include <memory>
#include <list>
#include <rclcpp/rclcpp.hpp>

#pragma once

namespace leitungssatz {
    
    class InterTask{

        public:
            InterTask(const rclcpp::Logger& logger) : logger_(logger), _queue() {};

            TaskStatus exec();
            void queue(Task_ptr task);

        private:
            std::list<Task_ptr> _queue;
            TaskStatus status = TaskStatus::IDLE;
            rclcpp::Logger logger_ = rclcpp::get_logger("inter_task");
    };
} // namespace leitungssatz