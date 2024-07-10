// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cam_interface/msg/detail/pixel__rosidl_typesupport_introspection_c.h"
#include "cam_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cam_interface/msg/detail/pixel__functions.h"
#include "cam_interface/msg/detail/pixel__struct.h"


// Include directives for member types
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cam_interface__msg__Pixel__init(message_memory);
}

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_fini_function(void * message_memory)
{
  cam_interface__msg__Pixel__fini(message_memory);
}

size_t cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__size_function__Pixel__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__fetch_function__Pixel__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__assign_function__Pixel__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__resize_function__Pixel__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, encoding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, data),  // bytes offset in struct
    NULL,  // default value
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__size_function__Pixel__data,  // size() function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__data,  // get_const(index) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__data,  // get(index) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__fetch_function__Pixel__data,  // fetch(index, &value) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__assign_function__Pixel__data,  // assign(index, value) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__resize_function__Pixel__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_members = {
  "cam_interface__msg",  // message namespace
  "Pixel",  // message name
  7,  // number of fields
  sizeof(cam_interface__msg__Pixel),
  cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_member_array,  // message members
  cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_init_function,  // function to initialize message memory (memory has to be allocated)
  cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle = {
  0,
  &cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cam_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cam_interface, msg, Pixel)() {
  if (!cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle.typesupport_identifier) {
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
