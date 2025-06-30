// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__TRAITS_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/msg/detail/resolution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace msg
{

inline void to_flow_style_yaml(
  const Resolution & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Resolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Resolution & msg, bool use_flow_style = false)
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
  const leitungssatz::msg::Resolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::msg::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::msg::Resolution & msg)
{
  return leitungssatz::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::msg::Resolution>()
{
  return "leitungssatz::msg::Resolution";
}

template<>
inline const char * name<leitungssatz::msg::Resolution>()
{
  return "leitungssatz/msg/Resolution";
}

template<>
struct has_fixed_size<leitungssatz::msg::Resolution>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::msg::Resolution>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::msg::Resolution>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__TRAITS_HPP_
