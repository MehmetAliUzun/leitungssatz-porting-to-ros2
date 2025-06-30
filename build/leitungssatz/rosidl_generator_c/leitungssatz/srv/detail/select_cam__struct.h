// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leitungssatz:srv/SelectCam.idl
// generated code does not contain a copyright notice

#ifndef LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_H_
#define LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SelectCam in the package leitungssatz.
typedef struct leitungssatz__srv__SelectCam_Request
{
  /// Type of camera, options are: "IDS", "FLIR", "USB"
  rosidl_runtime_c__String camera_type;
  /// Index of the camera if there are several of the same manufacturer connected
  uint32_t camera_index;
} leitungssatz__srv__SelectCam_Request;

// Struct for a sequence of leitungssatz__srv__SelectCam_Request.
typedef struct leitungssatz__srv__SelectCam_Request__Sequence
{
  leitungssatz__srv__SelectCam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__SelectCam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'available_resolutions'
#include "leitungssatz/msg/detail/vector_resolution__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SelectCam in the package leitungssatz.
typedef struct leitungssatz__srv__SelectCam_Response
{
  /// All the resolutions that the camera support
  leitungssatz__msg__VectorResolution available_resolutions;
  /// The index of availableResolutions that holds the current resolution of the camera (zero based indexing)
  uint32_t resolution_idx;
  /// indicate successful run of camera selection
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} leitungssatz__srv__SelectCam_Response;

// Struct for a sequence of leitungssatz__srv__SelectCam_Response.
typedef struct leitungssatz__srv__SelectCam_Response__Sequence
{
  leitungssatz__srv__SelectCam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leitungssatz__srv__SelectCam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEITUNGSSATZ__SRV__DETAIL__SELECT_CAM__STRUCT_H_
