// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/AddTf2.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in srv/AddTf2 in the package leitungssatz.
typedef struct leitungssatz__srv__AddTf2_Request
{
  geometry_msgs__msg__TransformStamped pose;
  bool relative;
} leitungssatz__srv__AddTf2_Request;

// Struct for a sequence of leitungssatz__srv__AddTf2_Request.
typedef struct leitungssatz__srv__AddTf2_Request__Sequence
{
  leitungssatz__srv__AddTf2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__AddTf2_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTf2 in the package leitungssatz.
typedef struct leitungssatz__srv__AddTf2_Response
{
  bool success;
} leitungssatz__srv__AddTf2_Response;

// Struct for a sequence of leitungssatz__srv__AddTf2_Response.
typedef struct leitungssatz__srv__AddTf2_Response__Sequence
{
  leitungssatz__srv__AddTf2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__AddTf2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__STRUCT_H_
