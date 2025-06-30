// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/GetBoardLocation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/get_board_location__struct.hpp"
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
auto build<::leitungssatz::srv::GetBoardLocation_Request>()
{
  return ::leitungssatz::srv::GetBoardLocation_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GetBoardLocation_Response_config
{
public:
  explicit Init_GetBoardLocation_Response_config(::leitungssatz::srv::GetBoardLocation_Response & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::GetBoardLocation_Response config(::leitungssatz::srv::GetBoardLocation_Response::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GetBoardLocation_Response msg_;
};

class Init_GetBoardLocation_Response_success
{
public:
  Init_GetBoardLocation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBoardLocation_Response_config success(::leitungssatz::srv::GetBoardLocation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetBoardLocation_Response_config(msg_);
  }

private:
  ::leitungssatz::srv::GetBoardLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GetBoardLocation_Response>()
{
  return leitungssatz::srv::builder::Init_GetBoardLocation_Response_success();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__BUILDER_HPP_
