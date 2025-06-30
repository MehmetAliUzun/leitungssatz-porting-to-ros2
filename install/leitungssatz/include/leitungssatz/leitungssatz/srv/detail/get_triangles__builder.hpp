// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/GetTriangles.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/get_triangles__struct.hpp"
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
auto build<::leitungssatz::srv::GetTriangles_Request>()
{
  return ::leitungssatz::srv::GetTriangles_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GetTriangles_Response_status
{
public:
  explicit Init_GetTriangles_Response_status(::leitungssatz::srv::GetTriangles_Response & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::GetTriangles_Response status(::leitungssatz::srv::GetTriangles_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GetTriangles_Response msg_;
};

class Init_GetTriangles_Response_delta
{
public:
  Init_GetTriangles_Response_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTriangles_Response_status delta(::leitungssatz::srv::GetTriangles_Response::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_GetTriangles_Response_status(msg_);
  }

private:
  ::leitungssatz::srv::GetTriangles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GetTriangles_Response>()
{
  return leitungssatz::srv::builder::Init_GetTriangles_Response_delta();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__BUILDER_HPP_
