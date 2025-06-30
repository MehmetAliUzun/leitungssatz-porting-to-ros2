// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leitungssatz:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__leitungssatz__msg__Resolution __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__msg__Resolution __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Resolution_
{
  using Type = Resolution_<ContainerAllocator>;

  explicit Resolution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  explicit Resolution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  // field types and members
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::msg::Resolution_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::msg::Resolution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::msg::Resolution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::msg::Resolution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::msg::Resolution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::msg::Resolution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::msg::Resolution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::msg::Resolution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::msg::Resolution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::msg::Resolution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__msg__Resolution
    std::shared_ptr<leitungssatz::msg::Resolution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__msg__Resolution
    std::shared_ptr<leitungssatz::msg::Resolution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Resolution_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const Resolution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Resolution_

// alias to use template instance with default allocator
using Resolution =
  leitungssatz::msg::Resolution_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_HPP_
