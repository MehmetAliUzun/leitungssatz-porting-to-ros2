// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leitungssatz:msg/VectorResolution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leitungssatz/msg/detail/vector_resolution__rosidl_typesupport_introspection_c.h"
#include "leitungssatz/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leitungssatz/msg/detail/vector_resolution__functions.h"
#include "leitungssatz/msg/detail/vector_resolution__struct.h"


// Include directives for member types
// Member `data`
#include "leitungssatz/msg/resolution.h"
// Member `data`
#include "leitungssatz/msg/detail/resolution__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leitungssatz__msg__VectorResolution__init(message_memory);
}

void leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_fini_function(void * message_memory)
{
  leitungssatz__msg__VectorResolution__fini(message_memory);
}

size_t leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__size_function__VectorResolution__data(
  const void * untyped_member)
{
  const leitungssatz__msg__Resolution__Sequence * member =
    (const leitungssatz__msg__Resolution__Sequence *)(untyped_member);
  return member->size;
}

const void * leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_const_function__VectorResolution__data(
  const void * untyped_member, size_t index)
{
  const leitungssatz__msg__Resolution__Sequence * member =
    (const leitungssatz__msg__Resolution__Sequence *)(untyped_member);
  return &member->data[index];
}

void * leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_function__VectorResolution__data(
  void * untyped_member, size_t index)
{
  leitungssatz__msg__Resolution__Sequence * member =
    (leitungssatz__msg__Resolution__Sequence *)(untyped_member);
  return &member->data[index];
}

void leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__fetch_function__VectorResolution__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const leitungssatz__msg__Resolution * item =
    ((const leitungssatz__msg__Resolution *)
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_const_function__VectorResolution__data(untyped_member, index));
  leitungssatz__msg__Resolution * value =
    (leitungssatz__msg__Resolution *)(untyped_value);
  *value = *item;
}

void leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__assign_function__VectorResolution__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  leitungssatz__msg__Resolution * item =
    ((leitungssatz__msg__Resolution *)
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_function__VectorResolution__data(untyped_member, index));
  const leitungssatz__msg__Resolution * value =
    (const leitungssatz__msg__Resolution *)(untyped_value);
  *item = *value;
}

bool leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__resize_function__VectorResolution__data(
  void * untyped_member, size_t size)
{
  leitungssatz__msg__Resolution__Sequence * member =
    (leitungssatz__msg__Resolution__Sequence *)(untyped_member);
  leitungssatz__msg__Resolution__Sequence__fini(member);
  return leitungssatz__msg__Resolution__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leitungssatz__msg__VectorResolution, data),  // bytes offset in struct
    NULL,  // default value
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__size_function__VectorResolution__data,  // size() function pointer
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_const_function__VectorResolution__data,  // get_const(index) function pointer
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__get_function__VectorResolution__data,  // get(index) function pointer
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__fetch_function__VectorResolution__data,  // fetch(index, &value) function pointer
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__assign_function__VectorResolution__data,  // assign(index, value) function pointer
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__resize_function__VectorResolution__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_members = {
  "leitungssatz__msg",  // message namespace
  "VectorResolution",  // message name
  1,  // number of fields
  sizeof(leitungssatz__msg__VectorResolution),
  leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_member_array,  // message members
  leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_init_function,  // function to initialize message memory (memory has to be allocated)
  leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_type_support_handle = {
  0,
  &leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leitungssatz
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leitungssatz, msg, VectorResolution)() {
  leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leitungssatz, msg, Resolution)();
  if (!leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_type_support_handle.typesupport_identifier) {
    leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &leitungssatz__msg__VectorResolution__rosidl_typesupport_introspection_c__VectorResolution_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
