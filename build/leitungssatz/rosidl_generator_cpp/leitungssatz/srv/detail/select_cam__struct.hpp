// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leitungssatz:srv/SelectCam.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__leitungssatz__srv__SelectCam_Request __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__srv__SelectCam_Request __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectCam_Request_
{
  using Type = SelectCam_Request_<ContainerAllocator>;

  explicit SelectCam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_type = "";
      this->camera_index = 0ul;
    }
  }

  explicit SelectCam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_type = "";
      this->camera_index = 0ul;
    }
  }

  // field types and members
  using _camera_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_type_type camera_type;
  using _camera_index_type =
    uint32_t;
  _camera_index_type camera_index;

  // setters for named parameter idiom
  Type & set__camera_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_type = _arg;
    return *this;
  }
  Type & set__camera_index(
    const uint32_t & _arg)
  {
    this->camera_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::srv::SelectCam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::srv::SelectCam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SelectCam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SelectCam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__srv__SelectCam_Request
    std::shared_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__srv__SelectCam_Request
    std::shared_ptr<leitungssatz::srv::SelectCam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectCam_Request_ & other) const
  {
    if (this->camera_type != other.camera_type) {
      return false;
    }
    if (this->camera_index != other.camera_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectCam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectCam_Request_

// alias to use template instance with default allocator
using SelectCam_Request =
  leitungssatz::srv::SelectCam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leitungssatz


// Include directives for member types
// Member 'available_resolutions'
#include "leitungssatz/msg/detail/vector_resolution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leitungssatz__srv__SelectCam_Response __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__srv__SelectCam_Response __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectCam_Response_
{
  using Type = SelectCam_Response_<ContainerAllocator>;

  explicit SelectCam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : available_resolutions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution_idx = 0ul;
      this->success = false;
      this->message = "";
    }
  }

  explicit SelectCam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : available_resolutions(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution_idx = 0ul;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _available_resolutions_type =
    leitungssatz::msg::VectorResolution_<ContainerAllocator>;
  _available_resolutions_type available_resolutions;
  using _resolution_idx_type =
    uint32_t;
  _resolution_idx_type resolution_idx;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__available_resolutions(
    const leitungssatz::msg::VectorResolution_<ContainerAllocator> & _arg)
  {
    this->available_resolutions = _arg;
    return *this;
  }
  Type & set__resolution_idx(
    const uint32_t & _arg)
  {
    this->resolution_idx = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::srv::SelectCam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::srv::SelectCam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SelectCam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SelectCam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__srv__SelectCam_Response
    std::shared_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__srv__SelectCam_Response
    std::shared_ptr<leitungssatz::srv::SelectCam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectCam_Response_ & other) const
  {
    if (this->available_resolutions != other.available_resolutions) {
      return false;
    }
    if (this->resolution_idx != other.resolution_idx) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectCam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectCam_Response_

// alias to use template instance with default allocator
using SelectCam_Response =
  leitungssatz::srv::SelectCam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leitungssatz

namespace leitungssatz
{

namespace srv
{

struct SelectCam
{
  using Request = leitungssatz::srv::SelectCam_Request;
  using Response = leitungssatz::srv::SelectCam_Response;
};

}  // namespace srv

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_HPP_
