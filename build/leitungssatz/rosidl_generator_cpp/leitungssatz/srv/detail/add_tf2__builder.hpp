// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/AddTf2.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/add_tf2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_AddTf2_Request_relative
{
public:
  explicit Init_AddTf2_Request_relative(::leitungssatz::srv::AddTf2_Request & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::AddTf2_Request relative(::leitungssatz::srv::AddTf2_Request::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::AddTf2_Request msg_;
};

class Init_AddTf2_Request_pose
{
public:
  Init_AddTf2_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTf2_Request_relative pose(::leitungssatz::srv::AddTf2_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_AddTf2_Request_relative(msg_);
  }

private:
  ::leitungssatz::srv::AddTf2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::AddTf2_Request>()
{
  return leitungssatz::srv::builder::Init_AddTf2_Request_pose();
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_AddTf2_Response_success
{
public:
  Init_AddTf2_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::AddTf2_Response success(::leitungssatz::srv::AddTf2_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::AddTf2_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::AddTf2_Response>()
{
  return leitungssatz::srv::builder::Init_AddTf2_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__BUILDER_HPP_
