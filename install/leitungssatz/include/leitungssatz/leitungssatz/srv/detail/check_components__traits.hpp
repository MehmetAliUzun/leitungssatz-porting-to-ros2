// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/CheckComponents.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/check_components__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckComponents_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckComponents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckComponents_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::CheckComponents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::CheckComponents_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::CheckComponents_Request>()
{
  return "leitungssatz::srv::CheckComponents_Request";
}

template<>
inline const char * name<leitungssatz::srv::CheckComponents_Request>()
{
  return "leitungssatz/srv/CheckComponents_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::CheckComponents_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::CheckComponents_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::CheckComponents_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckComponents_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ram
  {
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << ", ";
  }

  // member: gpu
  {
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckComponents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ram
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram: ";
    rosidl_generator_traits::value_to_yaml(msg.ram, out);
    out << "\n";
  }

  // member: gpu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpu: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckComponents_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::CheckComponents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::CheckComponents_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::CheckComponents_Response>()
{
  return "leitungssatz::srv::CheckComponents_Response";
}

template<>
inline const char * name<leitungssatz::srv::CheckComponents_Response>()
{
  return "leitungssatz/srv/CheckComponents_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::CheckComponents_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::CheckComponents_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::CheckComponents_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::CheckComponents>()
{
  return "leitungssatz::srv::CheckComponents";
}

template<>
inline const char * name<leitungssatz::srv::CheckComponents>()
{
  return "leitungssatz/srv/CheckComponents";
}

template<>
struct has_fixed_size<leitungssatz::srv::CheckComponents>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::CheckComponents_Request>::value &&
    has_fixed_size<leitungssatz::srv::CheckComponents_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::CheckComponents>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::CheckComponents_Request>::value &&
    has_bounded_size<leitungssatz::srv::CheckComponents_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::CheckComponents>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::CheckComponents_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::CheckComponents_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__CHECK_COMPONENTS__TRAITS_HPP_
