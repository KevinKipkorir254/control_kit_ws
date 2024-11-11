// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
// generated code does not contain a copyright notice
#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_motor_controller_msgs/msg/detail/velocity_feedback__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_motor_controller_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_motor_controller_msgs
cdr_serialize(
  const ros2_motor_controller_msgs::msg::VelocityFeedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: real_velocity
  cdr << ros_message.real_velocity;
  // Member: bj_velocity
  cdr << ros_message.bj_velocity;
  // Member: armax_velocity
  cdr << ros_message.armax_velocity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_motor_controller_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_motor_controller_msgs::msg::VelocityFeedback & ros_message)
{
  // Member: real_velocity
  cdr >> ros_message.real_velocity;

  // Member: bj_velocity
  cdr >> ros_message.bj_velocity;

  // Member: armax_velocity
  cdr >> ros_message.armax_velocity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_motor_controller_msgs
get_serialized_size(
  const ros2_motor_controller_msgs::msg::VelocityFeedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: real_velocity
  {
    size_t item_size = sizeof(ros_message.real_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bj_velocity
  {
    size_t item_size = sizeof(ros_message.bj_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: armax_velocity
  {
    size_t item_size = sizeof(ros_message.armax_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_motor_controller_msgs
max_serialized_size_VelocityFeedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: real_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bj_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: armax_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_motor_controller_msgs::msg::VelocityFeedback;
    is_plain =
      (
      offsetof(DataType, armax_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VelocityFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_motor_controller_msgs::msg::VelocityFeedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VelocityFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_motor_controller_msgs::msg::VelocityFeedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VelocityFeedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_motor_controller_msgs::msg::VelocityFeedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VelocityFeedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VelocityFeedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VelocityFeedback__callbacks = {
  "ros2_motor_controller_msgs::msg",
  "VelocityFeedback",
  _VelocityFeedback__cdr_serialize,
  _VelocityFeedback__cdr_deserialize,
  _VelocityFeedback__get_serialized_size,
  _VelocityFeedback__max_serialized_size
};

static rosidl_message_type_support_t _VelocityFeedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VelocityFeedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_motor_controller_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_motor_controller_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_motor_controller_msgs::msg::VelocityFeedback>()
{
  return &ros2_motor_controller_msgs::msg::typesupport_fastrtps_cpp::_VelocityFeedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_motor_controller_msgs, msg, VelocityFeedback)() {
  return &ros2_motor_controller_msgs::msg::typesupport_fastrtps_cpp::_VelocityFeedback__handle;
}

#ifdef __cplusplus
}
#endif
