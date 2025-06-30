// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__BUILDER_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/msg/detail/vector_resolution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace msg
{

namespace builder
{

class Init_VectorResolution_data
{
public:
  Init_VectorResolution_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::leitungssatz::msg::VectorResolution data(::leitungssatz::msg::VectorResolution::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::msg::VectorResolution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::msg::VectorResolution>()
{
  return leitungssatz::msg::builder::Init_VectorResolution_data();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__BUILDER_HPP_
