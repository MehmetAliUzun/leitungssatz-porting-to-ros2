// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_HPP_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "leitungssatz/msg/detail/resolution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leitungssatz__msg__VectorResolution __attribute__((deprecated))
#else
# define DEPRECATED__leitungssatz__msg__VectorResolution __declspec(deprecated)
#endif

namespace leitungssatz
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VectorResolution_
{
  using Type = VectorResolution_<ContainerAllocator>;

  explicit VectorResolution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VectorResolution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<leitungssatz::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leitungssatz::msg::Resolution_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<leitungssatz::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leitungssatz::msg::Resolution_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leitungssatz::msg::VectorResolution_<ContainerAllocator> *;
  using ConstRawPtr =
    const leitungssatz::msg::VectorResolution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leitungssatz::msg::VectorResolution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leitungssatz::msg::VectorResolution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leitungssatz__msg__VectorResolution
    std::shared_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leitungssatz__msg__VectorResolution
    std::shared_ptr<leitungssatz::msg::VectorResolution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VectorResolution_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const VectorResolution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VectorResolution_

// alias to use template instance with default allocator
using VectorResolution =
  leitungssatz::msg::VectorResolution_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leitungssatz

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_HPP_
