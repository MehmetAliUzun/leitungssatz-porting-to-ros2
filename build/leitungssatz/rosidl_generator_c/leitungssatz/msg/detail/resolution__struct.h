// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_H_
#define LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Resolution in the package leitungssatz.
typedef struct leitungssatz__msg__Resolution
{
  uint32_t width;
  uint32_t height;
} leitungssatz__msg__Resolution;

// Struct for a sequence of leitungssatz__msg__Resolution.
typedef struct leitungssatz__msg__Resolution__Sequence
{
  leitungssatz__msg__Resolution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__msg__Resolution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__STRUCT_H_
