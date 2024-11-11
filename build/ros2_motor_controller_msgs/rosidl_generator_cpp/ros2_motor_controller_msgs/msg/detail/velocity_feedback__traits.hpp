// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__TRAITS_HPP_
#define ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_motor_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: real_velocity
  {
    out << "real_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.real_velocity, out);
    out << ", ";
  }

  // member: bj_velocity
  {
    out << "bj_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.bj_velocity, out);
    out << ", ";
  }

  // member: armax_velocity
  {
    out << "armax_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.armax_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: real_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.real_velocity, out);
    out << "\n";
  }

  // member: bj_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bj_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.bj_velocity, out);
    out << "\n";
  }

  // member: armax_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armax_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.armax_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityFeedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_motor_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros2_motor_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_motor_controller_msgs::msg::VelocityFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_motor_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_motor_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_motor_controller_msgs::msg::VelocityFeedback & msg)
{
  return ros2_motor_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_motor_controller_msgs::msg::VelocityFeedback>()
{
  return "ros2_motor_controller_msgs::msg::VelocityFeedback";
}

template<>
inline const char * name<ros2_motor_controller_msgs::msg::VelocityFeedback>()
{
  return "ros2_motor_controller_msgs/msg/VelocityFeedback";
}

template<>
struct has_fixed_size<ros2_motor_controller_msgs::msg::VelocityFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_motor_controller_msgs::msg::VelocityFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_motor_controller_msgs::msg::VelocityFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__TRAITS_HPP_
