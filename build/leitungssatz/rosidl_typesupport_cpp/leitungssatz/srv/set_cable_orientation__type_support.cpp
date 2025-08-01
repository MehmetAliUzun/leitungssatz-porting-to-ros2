// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from leitungssatz:srv/SetCableOrientation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "leitungssatz/srv/detail/set_cable_orientation__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace leitungssatz
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCableOrientation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCableOrientation_Request_type_support_ids_t;

static const _SetCableOrientation_Request_type_support_ids_t _SetCableOrientation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCableOrientation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCableOrientation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCableOrientation_Request_type_support_symbol_names_t _SetCableOrientation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leitungssatz, srv, SetCableOrientation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leitungssatz, srv, SetCableOrientation_Request)),
  }
};

typedef struct _SetCableOrientation_Request_type_support_data_t
{
  void * data[2];
} _SetCableOrientation_Request_type_support_data_t;

static _SetCableOrientation_Request_type_support_data_t _SetCableOrientation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCableOrientation_Request_message_typesupport_map = {
  2,
  "leitungssatz",
  &_SetCableOrientation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCableOrientation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCableOrientation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCableOrientation_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCableOrientation_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace leitungssatz

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<leitungssatz::srv::SetCableOrientation_Request>()
{
  return &::leitungssatz::srv::rosidl_typesupport_cpp::SetCableOrientation_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, leitungssatz, srv, SetCableOrientation_Request)() {
  return get_message_type_support_handle<leitungssatz::srv::SetCableOrientation_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "leitungssatz/srv/detail/set_cable_orientation__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace leitungssatz
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCableOrientation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCableOrientation_Response_type_support_ids_t;

static const _SetCableOrientation_Response_type_support_ids_t _SetCableOrientation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCableOrientation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCableOrientation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCableOrientation_Response_type_support_symbol_names_t _SetCableOrientation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leitungssatz, srv, SetCableOrientation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leitungssatz, srv, SetCableOrientation_Response)),
  }
};

typedef struct _SetCableOrientation_Response_type_support_data_t
{
  void * data[2];
} _SetCableOrientation_Response_type_support_data_t;

static _SetCableOrientation_Response_type_support_data_t _SetCableOrientation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCableOrientation_Response_message_typesupport_map = {
  2,
  "leitungssatz",
  &_SetCableOrientation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCableOrientation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCableOrientation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCableOrientation_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCableOrientation_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace leitungssatz

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<leitungssatz::srv::SetCableOrientation_Response>()
{
  return &::leitungssatz::srv::rosidl_typesupport_cpp::SetCableOrientation_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, leitungssatz, srv, SetCableOrientation_Response)() {
  return get_message_type_support_handle<leitungssatz::srv::SetCableOrientation_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "leitungssatz/srv/detail/set_cable_orientation__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace leitungssatz
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCableOrientation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCableOrientation_type_support_ids_t;

static const _SetCableOrientation_type_support_ids_t _SetCableOrientation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCableOrientation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCableOrientation_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCableOrientation_type_support_symbol_names_t _SetCableOrientation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leitungssatz, srv, SetCableOrientation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leitungssatz, srv, SetCableOrientation)),
  }
};

typedef struct _SetCableOrientation_type_support_data_t
{
  void * data[2];
} _SetCableOrientation_type_support_data_t;

static _SetCableOrientation_type_support_data_t _SetCableOrientation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCableOrientation_service_typesupport_map = {
  2,
  "leitungssatz",
  &_SetCableOrientation_service_typesupport_ids.typesupport_identifier[0],
  &_SetCableOrientation_service_typesupport_symbol_names.symbol_name[0],
  &_SetCableOrientation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCableOrientation_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCableOrientation_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace leitungssatz

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<leitungssatz::srv::SetCableOrientation>()
{
  return &::leitungssatz::srv::rosidl_typesupport_cpp::SetCableOrientation_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, leitungssatz, srv, SetCableOrientation)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<leitungssatz::srv::SetCableOrientation>();
}

#ifdef __cplusplus
}
#endif
