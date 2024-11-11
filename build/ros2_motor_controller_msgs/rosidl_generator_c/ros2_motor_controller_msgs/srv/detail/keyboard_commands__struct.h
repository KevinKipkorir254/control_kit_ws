// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_motor_controller_msgs:srv/KeyboardCommands.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_H_
#define ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/KeyboardCommands in the package ros2_motor_controller_msgs.
typedef struct ros2_motor_controller_msgs__srv__KeyboardCommands_Request
{
  uint8_t keyboard_input;
} ros2_motor_controller_msgs__srv__KeyboardCommands_Request;

// Struct for a sequence of ros2_motor_controller_msgs__srv__KeyboardCommands_Request.
typedef struct ros2_motor_controller_msgs__srv__KeyboardCommands_Request__Sequence
{
  ros2_motor_controller_msgs__srv__KeyboardCommands_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_motor_controller_msgs__srv__KeyboardCommands_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KeyboardCommands in the package ros2_motor_controller_msgs.
typedef struct ros2_motor_controller_msgs__srv__KeyboardCommands_Response
{
  rosidl_runtime_c__String response;
} ros2_motor_controller_msgs__srv__KeyboardCommands_Response;

// Struct for a sequence of ros2_motor_controller_msgs__srv__KeyboardCommands_Response.
typedef struct ros2_motor_controller_msgs__srv__KeyboardCommands_Response__Sequence
{
  ros2_motor_controller_msgs__srv__KeyboardCommands_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_motor_controller_msgs__srv__KeyboardCommands_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_H_
