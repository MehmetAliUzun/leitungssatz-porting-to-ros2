// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/GetBeep.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/get_beep__struct.hpp"
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
auto build<::leitungssatz::srv::GetBeep_Request>()
{
  return ::leitungssatz::srv::GetBeep_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_GetBeep_Response_beep
{
public:
  Init_GetBeep_Response_beep()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::srv::GetBeep_Response beep(::leitungssatz::srv::GetBeep_Response::_beep_type arg)
  {
    msg_.beep = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::GetBeep_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::GetBeep_Response>()
{
  return leitungssatz::srv::builder::Init_GetBeep_Response_beep();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__BUILDER_HPP_
