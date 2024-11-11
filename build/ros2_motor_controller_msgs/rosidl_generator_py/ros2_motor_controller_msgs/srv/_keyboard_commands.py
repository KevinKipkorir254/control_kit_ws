# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_motor_controller_msgs:srv/KeyboardCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KeyboardCommands_Request(type):
    """Metaclass of message 'KeyboardCommands_Request'."""

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
                'ros2_motor_controller_msgs.srv.KeyboardCommands_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__keyboard_commands__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__keyboard_commands__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__keyboard_commands__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__keyboard_commands__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__keyboard_commands__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KeyboardCommands_Request(metaclass=Metaclass_KeyboardCommands_Request):
    """Message class 'KeyboardCommands_Request'."""

    __slots__ = [
        '_keyboard_input',
    ]

    _fields_and_field_types = {
        'keyboard_input': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.keyboard_input = kwargs.get('keyboard_input', int())

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
        if self.keyboard_input != other.keyboard_input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def keyboard_input(self):
        """Message field 'keyboard_input'."""
        return self._keyboard_input

    @keyboard_input.setter
    def keyboard_input(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'keyboard_input' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'keyboard_input' field must be an unsigned integer in [0, 255]"
        self._keyboard_input = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_KeyboardCommands_Response(type):
    """Metaclass of message 'KeyboardCommands_Response'."""

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
                'ros2_motor_controller_msgs.srv.KeyboardCommands_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__keyboard_commands__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__keyboard_commands__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__keyboard_commands__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__keyboard_commands__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__keyboard_commands__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KeyboardCommands_Response(metaclass=Metaclass_KeyboardCommands_Response):
    """Message class 'KeyboardCommands_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value


class Metaclass_KeyboardCommands(type):
    """Metaclass of service 'KeyboardCommands'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_motor_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_motor_controller_msgs.srv.KeyboardCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__keyboard_commands

            from ros2_motor_controller_msgs.srv import _keyboard_commands
            if _keyboard_commands.Metaclass_KeyboardCommands_Request._TYPE_SUPPORT is None:
                _keyboard_commands.Metaclass_KeyboardCommands_Request.__import_type_support__()
            if _keyboard_commands.Metaclass_KeyboardCommands_Response._TYPE_SUPPORT is None:
                _keyboard_commands.Metaclass_KeyboardCommands_Response.__import_type_support__()


class KeyboardCommands(metaclass=Metaclass_KeyboardCommands):
    from ros2_motor_controller_msgs.srv._keyboard_commands import KeyboardCommands_Request as Request
    from ros2_motor_controller_msgs.srv._keyboard_commands import KeyboardCommands_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
