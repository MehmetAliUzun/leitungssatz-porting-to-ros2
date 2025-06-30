// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/CheckComponents.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/check_components__struct.hpp"
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
auto build<::leitungssatz::srv::CheckComponents_Request>()
{
  return ::leitungssatz::srv::CheckComponents_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_CheckComponents_Response_gpu
{
public:
  explicit Init_CheckComponents_Response_gpu(::leitungssatz::srv::CheckComponents_Response & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::CheckComponents_Response gpu(::leitungssatz::srv::CheckComponents_Response::_gpu_type arg)
  {
    msg_.gpu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::CheckComponents_Response msg_;
};

class Init_CheckComponents_Response_ram
{
public:
  Init_CheckComponents_Response_ram()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckComponents_Response_gpu ram(::leitungssatz::srv::CheckComponents_Response::_ram_type arg)
  {
    msg_.ram = std::move(arg);
    return Init_CheckComponents_Response_gpu(msg_);
  }

private:
  ::leitungssatz::srv::CheckComponents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::CheckComponents_Response>()
{
  return leitungssatz::srv::builder::Init_CheckComponents_Response_ram();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__BUILDER_HPP_
