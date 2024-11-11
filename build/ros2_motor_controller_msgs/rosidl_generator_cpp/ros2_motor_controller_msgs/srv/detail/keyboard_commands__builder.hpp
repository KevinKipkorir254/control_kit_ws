// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_motor_controller_msgs:srv/KeyboardCommands.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__BUILDER_HPP_
#define ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_motor_controller_msgs/srv/detail/keyboard_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_motor_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_KeyboardCommands_Request_keyboard_input
{
public:
  Init_KeyboardCommands_Request_keyboard_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_motor_controller_msgs::srv::KeyboardCommands_Request keyboard_input(::ros2_motor_controller_msgs::srv::KeyboardCommands_Request::_keyboard_input_type arg)
  {
    msg_.keyboard_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_motor_controller_msgs::srv::KeyboardCommands_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_motor_controller_msgs::srv::KeyboardCommands_Request>()
{
  return ros2_motor_controller_msgs::srv::builder::Init_KeyboardCommands_Request_keyboard_input();
}

}  // namespace ros2_motor_controller_msgs


namespace ros2_motor_controller_msgs
{

namespace srv
{

namespace builder
{

class Init_KeyboardCommands_Response_response
{
public:
  Init_KeyboardCommands_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_motor_controller_msgs::srv::KeyboardCommands_Response response(::ros2_motor_controller_msgs::srv::KeyboardCommands_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_motor_controller_msgs::srv::KeyboardCommands_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_motor_controller_msgs::srv::KeyboardCommands_Response>()
{
  return ros2_motor_controller_msgs::srv::builder::Init_KeyboardCommands_Response_response();
}

}  // namespace ros2_motor_controller_msgs

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__BUILDER_HPP_
