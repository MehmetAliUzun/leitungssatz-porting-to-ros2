// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/SetCableOrientation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/set_cable_orientation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SetCableOrientation_Request_cable_number
{
public:
  explicit Init_SetCableOrientation_Request_cable_number(::leitungssatz::srv::SetCableOrientation_Request & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::SetCableOrientation_Request cable_number(::leitungssatz::srv::SetCableOrientation_Request::_cable_number_type arg)
  {
    msg_.cable_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SetCableOrientation_Request msg_;
};

class Init_SetCableOrientation_Request_learning
{
public:
  Init_SetCableOrientation_Request_learning()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCableOrientation_Request_cable_number learning(::leitungssatz::srv::SetCableOrientation_Request::_learning_type arg)
  {
    msg_.learning = std::move(arg);
    return Init_SetCableOrientation_Request_cable_number(msg_);
  }

private:
  ::leitungssatz::srv::SetCableOrientation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SetCableOrientation_Request>()
{
  return leitungssatz::srv::builder::Init_SetCableOrientation_Request_learning();
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SetCableOrientation_Response_success
{
public:
  Init_SetCableOrientation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::SetCableOrientation_Response success(::leitungssatz::srv::SetCableOrientation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SetCableOrientation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SetCableOrientation_Response>()
{
  return leitungssatz::srv::builder::Init_SetCableOrientation_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__BUILDER_HPP_
