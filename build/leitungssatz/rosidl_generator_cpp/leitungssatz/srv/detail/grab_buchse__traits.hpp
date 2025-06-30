// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/GrabBuchse.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/grab_buchse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GrabBuchse_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabBuchse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabBuchse_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GrabBuchse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GrabBuchse_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GrabBuchse_Request>()
{
  return "leitungssatz::srv::GrabBuchse_Request";
}

template<>
inline const char * name<leitungssatz::srv::GrabBuchse_Request>()
{
  return "leitungssatz/srv/GrabBuchse_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::GrabBuchse_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GrabBuchse_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GrabBuchse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GrabBuchse_Response & msg,
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
  const GrabBuchse_Response & msg,
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

inline std::string to_yaml(const GrabBuchse_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GrabBuchse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GrabBuchse_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GrabBuchse_Response>()
{
  return "leitungssatz::srv::GrabBuchse_Response";
}

template<>
inline const char * name<leitungssatz::srv::GrabBuchse_Response>()
{
  return "leitungssatz/srv/GrabBuchse_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::GrabBuchse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GrabBuchse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GrabBuchse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::GrabBuchse>()
{
  return "leitungssatz::srv::GrabBuchse";
}

template<>
inline const char * name<leitungssatz::srv::GrabBuchse>()
{
  return "leitungssatz/srv/GrabBuchse";
}

template<>
struct has_fixed_size<leitungssatz::srv::GrabBuchse>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::GrabBuchse_Request>::value &&
    has_fixed_size<leitungssatz::srv::GrabBuchse_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::GrabBuchse>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::GrabBuchse_Request>::value &&
    has_bounded_size<leitungssatz::srv::GrabBuchse_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::GrabBuchse>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::GrabBuchse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::GrabBuchse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__TRAITS_HPP_
