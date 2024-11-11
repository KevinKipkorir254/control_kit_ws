# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_motor_controller_msgs:msg/VelocityFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityFeedback(type):
    """Metaclass of message 'VelocityFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_motor_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_motor_controller_msgs.msg.VelocityFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VelocityFeedback(metaclass=Metaclass_VelocityFeedback):
    """Message class 'VelocityFeedback'."""

    __slots__ = [
        '_real_velocity',
        '_bj_velocity',
        '_armax_velocity',
    ]

    _fields_and_field_types = {
        'real_velocity': 'double',
        'bj_velocity': 'double',
        'armax_velocity': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.real_velocity = kwargs.get('real_velocity', float())
        self.bj_velocity = kwargs.get('bj_velocity', float())
        self.armax_velocity = kwargs.get('armax_velocity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.real_velocity != other.real_velocity:
            return False
        if self.bj_velocity != other.bj_velocity:
            return False
        if self.armax_velocity != other.armax_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def real_velocity(self):
        """Message field 'real_velocity'."""
        return self._real_velocity

    @real_velocity.setter
    def real_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'real_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'real_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._real_velocity = value

    @builtins.property
    def bj_velocity(self):
        """Message field 'bj_velocity'."""
        return self._bj_velocity

    @bj_velocity.setter
    def bj_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bj_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bj_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bj_velocity = value

    @builtins.property
    def armax_velocity(self):
        """Message field 'armax_velocity'."""
        return self._armax_velocity

    @armax_velocity.setter
    def armax_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armax_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armax_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armax_velocity = value
