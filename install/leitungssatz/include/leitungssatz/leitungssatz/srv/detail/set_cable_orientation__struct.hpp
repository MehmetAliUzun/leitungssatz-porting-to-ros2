// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leitungssatz:srv/SetCableOrientation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__STRUCT_HPP_
#define LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__leitungssatz__srv__SetCableOrientation_Request __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__srv__SetCableOrientation_Request __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCableOrientation_Request_
{
  using Type = SetCableOrientation_Request_<ContainerAllocator>;

  explicit SetCableOrientation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->learning = false;
      this->cable_number = 0;
    }
  }

  explicit SetCableOrientation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->learning = false;
      this->cable_number = 0;
    }
  }

  // field types and members
  using _learning_type =
    bool;
  _learning_type learning;
  using _cable_number_type =
    int8_t;
  _cable_number_type cable_number;

  // setters for named parameter idiom
  Type & set__learning(
    const bool & _arg)
  {
    this->learning = _arg;
    return *this;
  }
  Type & set__cable_number(
    const int8_t & _arg)
  {
    this->cable_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__srv__SetCableOrientation_Request
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__srv__SetCableOrientation_Request
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCableOrientation_Request_ & other) const
  {
    if (this->learning != other.learning) {
      return false;
    }
    if (this->cable_number != other.cable_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCableOrientation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCableOrientation_Request_

// alias to use template instance with default allocator
using SetCableOrientation_Request =
  leitungssatz::srv::SetCableOrientation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leitungssatz


#ifndef _WIN32
# define DEPRECATED__leitungssatz__srv__SetCableOrientation_Response __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__srv__SetCableOrientation_Response __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCableOrientation_Response_
{
  using Type = SetCableOrientation_Response_<ContainerAllocator>;

  explicit SetCableOrientation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCableOrientation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__srv__SetCableOrientation_Response
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__srv__SetCableOrientation_Response
    std::shared_ptr<leitungssatz::srv::SetCableOrientation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCableOrientation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCableOrientation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCableOrientation_Response_

// alias to use template instance with default allocator
using SetCableOrientation_Response =
  leitungssatz::srv::SetCableOrientation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace leitungssatz

namespace leitungssatz
{

namespace srv
{

struct SetCableOrientation
{
  using Request = leitungssatz::srv::SetCableOrientation_Request;
  using Response = leitungssatz::srv::SetCableOrientation_Response;
};

}  // namespace srv

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__SRV__DETAIL__SET_CABLE_ORIENTATION__STRUCT_HPP_
