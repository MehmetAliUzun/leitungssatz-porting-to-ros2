// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_H_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "leitungssatz/msg/detail/resolution__struct.h"

/// Struct defined in msg/VectorResolution in the package leitungssatz.
typedef struct leitungssatz__msg__VectorResolution
{
  leitungssatz__msg__Resolution__Sequence data;
} leitungssatz__msg__VectorResolution;

// Struct for a sequence of leitungssatz__msg__VectorResolution.
typedef struct leitungssatz__msg__VectorResolution__Sequence
{
  leitungssatz__msg__VectorResolution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__msg__VectorResolution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__STRUCT_H_
