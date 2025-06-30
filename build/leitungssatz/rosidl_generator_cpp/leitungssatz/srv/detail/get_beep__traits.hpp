// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/GetBeep.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/get_beep__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBeep_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBeep_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBeep_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GetBeep_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GetBeep_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GetBeep_Request>()
{
  return "leitungssatz::srv::GetBeep_Request";
}

template<>
inline const char * name<leitungssatz::srv::GetBeep_Request>()
{
  return "leitungssatz/srv/GetBeep_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBeep_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GetBeep_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GetBeep_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBeep_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: beep
  {
    out << "beep: ";
    rosidl_generator_traits::value_to_yaml(msg.beep, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBeep_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: beep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beep: ";
    rosidl_generator_traits::value_to_yaml(msg.beep, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBeep_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GetBeep_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GetBeep_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GetBeep_Response>()
{
  return "leitungssatz::srv::GetBeep_Response";
}

template<>
inline const char * name<leitungssatz::srv::GetBeep_Response>()
{
  return "leitungssatz/srv/GetBeep_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBeep_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GetBeep_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GetBeep_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::GetBeep>()
{
  return "leitungssatz::srv::GetBeep";
}

template<>
inline const char * name<leitungssatz::srv::GetBeep>()
{
  return "leitungssatz/srv/GetBeep";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBeep>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::GetBeep_Request>::value &&
    has_fixed_size<leitungssatz::srv::GetBeep_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::GetBeep>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::GetBeep_Request>::value &&
    has_bounded_size<leitungssatz::srv::GetBeep_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::GetBeep>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::GetBeep_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::GetBeep_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_BEEP__TRAITS_HPP_
