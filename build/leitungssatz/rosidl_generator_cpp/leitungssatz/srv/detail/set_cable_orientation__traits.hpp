// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/SetCableOrientation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/set_cable_orientation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCableOrientation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: learning
  {
    out << "learning: ";
    rosidl_generator_traits::value_to_yaml(msg.learning, out);
    out << ", ";
  }

  // member: cable_number
  {
    out << "cable_number: ";
    rosidl_generator_traits::value_to_yaml(msg.cable_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCableOrientation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: learning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "learning: ";
    rosidl_generator_traits::value_to_yaml(msg.learning, out);
    out << "\n";
  }

  // member: cable_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cable_number: ";
    rosidl_generator_traits::value_to_yaml(msg.cable_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCableOrientation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace leitungssatz

namespace rosidl_generator_traits
{

[[deprecated("use leitungssatz::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leitungssatz::srv::SetCableOrientation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::SetCableOrientation_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::SetCableOrientation_Request>()
{
  return "leitungssatz::srv::SetCableOrientation_Request";
}

template<>
inline const char * name<leitungssatz::srv::SetCableOrientation_Request>()
{
  return "leitungssatz/srv/SetCableOrientation_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::SetCableOrientation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::SetCableOrientation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::SetCableOrientation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCableOrientation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCableOrientation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCableOrientation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace leitungssatz

namespace rosidl_generator_traits
{

[[deprecated("use leitungssatz::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leitungssatz::srv::SetCableOrientation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::SetCableOrientation_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::SetCableOrientation_Response>()
{
  return "leitungssatz::srv::SetCableOrientation_Response";
}

template<>
inline const char * name<leitungssatz::srv::SetCableOrientation_Response>()
{
  return "leitungssatz/srv/SetCableOrientation_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::SetCableOrientation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::SetCableOrientation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::SetCableOrientation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::SetCableOrientation>()
{
  return "leitungssatz::srv::SetCableOrientation";
}

template<>
inline const char * name<leitungssatz::srv::SetCableOrientation>()
{
  return "leitungssatz/srv/SetCableOrientation";
}

template<>
struct has_fixed_size<leitungssatz::srv::SetCableOrientation>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::SetCableOrientation_Request>::value &&
    has_fixed_size<leitungssatz::srv::SetCableOrientation_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::SetCableOrientation>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::SetCableOrientation_Request>::value &&
    has_bounded_size<leitungssatz::srv::SetCableOrientation_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::SetCableOrientation>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::SetCableOrientation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::SetCableOrientation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__TRAITS_HPP_
