// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__TRAITS_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/msg/detail/vector_resolution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "leitungssatz/msg/detail/resolution__traits.hpp"

namespace leitungssatz
{

namespace msg
{

inline void to_flow_style_yaml(
  const VectorResolution & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VectorResolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VectorResolution & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace leitungssatz

namespace rosidl_generator_traits
{

[[deprecated("use leitungssatz::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leitungssatz::msg::VectorResolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::msg::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::msg::VectorResolution & msg)
{
  return leitungssatz::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::msg::VectorResolution>()
{
  return "leitungssatz::msg::VectorResolution";
}

template<>
inline const char * name<leitungssatz::msg::VectorResolution>()
{
  return "leitungssatz/msg/VectorResolution";
}

template<>
struct has_fixed_size<leitungssatz::msg::VectorResolution>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<leitungssatz::msg::VectorResolution>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<leitungssatz::msg::VectorResolution>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__TRAITS_HPP_
