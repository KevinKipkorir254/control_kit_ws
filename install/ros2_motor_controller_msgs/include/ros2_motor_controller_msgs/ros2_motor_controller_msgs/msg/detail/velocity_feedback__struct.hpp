// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_HPP_
#define ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_motor_controller_msgs__msg__VelocityFeedback __attribute__((deprecated))
#else
# define DEPRECATED__ros2_motor_controller_msgs__msg__VelocityFeedback __declspec(deprecated)
#endif

namespace ros2_motor_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityFeedback_
{
  using Type = VelocityFeedback_<ContainerAllocator>;

  explicit VelocityFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_velocity = 0.0;
      this->bj_velocity = 0.0;
      this->armax_velocity = 0.0;
    }
  }

  explicit VelocityFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_velocity = 0.0;
      this->bj_velocity = 0.0;
      this->armax_velocity = 0.0;
    }
  }

  // field types and members
  using _real_velocity_type =
    double;
  _real_velocity_type real_velocity;
  using _bj_velocity_type =
    double;
  _bj_velocity_type bj_velocity;
  using _armax_velocity_type =
    double;
  _armax_velocity_type armax_velocity;

  // setters for named parameter idiom
  Type & set__real_velocity(
    const double & _arg)
  {
    this->real_velocity = _arg;
    return *this;
  }
  Type & set__bj_velocity(
    const double & _arg)
  {
    this->bj_velocity = _arg;
    return *this;
  }
  Type & set__armax_velocity(
    const double & _arg)
  {
    this->armax_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_motor_controller_msgs__msg__VelocityFeedback
    std::shared_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_motor_controller_msgs__msg__VelocityFeedback
    std::shared_ptr<ros2_motor_controller_msgs::msg::VelocityFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityFeedback_ & other) const
  {
    if (this->real_velocity != other.real_velocity) {
      return false;
    }
    if (this->bj_velocity != other.bj_velocity) {
      return false;
    }
    if (this->armax_velocity != other.armax_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityFeedback_

// alias to use template instance with default allocator
using VelocityFeedback =
  ros2_motor_controller_msgs::msg::VelocityFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_motor_controller_msgs

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__MSG__DETAIL__VELOCITY_FEEDBACK__STRUCT_HPP_
