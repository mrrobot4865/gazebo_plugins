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
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Pixel in the package cam_interface.
typedef struct cam_interface__msg__Pixel
{
  int64_t timestamp;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__String encoding;
  uint8_t is_bigendian;
  uint32_t step;
  rosidl_runtime_c__uint8__Sequence data;
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
