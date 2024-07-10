// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cam_interface:msg/Pixel.idl
// generated code does not contain a copyright notice
#include "cam_interface/msg/detail/pixel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cam_interface__msg__Pixel__init(cam_interface__msg__Pixel * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // height
  // width
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    cam_interface__msg__Pixel__fini(msg);
    return false;
  }
  // is_bigendian
  // step
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    cam_interface__msg__Pixel__fini(msg);
    return false;
  }
  return true;
}

void
cam_interface__msg__Pixel__fini(cam_interface__msg__Pixel * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // height
  // width
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // is_bigendian
  // step
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
cam_interface__msg__Pixel__are_equal(const cam_interface__msg__Pixel * lhs, const cam_interface__msg__Pixel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
cam_interface__msg__Pixel__copy(
  const cam_interface__msg__Pixel * input,
  cam_interface__msg__Pixel * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // step
  output->step = input->step;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

cam_interface__msg__Pixel *
cam_interface__msg__Pixel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__Pixel * msg = (cam_interface__msg__Pixel *)allocator.allocate(sizeof(cam_interface__msg__Pixel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cam_interface__msg__Pixel));
  bool success = cam_interface__msg__Pixel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cam_interface__msg__Pixel__destroy(cam_interface__msg__Pixel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cam_interface__msg__Pixel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cam_interface__msg__Pixel__Sequence__init(cam_interface__msg__Pixel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__Pixel * data = NULL;

  if (size) {
    data = (cam_interface__msg__Pixel *)allocator.zero_allocate(size, sizeof(cam_interface__msg__Pixel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cam_interface__msg__Pixel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cam_interface__msg__Pixel__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cam_interface__msg__Pixel__Sequence__fini(cam_interface__msg__Pixel__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cam_interface__msg__Pixel__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cam_interface__msg__Pixel__Sequence *
cam_interface__msg__Pixel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cam_interface__msg__Pixel__Sequence * array = (cam_interface__msg__Pixel__Sequence *)allocator.allocate(sizeof(cam_interface__msg__Pixel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cam_interface__msg__Pixel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cam_interface__msg__Pixel__Sequence__destroy(cam_interface__msg__Pixel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cam_interface__msg__Pixel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cam_interface__msg__Pixel__Sequence__are_equal(const cam_interface__msg__Pixel__Sequence * lhs, const cam_interface__msg__Pixel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cam_interface__msg__Pixel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cam_interface__msg__Pixel__Sequence__copy(
  const cam_interface__msg__Pixel__Sequence * input,
  cam_interface__msg__Pixel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cam_interface__msg__Pixel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cam_interface__msg__Pixel * data =
      (cam_interface__msg__Pixel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cam_interface__msg__Pixel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cam_interface__msg__Pixel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cam_interface__msg__Pixel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
