// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef CAM_INTERFACE__MSG__DETAIL__PIXEL__FUNCTIONS_H_
#define CAM_INTERFACE__MSG__DETAIL__PIXEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cam_interface/msg/rosidl_generator_c__visibility_control.h"

#include "cam_interface/msg/detail/pixel__struct.h"

/// Initialize msg/Pixel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cam_interface__msg__Pixel
 * )) before or use
 * cam_interface__msg__Pixel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__init(cam_interface__msg__Pixel * msg);

/// Finalize msg/Pixel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__Pixel__fini(cam_interface__msg__Pixel * msg);

/// Create msg/Pixel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cam_interface__msg__Pixel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
cam_interface__msg__Pixel *
cam_interface__msg__Pixel__create();

/// Destroy msg/Pixel message.
/**
 * It calls
 * cam_interface__msg__Pixel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__Pixel__destroy(cam_interface__msg__Pixel * msg);

/// Check for msg/Pixel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__are_equal(const cam_interface__msg__Pixel * lhs, const cam_interface__msg__Pixel * rhs);

/// Copy a msg/Pixel message.
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
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__copy(
  const cam_interface__msg__Pixel * input,
  cam_interface__msg__Pixel * output);

/// Initialize array of msg/Pixel messages.
/**
 * It allocates the memory for the number of elements and calls
 * cam_interface__msg__Pixel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__Sequence__init(cam_interface__msg__Pixel__Sequence * array, size_t size);

/// Finalize array of msg/Pixel messages.
/**
 * It calls
 * cam_interface__msg__Pixel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__Pixel__Sequence__fini(cam_interface__msg__Pixel__Sequence * array);

/// Create array of msg/Pixel messages.
/**
 * It allocates the memory for the array and calls
 * cam_interface__msg__Pixel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
cam_interface__msg__Pixel__Sequence *
cam_interface__msg__Pixel__Sequence__create(size_t size);

/// Destroy array of msg/Pixel messages.
/**
 * It calls
 * cam_interface__msg__Pixel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
void
cam_interface__msg__Pixel__Sequence__destroy(cam_interface__msg__Pixel__Sequence * array);

/// Check for msg/Pixel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__Sequence__are_equal(const cam_interface__msg__Pixel__Sequence * lhs, const cam_interface__msg__Pixel__Sequence * rhs);

/// Copy an array of msg/Pixel messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cam_interface
bool
cam_interface__msg__Pixel__Sequence__copy(
  const cam_interface__msg__Pixel__Sequence * input,
  cam_interface__msg__Pixel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAM_INTERFACE__MSG__DETAIL__PIXEL__FUNCTIONS_H_
