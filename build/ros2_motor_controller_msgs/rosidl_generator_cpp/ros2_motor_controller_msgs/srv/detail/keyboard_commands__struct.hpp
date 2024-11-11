// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_motor_controller_msgs:srv/KeyboardCommands.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_HPP_
#define ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Request __declspec(deprecated)
#endif

namespace ros2_motor_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KeyboardCommands_Request_
{
  using Type = KeyboardCommands_Request_<ContainerAllocator>;

  explicit KeyboardCommands_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyboard_input = 0;
    }
  }

  explicit KeyboardCommands_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyboard_input = 0;
    }
  }

  // field types and members
  using _keyboard_input_type =
    uint8_t;
  _keyboard_input_type keyboard_input;

  // setters for named parameter idiom
  Type & set__keyboard_input(
    const uint8_t & _arg)
  {
    this->keyboard_input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Request
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Request
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyboardCommands_Request_ & other) const
  {
    if (this->keyboard_input != other.keyboard_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyboardCommands_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyboardCommands_Request_

// alias to use template instance with default allocator
using KeyboardCommands_Request =
  ros2_motor_controller_msgs::srv::KeyboardCommands_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_motor_controller_msgs


#ifndef _WIN32
# define DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Response __declspec(deprecated)
#endif

namespace ros2_motor_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KeyboardCommands_Response_
{
  using Type = KeyboardCommands_Response_<ContainerAllocator>;

  explicit KeyboardCommands_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit KeyboardCommands_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Response
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_motor_controller_msgs__srv__KeyboardCommands_Response
    std::shared_ptr<ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyboardCommands_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyboardCommands_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyboardCommands_Response_

// alias to use template instance with default allocator
using KeyboardCommands_Response =
  ros2_motor_controller_msgs::srv::KeyboardCommands_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_motor_controller_msgs

namespace ros2_motor_controller_msgs
{

namespace srv
{

struct KeyboardCommands
{
  using Request = ros2_motor_controller_msgs::srv::KeyboardCommands_Request;
  using Response = ros2_motor_controller_msgs::srv::KeyboardCommands_Response;
};

}  // namespace srv

}  // namespace ros2_motor_controller_msgs

#endif  // ROS2_MOTOR_CONTROLLER_MSGS__SRV__DETAIL__KEYBOARD_COMMANDS__STRUCT_HPP_
