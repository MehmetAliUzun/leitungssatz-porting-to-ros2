// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from leitungssatz:srv/SelectCam.idl
// generated code does not contain a copyright notice
#include "leitungssatz/srv/detail/select_cam__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "leitungssatz/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "leitungssatz/srv/detail/select_cam__struct.h"
#include "leitungssatz/srv/detail/select_cam__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // camera_type
#include "rosidl_runtime_c/string_functions.h"  // camera_type

// forward declare type support functions


using _SelectCam_Request__ros_msg_type = leitungssatz__srv__SelectCam_Request;

static bool _SelectCam_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SelectCam_Request__ros_msg_type * ros_message = static_cast<const _SelectCam_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_type
  {
    const rosidl_runtime_c__String * str = &ros_message->camera_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: camera_index
  {
    cdr << ros_message->camera_index;
  }

  return true;
}

static bool _SelectCam_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SelectCam_Request__ros_msg_type * ros_message = static_cast<_SelectCam_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_type.data) {
      rosidl_runtime_c__String__init(&ros_message->camera_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->camera_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_type'\n");
      return false;
    }
  }

  // Field name: camera_index
  {
    cdr >> ros_message->camera_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leitungssatz
size_t get_serialized_size_leitungssatz__srv__SelectCam_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SelectCam_Request__ros_msg_type * ros_message = static_cast<const _SelectCam_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name camera_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_type.size + 1);
  // field.name camera_index
  {
    size_t item_size = sizeof(ros_message->camera_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SelectCam_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_leitungssatz__srv__SelectCam_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leitungssatz
size_t max_serialized_size_leitungssatz__srv__SelectCam_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: camera_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: camera_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = leitungssatz__srv__SelectCam_Request;
    is_plain =
      (
      offsetof(DataType, camera_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SelectCam_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_leitungssatz__srv__SelectCam_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SelectCam_Request = {
  "leitungssatz::srv",
  "SelectCam_Request",
  _SelectCam_Request__cdr_serialize,
  _SelectCam_Request__cdr_deserialize,
  _SelectCam_Request__get_serialized_size,
  _SelectCam_Request__max_serialized_size
};

static rosidl_message_type_support_t _SelectCam_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SelectCam_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, srv, SelectCam_Request)() {
  return &_SelectCam_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "leitungssatz/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "leitungssatz/srv/detail/select_cam__struct.h"
// already included above
// #include "leitungssatz/srv/detail/select_cam__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "leitungssatz/msg/detail/vector_resolution__functions.h"  // available_resolutions
// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions
size_t get_serialized_size_leitungssatz__msg__VectorResolution(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_leitungssatz__msg__VectorResolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, msg, VectorResolution)();


using _SelectCam_Response__ros_msg_type = leitungssatz__srv__SelectCam_Response;

static bool _SelectCam_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SelectCam_Response__ros_msg_type * ros_message = static_cast<const _SelectCam_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: available_resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, leitungssatz, msg, VectorResolution
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->available_resolutions, cdr))
    {
      return false;
    }
  }

  // Field name: resolution_idx
  {
    cdr << ros_message->resolution_idx;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SelectCam_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SelectCam_Response__ros_msg_type * ros_message = static_cast<_SelectCam_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: available_resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, leitungssatz, msg, VectorResolution
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->available_resolutions))
    {
      return false;
    }
  }

  // Field name: resolution_idx
  {
    cdr >> ros_message->resolution_idx;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leitungssatz
size_t get_serialized_size_leitungssatz__srv__SelectCam_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SelectCam_Response__ros_msg_type * ros_message = static_cast<const _SelectCam_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name available_resolutions

  current_alignment += get_serialized_size_leitungssatz__msg__VectorResolution(
    &(ros_message->available_resolutions), current_alignment);
  // field.name resolution_idx
  {
    size_t item_size = sizeof(ros_message->resolution_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SelectCam_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_leitungssatz__srv__SelectCam_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leitungssatz
size_t max_serialized_size_leitungssatz__srv__SelectCam_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: available_resolutions
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_leitungssatz__msg__VectorResolution(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: resolution_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = leitungssatz__srv__SelectCam_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SelectCam_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_leitungssatz__srv__SelectCam_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SelectCam_Response = {
  "leitungssatz::srv",
  "SelectCam_Response",
  _SelectCam_Response__cdr_serialize,
  _SelectCam_Response__cdr_deserialize,
  _SelectCam_Response__get_serialized_size,
  _SelectCam_Response__max_serialized_size
};

static rosidl_message_type_support_t _SelectCam_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SelectCam_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, srv, SelectCam_Response)() {
  return &_SelectCam_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "leitungssatz/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "leitungssatz/srv/select_cam.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SelectCam__callbacks = {
  "leitungssatz::srv",
  "SelectCam",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, srv, SelectCam_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, srv, SelectCam_Response)(),
};

static rosidl_service_type_support_t SelectCam__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SelectCam__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leitungssatz, srv, SelectCam)() {
  return &SelectCam__handle;
}

#if defined(__cplusplus)
}
#endif
