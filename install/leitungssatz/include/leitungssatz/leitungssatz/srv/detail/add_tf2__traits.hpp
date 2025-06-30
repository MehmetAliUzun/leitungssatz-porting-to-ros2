// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/AddTf2.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/add_tf2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTf2_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: relative
  {
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTf2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTf2_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::AddTf2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::AddTf2_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::AddTf2_Request>()
{
  return "leitungssatz::srv::AddTf2_Request";
}

template<>
inline const char * name<leitungssatz::srv::AddTf2_Request>()
{
  return "leitungssatz/srv/AddTf2_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::AddTf2_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct has_bounded_size<leitungssatz::srv::AddTf2_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct is_message<leitungssatz::srv::AddTf2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTf2_Response & msg,
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
  const AddTf2_Response & msg,
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

inline std::string to_yaml(const AddTf2_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::AddTf2_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::AddTf2_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::AddTf2_Response>()
{
  return "leitungssatz::srv::AddTf2_Response";
}

template<>
inline const char * name<leitungssatz::srv::AddTf2_Response>()
{
  return "leitungssatz/srv/AddTf2_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::AddTf2_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<leitungssatz::srv::AddTf2_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<leitungssatz::srv::AddTf2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::AddTf2>()
{
  return "leitungssatz::srv::AddTf2";
}

template<>
inline const char * name<leitungssatz::srv::AddTf2>()
{
  return "leitungssatz/srv/AddTf2";
}

template<>
struct has_fixed_size<leitungssatz::srv::AddTf2>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::AddTf2_Request>::value &&
    has_fixed_size<leitungssatz::srv::AddTf2_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::AddTf2>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::AddTf2_Request>::value &&
    has_bounded_size<leitungssatz::srv::AddTf2_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::AddTf2>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::AddTf2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::AddTf2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__TRAITS_HPP_
