// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "leitungssatz/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "leitungssatz/msg/detail/vector_resolution__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace leitungssatz
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leitungssatz
cdr_serialize(
  const leitungssatz::msg::VectorResolution & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leitungssatz
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  leitungssatz::msg::VectorResolution & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leitungssatz
get_serialized_size(
  const leitungssatz::msg::VectorResolution & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leitungssatz
max_serialized_size_VectorResolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace leitungssatz

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leitungssatz
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leitungssatz, msg, VectorResolution)();

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
