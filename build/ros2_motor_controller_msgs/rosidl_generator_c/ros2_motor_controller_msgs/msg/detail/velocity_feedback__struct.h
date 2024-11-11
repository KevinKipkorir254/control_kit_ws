// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_H_
#define ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocityFeedback in the package ros2_motor_controller_msgs.
typedef struct ros2_motor_controller_msgs__msg__VelocityFeedback
{
  double real_velocity;
  double bj_velocity;
  double armax_velocity;
} ros2_motor_controller_msgs__msg__VelocityFeedback;

// Struct for a sequence of ros2_motor_controller_msgs__msg__VelocityFeedback.
typedef struct ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence
{
  ros2_motor_controller_msgs__msg__VelocityFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_motor_controller_msgs__msg__VelocityFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_H_
