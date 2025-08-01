// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/GetFinished.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetFinished in the package leitungssatz.
typedef struct leitungssatz__srv__GetFinished_Request
{
  uint8_t structure_needs_at_least_one_member;
} leitungssatz__srv__GetFinished_Request;

// Struct for a sequence of leitungssatz__srv__GetFinished_Request.
typedef struct leitungssatz__srv__GetFinished_Request__Sequence
{
  leitungssatz__srv__GetFinished_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetFinished_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetFinished in the package leitungssatz.
typedef struct leitungssatz__srv__GetFinished_Response
{
  bool success;
} leitungssatz__srv__GetFinished_Response;

// Struct for a sequence of leitungssatz__srv__GetFinished_Response.
typedef struct leitungssatz__srv__GetFinished_Response__Sequence
{
  leitungssatz__srv__GetFinished_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetFinished_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_FINISHED__STRUCT_H_
