// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/GrabBuchse.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GrabBuchse in the package leitungssatz.
typedef struct leitungssatz__srv__GrabBuchse_Request
{
  bool start;
} leitungssatz__srv__GrabBuchse_Request;

// Struct for a sequence of leitungssatz__srv__GrabBuchse_Request.
typedef struct leitungssatz__srv__GrabBuchse_Request__Sequence
{
  leitungssatz__srv__GrabBuchse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GrabBuchse_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GrabBuchse in the package leitungssatz.
typedef struct leitungssatz__srv__GrabBuchse_Response
{
  bool success;
} leitungssatz__srv__GrabBuchse_Response;

// Struct for a sequence of leitungssatz__srv__GrabBuchse_Response.
typedef struct leitungssatz__srv__GrabBuchse_Response__Sequence
{
  leitungssatz__srv__GrabBuchse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GrabBuchse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__GRAB_BUCHSE__STRUCT_H_
