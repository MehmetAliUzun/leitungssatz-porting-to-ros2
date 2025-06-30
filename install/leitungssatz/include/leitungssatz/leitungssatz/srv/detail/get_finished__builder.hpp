// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/GetFinished.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/get_finished__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GetFinished_Request>()
{
  return ::leitungssatz::srv::GetFinished_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GetFinished_Response_success
{
public:
  Init_GetFinished_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::GetFinished_Response success(::leitungssatz::srv::GetFinished_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GetFinished_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GetFinished_Response>()
{
  return leitungssatz::srv::builder::Init_GetFinished_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__BUILDER_HPP_
