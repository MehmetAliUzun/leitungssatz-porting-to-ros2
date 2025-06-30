// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leitungssatz:srv/SelectCam.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__BUILDER_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leitungssatz/srv/detail/select_cam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SelectCam_Request_camera_index
{
public:
  explicit Init_SelectCam_Request_camera_index(::leitungssatz::srv::SelectCam_Request & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::SelectCam_Request camera_index(::leitungssatz::srv::SelectCam_Request::_camera_index_type arg)
  {
    msg_.camera_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Request msg_;
};

class Init_SelectCam_Request_camera_type
{
public:
  Init_SelectCam_Request_camera_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelectCam_Request_camera_index camera_type(::leitungssatz::srv::SelectCam_Request::_camera_type_type arg)
  {
    msg_.camera_type = std::move(arg);
    return Init_SelectCam_Request_camera_index(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SelectCam_Request>()
{
  return leitungssatz::srv::builder::Init_SelectCam_Request_camera_type();
}

}  // namespace leitungssatz


namespace leitungssatz
{

namespace srv
{

namespace builder
{

class Init_SelectCam_Response_message
{
public:
  explicit Init_SelectCam_Response_message(::leitungssatz::srv::SelectCam_Response & msg)
  : msg_(msg)
  {}
  ::leitungssatz::srv::SelectCam_Response message(::leitungssatz::srv::SelectCam_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Response msg_;
};

class Init_SelectCam_Response_success
{
public:
  explicit Init_SelectCam_Response_success(::leitungssatz::srv::SelectCam_Response & msg)
  : msg_(msg)
  {}
  Init_SelectCam_Response_message success(::leitungssatz::srv::SelectCam_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SelectCam_Response_message(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Response msg_;
};

class Init_SelectCam_Response_resolution_idx
{
public:
  explicit Init_SelectCam_Response_resolution_idx(::leitungssatz::srv::SelectCam_Response & msg)
  : msg_(msg)
  {}
  Init_SelectCam_Response_success resolution_idx(::leitungssatz::srv::SelectCam_Response::_resolution_idx_type arg)
  {
    msg_.resolution_idx = std::move(arg);
    return Init_SelectCam_Response_success(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Response msg_;
};

class Init_SelectCam_Response_available_resolutions
{
public:
  Init_SelectCam_Response_available_resolutions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelectCam_Response_resolution_idx available_resolutions(::leitungssatz::srv::SelectCam_Response::_available_resolutions_type arg)
  {
    msg_.available_resolutions = std::move(arg);
    return Init_SelectCam_Response_resolution_idx(msg_);
  }

private:
  ::leitungssatz::srv::SelectCam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::leitungssatz::srv::SelectCam_Response>()
{
  return leitungssatz::srv::builder::Init_SelectCam_Response_available_resolutions();
}

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__BUILDER_HPP_
