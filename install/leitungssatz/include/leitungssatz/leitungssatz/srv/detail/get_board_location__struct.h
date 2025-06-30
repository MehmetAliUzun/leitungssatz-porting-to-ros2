// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/GetBoardLocation.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBoardLocation in the package leitungssatz.
typedef struct leitungssatz__srv__GetBoardLocation_Request
{
  uint8_t structure_needs_at_least_one_member;
} leitungssatz__srv__GetBoardLocation_Request;

// Struct for a sequence of leitungssatz__srv__GetBoardLocation_Request.
typedef struct leitungssatz__srv__GetBoardLocation_Request__Sequence
{
  leitungssatz__srv__GetBoardLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetBoardLocation_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetBoardLocation in the package leitungssatz.
typedef struct leitungssatz__srv__GetBoardLocation_Response
{
  bool success;
  int8_t config;
} leitungssatz__srv__GetBoardLocation_Response;

// Struct for a sequence of leitungssatz__srv__GetBoardLocation_Response.
typedef struct leitungssatz__srv__GetBoardLocation_Response__Sequence
{
  leitungssatz__srv__GetBoardLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__GetBoardLocation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__GET_BOARD_LOCATION__STRUCT_H_
