// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/GetTriangles.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTriangles in the package leitungssatz.
typedef struct leitungssatz__srv__GetTriangles_Request
{
  uint8_t structure_needs_at_least_one_member;
} leitungssatz__srv__GetTriangles_Request;

// Struct for a sequence of leitungssatz__srv__GetTriangles_Request.
typedef struct leitungssatz__srv__GetTriangles_Request__Sequence
{
  leitungssatz__srv__GetTriangles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetTriangles_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetTriangles in the package leitungssatz.
typedef struct leitungssatz__srv__GetTriangles_Response
{
  double delta;
  int8_t status;
} leitungssatz__srv__GetTriangles_Response;

// Struct for a sequence of leitungssatz__srv__GetTriangles_Response.
typedef struct leitungssatz__srv__GetTriangles_Response__Sequence
{
  leitungssatz__srv__GetTriangles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetTriangles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_TRIANGLES__STRUCT_H_
