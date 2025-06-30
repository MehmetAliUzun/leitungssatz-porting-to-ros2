// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__FUNCTIONS_H_
#define LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "leitungssatz/msg/rosidl_generator_c__visibility_control.h"

#include "leitungssatz/msg/detail/vector_resolution__struct.h"

/// Initialize msg/VectorResolution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leitungssatz__msg__VectorResolution
 * )) before or use
 * leitungssatz__msg__VectorResolution__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__init(leitungssatz__msg__VectorResolution * msg);

/// Finalize msg/VectorResolution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__VectorResolution__fini(leitungssatz__msg__VectorResolution * msg);

/// Create msg/VectorResolution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leitungssatz__msg__VectorResolution__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__msg__VectorResolution *
leitungssatz__msg__VectorResolution__create();

/// Destroy msg/VectorResolution message.
/**
 * It calls
 * leitungssatz__msg__VectorResolution__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__VectorResolution__destroy(leitungssatz__msg__VectorResolution * msg);

/// Check for msg/VectorResolution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__are_equal(const leitungssatz__msg__VectorResolution * lhs, const leitungssatz__msg__VectorResolution * rhs);

/// Copy a msg/VectorResolution message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__copy(
  const leitungssatz__msg__VectorResolution * input,
  leitungssatz__msg__VectorResolution * output);

/// Initialize array of msg/VectorResolution messages.
/**
 * It allocates the memory for the number of elements and calls
 * leitungssatz__msg__VectorResolution__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__Sequence__init(leitungssatz__msg__VectorResolution__Sequence * array, size_t size);

/// Finalize array of msg/VectorResolution messages.
/**
 * It calls
 * leitungssatz__msg__VectorResolution__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__VectorResolution__Sequence__fini(leitungssatz__msg__VectorResolution__Sequence * array);

/// Create array of msg/VectorResolution messages.
/**
 * It allocates the memory for the array and calls
 * leitungssatz__msg__VectorResolution__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__msg__VectorResolution__Sequence *
leitungssatz__msg__VectorResolution__Sequence__create(size_t size);

/// Destroy array of msg/VectorResolution messages.
/**
 * It calls
 * leitungssatz__msg__VectorResolution__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__VectorResolution__Sequence__destroy(leitungssatz__msg__VectorResolution__Sequence * array);

/// Check for msg/VectorResolution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__Sequence__are_equal(const leitungssatz__msg__VectorResolution__Sequence * lhs, const leitungssatz__msg__VectorResolution__Sequence * rhs);

/// Copy an array of msg/VectorResolution messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__VectorResolution__Sequence__copy(
  const leitungssatz__msg__VectorResolution__Sequence * input,
  leitungssatz__msg__VectorResolution__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__MSG__DETAIL__VECTOR_RESOLUTION__FUNCTIONS_H_
