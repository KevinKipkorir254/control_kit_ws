// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__BUILDER_HPP_
#define ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_motor_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityFeedback_armax_velocity
{
public:
  explicit Init_VelocityFeedback_armax_velocity(::ros2_motor_controller_msgs::msg::VelocityFeedback & msg)
  : msg_(msg)
  {}
  ::ros2_motor_controller_msgs::msg::VelocityFeedback armax_velocity(::ros2_motor_controller_msgs::msg::VelocityFeedback::_armax_velocity_type arg)
  {
    msg_.armax_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_motor_controller_msgs::msg::VelocityFeedback msg_;
};

class Init_VelocityFeedback_bj_velocity
{
public:
  explicit Init_VelocityFeedback_bj_velocity(::ros2_motor_controller_msgs::msg::VelocityFeedback & msg)
  : msg_(msg)
  {}
  Init_VelocityFeedback_armax_velocity bj_velocity(::ros2_motor_controller_msgs::msg::VelocityFeedback::_bj_velocity_type arg)
  {
    msg_.bj_velocity = std::move(arg);
    return Init_VelocityFeedback_armax_velocity(msg_);
  }

private:
  ::ros2_motor_controller_msgs::msg::VelocityFeedback msg_;
};

class Init_VelocityFeedback_real_velocity
{
public:
  Init_VelocityFeedback_real_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityFeedback_bj_velocity real_velocity(::ros2_motor_controller_msgs::msg::VelocityFeedback::_real_velocity_type arg)
  {
    msg_.real_velocity = std::move(arg);
    return Init_VelocityFeedback_bj_velocity(msg_);
  }

private:
  ::ros2_motor_controller_msgs::msg::VelocityFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_motor_controller_msgs::msg::VelocityFeedback>()
{
  return ros2_motor_controller_msgs::msg::builder::Init_VelocityFeedback_real_velocity();
}

}  // namespace ros2_motor_controller_msgs

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__BUILDER_HPP_
