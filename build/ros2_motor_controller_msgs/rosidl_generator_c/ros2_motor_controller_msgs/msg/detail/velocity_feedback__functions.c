// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice
#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_motor_controller_msgs__msg__VelocityFeedback__init(ros2_motor_controller_msgs__msg__VelocityFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // real_velocity
  // bj_velocity
  // armax_velocity
  return true;
}

void
ros2_motor_controller_msgs__msg__VelocityFeedback__fini(ros2_motor_controller_msgs__msg__VelocityFeedback * msg)
{
  if (!msg) {
    return;
  }
  // real_velocity
  // bj_velocity
  // armax_velocity
}

bool
ros2_motor_controller_msgs__msg__VelocityFeedback__are_equal(const ros2_motor_controller_msgs__msg__VelocityFeedback * lhs, const ros2_motor_controller_msgs__msg__VelocityFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // real_velocity
  if (lhs->real_velocity != rhs->real_velocity) {
    return false;
  }
  // bj_velocity
  if (lhs->bj_velocity != rhs->bj_velocity) {
    return false;
  }
  // armax_velocity
  if (lhs->armax_velocity != rhs->armax_velocity) {
    return false;
  }
  return true;
}

bool
ros2_motor_controller_msgs__msg__VelocityFeedback__copy(
  const ros2_motor_controller_msgs__msg__VelocityFeedback * input,
  ros2_motor_controller_msgs__msg__VelocityFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // real_velocity
  output->real_velocity = input->real_velocity;
  // bj_velocity
  output->bj_velocity = input->bj_velocity;
  // armax_velocity
  output->armax_velocity = input->armax_velocity;
  return true;
}

ros2_motor_controller_msgs__msg__VelocityFeedback *
ros2_motor_controller_msgs__msg__VelocityFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_motor_controller_msgs__msg__VelocityFeedback * msg = (ros2_motor_controller_msgs__msg__VelocityFeedback *)allocator.allocate(sizeof(ros2_motor_controller_msgs__msg__VelocityFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_motor_controller_msgs__msg__VelocityFeedback));
  bool success = ros2_motor_controller_msgs__msg__VelocityFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_motor_controller_msgs__msg__VelocityFeedback__destroy(ros2_motor_controller_msgs__msg__VelocityFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_motor_controller_msgs__msg__VelocityFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__init(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_motor_controller_msgs__msg__VelocityFeedback * data = NULL;

  if (size) {
    data = (ros2_motor_controller_msgs__msg__VelocityFeedback *)allocator.zero_allocate(size, sizeof(ros2_motor_controller_msgs__msg__VelocityFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_motor_controller_msgs__msg__VelocityFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_motor_controller_msgs__msg__VelocityFeedback__fini(&data[i - 1]);
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
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__fini(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array)
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
      ros2_motor_controller_msgs__msg__VelocityFeedback__fini(&array->data[i]);
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

ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence *
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array = (ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence *)allocator.allocate(sizeof(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__destroy(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__are_equal(const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * lhs, const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_motor_controller_msgs__msg__VelocityFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__copy(
  const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * input,
  ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_motor_controller_msgs__msg__VelocityFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_motor_controller_msgs__msg__VelocityFeedback * data =
      (ros2_motor_controller_msgs__msg__VelocityFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_motor_controller_msgs__msg__VelocityFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_motor_controller_msgs__msg__VelocityFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_motor_controller_msgs__msg__VelocityFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
