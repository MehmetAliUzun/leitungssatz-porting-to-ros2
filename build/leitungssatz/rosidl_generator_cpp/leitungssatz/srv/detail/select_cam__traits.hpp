// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leitungssatz:srv/SelectCam.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__TRAITS_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leitungssatz/srv/detail/select_cam__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelectCam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_type
  {
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
    out << ", ";
  }

  // member: camera_index
  {
    out << "camera_index: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelectCam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
    out << "\n";
  }

  // member: camera_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_index: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectCam_Request & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::SelectCam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::SelectCam_Request & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::SelectCam_Request>()
{
  return "leitungssatz::srv::SelectCam_Request";
}

template<>
inline const char * name<leitungssatz::srv::SelectCam_Request>()
{
  return "leitungssatz/srv/SelectCam_Request";
}

template<>
struct has_fixed_size<leitungssatz::srv::SelectCam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<leitungssatz::srv::SelectCam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<leitungssatz::srv::SelectCam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'available_resolutions'
#include "leitungssatz/msg/detail/vector_resolution__traits.hpp"

namespace leitungssatz
{

namespace srv
{

inline void to_flow_style_yaml(
  const SelectCam_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available_resolutions
  {
    out << "available_resolutions: ";
    to_flow_style_yaml(msg.available_resolutions, out);
    out << ", ";
  }

  // member: resolution_idx
  {
    out << "resolution_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_idx, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SelectCam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available_resolutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_resolutions:\n";
    to_block_style_yaml(msg.available_resolutions, out, indentation + 2);
  }

  // member: resolution_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_idx, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SelectCam_Response & msg, bool use_flow_style = false)
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
  const leitungssatz::srv::SelectCam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  leitungssatz::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leitungssatz::srv::to_yaml() instead")]]
inline std::string to_yaml(const leitungssatz::srv::SelectCam_Response & msg)
{
  return leitungssatz::srv::to_yaml(msg);
}

template<>
inline const char * data_type<leitungssatz::srv::SelectCam_Response>()
{
  return "leitungssatz::srv::SelectCam_Response";
}

template<>
inline const char * name<leitungssatz::srv::SelectCam_Response>()
{
  return "leitungssatz/srv/SelectCam_Response";
}

template<>
struct has_fixed_size<leitungssatz::srv::SelectCam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<leitungssatz::srv::SelectCam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<leitungssatz::srv::SelectCam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<leitungssatz::srv::SelectCam>()
{
  return "leitungssatz::srv::SelectCam";
}

template<>
inline const char * name<leitungssatz::srv::SelectCam>()
{
  return "leitungssatz/srv/SelectCam";
}

template<>
struct has_fixed_size<leitungssatz::srv::SelectCam>
  : std::integral_constant<
    bool,
    has_fixed_size<leitungssatz::srv::SelectCam_Request>::value &&
    has_fixed_size<leitungssatz::srv::SelectCam_Response>::value
  >
{
};

template<>
struct has_bounded_size<leitungssatz::srv::SelectCam>
  : std::integral_constant<
    bool,
    has_bounded_size<leitungssatz::srv::SelectCam_Request>::value &&
    has_bounded_size<leitungssatz::srv::SelectCam_Response>::value
  >
{
};

template<>
struct is_service<leitungssatz::srv::SelectCam>
  : std::true_type
{
};

template<>
struct is_service_request<leitungssatz::srv::SelectCam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<leitungssatz::srv::SelectCam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__TRAITS_HPP_
