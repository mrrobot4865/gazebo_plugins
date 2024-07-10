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
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

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

size_t cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__size_function__Pixel__im_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__im_data(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__im_data(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__fetch_function__Pixel__im_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__im_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__assign_function__Pixel__im_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__im_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_member_array[2] = {
  {
    "im_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, im_data),  // bytes offset in struct
    NULL,  // default value
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__size_function__Pixel__im_data,  // size() function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_const_function__Pixel__im_data,  // get_const(index) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__get_function__Pixel__im_data,  // get(index) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__fetch_function__Pixel__im_data,  // fetch(index, &value) function pointer
    cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__assign_function__Pixel__im_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cam_interface__msg__Pixel, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cam_interface__msg__Pixel__rosidl_typesupport_introspection_c__Pixel_message_members = {
  "cam_interface__msg",  // message namespace
  "Pixel",  // message name
  2,  // number of fields
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
