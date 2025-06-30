// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/GetBoardLocation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/get_board_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBoardLocation_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBoardLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBoardLocation_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GetBoardLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GetBoardLocation_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GetBoardLocation_Request>()
{
  return "leitungssatz::srv::GetBoardLocation_Request";
}

template<>
inline const char * name<leitungssatz::srv::GetBoardLocation_Request>()
{
  return "leitungssatz/srv/GetBoardLocation_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBoardLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GetBoardLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GetBoardLocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBoardLocation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: config
  {
    out << "config: ";
    rosidl_generator_traits::value_to_yaml(msg.config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBoardLocation_Response & msg,
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

  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config: ";
    rosidl_generator_traits::value_to_yaml(msg.config, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBoardLocation_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::GetBoardLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::GetBoardLocation_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::GetBoardLocation_Response>()
{
  return "leitungssatz::srv::GetBoardLocation_Response";
}

template<>
inline const char * name<leitungssatz::srv::GetBoardLocation_Response>()
{
  return "leitungssatz/srv/GetBoardLocation_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBoardLocation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::GetBoardLocation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::GetBoardLocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::GetBoardLocation>()
{
  return "leitungssatz::srv::GetBoardLocation";
}

template<>
inline const char * name<leitungssatz::srv::GetBoardLocation>()
{
  return "leitungssatz/srv/GetBoardLocation";
}

template<>
struct has_fixed_size<leitungssatz::srv::GetBoardLocation>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::GetBoardLocation_Request>::value &&
    has_fixed_size<leitungssatz::srv::GetBoardLocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::GetBoardLocation>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::GetBoardLocation_Request>::value &&
    has_bounded_size<leitungssatz::srv::GetBoardLocation_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::GetBoardLocation>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::GetBoardLocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::GetBoardLocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__TRAITS_HPP_
