// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Request_time
{
public:
  Init_SetExposure_Request_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::SetExposure_Request time(::leitungssatz::srv::SetExposure_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SetExposure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SetExposure_Request>()
{
  return leitungssatz::srv::builder::Init_SetExposure_Request_time();
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SetExposure_Response_success
{
public:
  Init_SetExposure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::SetExposure_Response success(::leitungssatz::srv::SetExposure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SetExposure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SetExposure_Response>()
{
  return leitungssatz::srv::builder::Init_SetExposure_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__BUILDER_HPP_
