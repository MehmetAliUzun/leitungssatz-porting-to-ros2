// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetExposure in the package leitungssatz.
typedef struct leitungssatz__srv__SetExposure_Request
{
  int8_t time;
} leitungssatz__srv__SetExposure_Request;

// Struct for a sequence of leitungssatz__srv__SetExposure_Request.
typedef struct leitungssatz__srv__SetExposure_Request__Sequence
{
  leitungssatz__srv__SetExposure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__SetExposure_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetExposure in the package leitungssatz.
typedef struct leitungssatz__srv__SetExposure_Response
{
  bool success;
} leitungssatz__srv__SetExposure_Response;

// Struct for a sequence of leitungssatz__srv__SetExposure_Response.
typedef struct leitungssatz__srv__SetExposure_Response__Sequence
{
  leitungssatz__srv__SetExposure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__SetExposure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__SET_EXPOSURE__STRUCT_H_
