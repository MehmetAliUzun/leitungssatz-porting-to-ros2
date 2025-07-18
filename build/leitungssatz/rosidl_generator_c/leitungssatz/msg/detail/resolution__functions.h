// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leitungssatz:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__FUNCTIONS_H_
#define LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "leitungssatz/msg/rosidl_generator_c__visibility_control.h"

#include "leitungssatz/msg/detail/resolution__struct.h"

/// Initialize msg/Resolution message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leitungssatz__msg__Resolution
 * )) before or use
 * leitungssatz__msg__Resolution__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__Resolution__init(leitungssatz__msg__Resolution * msg);

/// Finalize msg/Resolution message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__Resolution__fini(leitungssatz__msg__Resolution * msg);

/// Create msg/Resolution message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leitungssatz__msg__Resolution__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__msg__Resolution *
leitungssatz__msg__Resolution__create();

/// Destroy msg/Resolution message.
/**
 * It calls
 * leitungssatz__msg__Resolution__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__Resolution__destroy(leitungssatz__msg__Resolution * msg);

/// Check for msg/Resolution message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__Resolution__are_equal(const leitungssatz__msg__Resolution * lhs, const leitungssatz__msg__Resolution * rhs);

/// Copy a msg/Resolution message.
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
leitungssatz__msg__Resolution__copy(
  const leitungssatz__msg__Resolution * input,
  leitungssatz__msg__Resolution * output);

/// Initialize array of msg/Resolution messages.
/**
 * It allocates the memory for the number of elements and calls
 * leitungssatz__msg__Resolution__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__Resolution__Sequence__init(leitungssatz__msg__Resolution__Sequence * array, size_t size);

/// Finalize array of msg/Resolution messages.
/**
 * It calls
 * leitungssatz__msg__Resolution__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__Resolution__Sequence__fini(leitungssatz__msg__Resolution__Sequence * array);

/// Create array of msg/Resolution messages.
/**
 * It allocates the memory for the array and calls
 * leitungssatz__msg__Resolution__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__msg__Resolution__Sequence *
leitungssatz__msg__Resolution__Sequence__create(size_t size);

/// Destroy array of msg/Resolution messages.
/**
 * It calls
 * leitungssatz__msg__Resolution__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__msg__Resolution__Sequence__destroy(leitungssatz__msg__Resolution__Sequence * array);

/// Check for msg/Resolution message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__msg__Resolution__Sequence__are_equal(const leitungssatz__msg__Resolution__Sequence * lhs, const leitungssatz__msg__Resolution__Sequence * rhs);

/// Copy an array of msg/Resolution messages.
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
leitungssatz__msg__Resolution__Sequence__copy(
  const leitungssatz__msg__Resolution__Sequence * input,
  leitungssatz__msg__Resolution__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__MSG__DETAIL__RESOLUTION__FUNCTIONS_H_
