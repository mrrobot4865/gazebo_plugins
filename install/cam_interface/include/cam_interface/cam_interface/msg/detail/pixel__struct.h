// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_H_
#define CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Pixel in the package cam_interface.
typedef struct cam_interface__msg__Pixel
{
  float im_data[3];
  rosidl_runtime_c__String name;
} cam_interface__msg__Pixel;

// Struct for a sequence of cam_interface__msg__Pixel.
typedef struct cam_interface__msg__Pixel__Sequence
{
  cam_interface__msg__Pixel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cam_interface__msg__Pixel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__STRUCT_H_
