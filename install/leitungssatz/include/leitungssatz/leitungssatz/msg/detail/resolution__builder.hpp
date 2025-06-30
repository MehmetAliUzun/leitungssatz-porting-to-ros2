// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__BUILDER_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/msg/detail/resolution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace msg
{

namespace builder
{

class Init_Resolution_height
{
public:
  explicit Init_Resolution_height(::leitungssatz::msg::Resolution & msg)
  : msg_(msg)
  {}
  ::leitungssatz::msg::Resolution height(::leitungssatz::msg::Resolution::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::msg::Resolution msg_;
};

class Init_Resolution_width
{
public:
  Init_Resolution_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Resolution_height width(::leitungssatz::msg::Resolution::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Resolution_height(msg_);
  }

private:
  ::leitungssatz::msg::Resolution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::msg::Resolution>()
{
  return leitungssatz::msg::builder::Init_Resolution_width();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__BUILDER_HPP_
