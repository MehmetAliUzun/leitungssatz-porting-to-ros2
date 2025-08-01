// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leitungssatz:srv/AddTf2.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__FUNCTIONS_H_
#define LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "leitungssatz/msg/rosidl_generator_c__visibility_control.h"

#include "leitungssatz/srv/detail/add_tf2__struct.h"

/// Initialize srv/AddTf2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leitungssatz__srv__AddTf2_Request
 * )) before or use
 * leitungssatz__srv__AddTf2_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Request__init(leitungssatz__srv__AddTf2_Request * msg);

/// Finalize srv/AddTf2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Request__fini(leitungssatz__srv__AddTf2_Request * msg);

/// Create srv/AddTf2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leitungssatz__srv__AddTf2_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__srv__AddTf2_Request *
leitungssatz__srv__AddTf2_Request__create();

/// Destroy srv/AddTf2 message.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Request__destroy(leitungssatz__srv__AddTf2_Request * msg);

/// Check for srv/AddTf2 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Request__are_equal(const leitungssatz__srv__AddTf2_Request * lhs, const leitungssatz__srv__AddTf2_Request * rhs);

/// Copy a srv/AddTf2 message.
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
leitungssatz__srv__AddTf2_Request__copy(
  const leitungssatz__srv__AddTf2_Request * input,
  leitungssatz__srv__AddTf2_Request * output);

/// Initialize array of srv/AddTf2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * leitungssatz__srv__AddTf2_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Request__Sequence__init(leitungssatz__srv__AddTf2_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddTf2 messages.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Request__Sequence__fini(leitungssatz__srv__AddTf2_Request__Sequence * array);

/// Create array of srv/AddTf2 messages.
/**
 * It allocates the memory for the array and calls
 * leitungssatz__srv__AddTf2_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__srv__AddTf2_Request__Sequence *
leitungssatz__srv__AddTf2_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddTf2 messages.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Request__Sequence__destroy(leitungssatz__srv__AddTf2_Request__Sequence * array);

/// Check for srv/AddTf2 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Request__Sequence__are_equal(const leitungssatz__srv__AddTf2_Request__Sequence * lhs, const leitungssatz__srv__AddTf2_Request__Sequence * rhs);

/// Copy an array of srv/AddTf2 messages.
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
leitungssatz__srv__AddTf2_Request__Sequence__copy(
  const leitungssatz__srv__AddTf2_Request__Sequence * input,
  leitungssatz__srv__AddTf2_Request__Sequence * output);

/// Initialize srv/AddTf2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leitungssatz__srv__AddTf2_Response
 * )) before or use
 * leitungssatz__srv__AddTf2_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Response__init(leitungssatz__srv__AddTf2_Response * msg);

/// Finalize srv/AddTf2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Response__fini(leitungssatz__srv__AddTf2_Response * msg);

/// Create srv/AddTf2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leitungssatz__srv__AddTf2_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__srv__AddTf2_Response *
leitungssatz__srv__AddTf2_Response__create();

/// Destroy srv/AddTf2 message.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Response__destroy(leitungssatz__srv__AddTf2_Response * msg);

/// Check for srv/AddTf2 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Response__are_equal(const leitungssatz__srv__AddTf2_Response * lhs, const leitungssatz__srv__AddTf2_Response * rhs);

/// Copy a srv/AddTf2 message.
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
leitungssatz__srv__AddTf2_Response__copy(
  const leitungssatz__srv__AddTf2_Response * input,
  leitungssatz__srv__AddTf2_Response * output);

/// Initialize array of srv/AddTf2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * leitungssatz__srv__AddTf2_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Response__Sequence__init(leitungssatz__srv__AddTf2_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddTf2 messages.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Response__Sequence__fini(leitungssatz__srv__AddTf2_Response__Sequence * array);

/// Create array of srv/AddTf2 messages.
/**
 * It allocates the memory for the array and calls
 * leitungssatz__srv__AddTf2_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
leitungssatz__srv__AddTf2_Response__Sequence *
leitungssatz__srv__AddTf2_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddTf2 messages.
/**
 * It calls
 * leitungssatz__srv__AddTf2_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
void
leitungssatz__srv__AddTf2_Response__Sequence__destroy(leitungssatz__srv__AddTf2_Response__Sequence * array);

/// Check for srv/AddTf2 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leitungssatz
bool
leitungssatz__srv__AddTf2_Response__Sequence__are_equal(const leitungssatz__srv__AddTf2_Response__Sequence * lhs, const leitungssatz__srv__AddTf2_Response__Sequence * rhs);

/// Copy an array of srv/AddTf2 messages.
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
leitungssatz__srv__AddTf2_Response__Sequence__copy(
  const leitungssatz__srv__AddTf2_Response__Sequence * input,
  leitungssatz__srv__AddTf2_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__ADD_TF2__FUNCTIONS_H_
