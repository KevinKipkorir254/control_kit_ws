// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__FUNCTIONS_H_
#define ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_motor_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__struct.h"

/// Initialize msg/VelocityFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_motor_controller_msgs__msg__VelocityFeedback
 * )) before or use
 * ros2_motor_controller_msgs__msg__VelocityFeedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__init(ros2_motor_controller_msgs__msg__VelocityFeedback * msg);

/// Finalize msg/VelocityFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
void
ros2_motor_controller_msgs__msg__VelocityFeedback__fini(ros2_motor_controller_msgs__msg__VelocityFeedback * msg);

/// Create msg/VelocityFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
ros2_motor_controller_msgs__msg__VelocityFeedback *
ros2_motor_controller_msgs__msg__VelocityFeedback__create();

/// Destroy msg/VelocityFeedback message.
/**
 * It calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
void
ros2_motor_controller_msgs__msg__VelocityFeedback__destroy(ros2_motor_controller_msgs__msg__VelocityFeedback * msg);

/// Check for msg/VelocityFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__are_equal(const ros2_motor_controller_msgs__msg__VelocityFeedback * lhs, const ros2_motor_controller_msgs__msg__VelocityFeedback * rhs);

/// Copy a msg/VelocityFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__copy(
  const ros2_motor_controller_msgs__msg__VelocityFeedback * input,
  ros2_motor_controller_msgs__msg__VelocityFeedback * output);

/// Initialize array of msg/VelocityFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__init(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array, size_t size);

/// Finalize array of msg/VelocityFeedback messages.
/**
 * It calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
void
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__fini(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array);

/// Create array of msg/VelocityFeedback messages.
/**
 * It allocates the memory for the array and calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence *
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__create(size_t size);

/// Destroy array of msg/VelocityFeedback messages.
/**
 * It calls
 * ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
void
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__destroy(ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * array);

/// Check for msg/VelocityFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__are_equal(const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * lhs, const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * rhs);

/// Copy an array of msg/VelocityFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2_motor_controller_msgs
bool
ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence__copy(
  const ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * input,
  ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__FUNCTIONS_H_
