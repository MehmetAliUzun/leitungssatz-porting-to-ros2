// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/GrabBuchse.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/grab_buchse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GrabBuchse_Request_start
{
public:
  Init_GrabBuchse_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::GrabBuchse_Request start(::leitungssatz::srv::GrabBuchse_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GrabBuchse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GrabBuchse_Request>()
{
  return leitungssatz::srv::builder::Init_GrabBuchse_Request_start();
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GrabBuchse_Response_success
{
public:
  Init_GrabBuchse_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::GrabBuchse_Response success(::leitungssatz::srv::GrabBuchse_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GrabBuchse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GrabBuchse_Response>()
{
  return leitungssatz::srv::builder::Init_GrabBuchse_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__BUILDER_HPP_
