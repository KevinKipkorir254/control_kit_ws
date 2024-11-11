// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_motor_controller_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VelocityFeedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_motor_controller_msgs::msg::VelocityFeedback(_init);
}

void VelocityFeedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_motor_controller_msgs::msg::VelocityFeedback *>(message_memory);
  typed_message->~VelocityFeedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VelocityFeedback_message_member_array[3] = {
  {
    "real_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_motor_controller_msgs::msg::VelocityFeedback, real_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bj_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_motor_controller_msgs::msg::VelocityFeedback, bj_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "armax_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_motor_controller_msgs::msg::VelocityFeedback, armax_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VelocityFeedback_message_members = {
  "ros2_motor_controller_msgs::msg",  // message namespace
  "VelocityFeedback",  // message name
  3,  // number of fields
  sizeof(ros2_motor_controller_msgs::msg::VelocityFeedback),
  VelocityFeedback_message_member_array,  // message members
  VelocityFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  VelocityFeedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VelocityFeedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VelocityFeedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_motor_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_motor_controller_msgs::msg::VelocityFeedback>()
{
  return &::ros2_motor_controller_msgs::msg::rosidl_typesupport_introspection_cpp::VelocityFeedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_motor_controller_msgs, msg, VelocityFeedback)() {
  return &::ros2_motor_controller_msgs::msg::rosidl_typesupport_introspection_cpp::VelocityFeedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
