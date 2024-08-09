# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sound_play_msgs:msg/SoundRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SoundRequest(type):
    """Metaclass of message 'SoundRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BACKINGUP': 1,
        'NEEDS_UNPLUGGING': 2,
        'NEEDS_PLUGGING': 3,
        'NEEDS_UNPLUGGING_BADLY': 4,
        'NEEDS_PLUGGING_BADLY': 5,
        'ALL': -1,
        'PLAY_FILE': -2,
        'SAY': -3,
        'PLAY_STOP': 0,
        'PLAY_ONCE': 1,
        'PLAY_START': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sound_play_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sound_play_msgs.msg.SoundRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sound_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sound_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sound_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sound_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sound_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BACKINGUP': cls.__constants['BACKINGUP'],
            'NEEDS_UNPLUGGING': cls.__constants['NEEDS_UNPLUGGING'],
            'NEEDS_PLUGGING': cls.__constants['NEEDS_PLUGGING'],
            'NEEDS_UNPLUGGING_BADLY': cls.__constants['NEEDS_UNPLUGGING_BADLY'],
            'NEEDS_PLUGGING_BADLY': cls.__constants['NEEDS_PLUGGING_BADLY'],
            'ALL': cls.__constants['ALL'],
            'PLAY_FILE': cls.__constants['PLAY_FILE'],
            'SAY': cls.__constants['SAY'],
            'PLAY_STOP': cls.__constants['PLAY_STOP'],
            'PLAY_ONCE': cls.__constants['PLAY_ONCE'],
            'PLAY_START': cls.__constants['PLAY_START'],
        }

    @property
    def BACKINGUP(self):
        """Message constant 'BACKINGUP'."""
        return Metaclass_SoundRequest.__constants['BACKINGUP']

    @property
    def NEEDS_UNPLUGGING(self):
        """Message constant 'NEEDS_UNPLUGGING'."""
        return Metaclass_SoundRequest.__constants['NEEDS_UNPLUGGING']

    @property
    def NEEDS_PLUGGING(self):
        """Message constant 'NEEDS_PLUGGING'."""
        return Metaclass_SoundRequest.__constants['NEEDS_PLUGGING']

    @property
    def NEEDS_UNPLUGGING_BADLY(self):
        """Message constant 'NEEDS_UNPLUGGING_BADLY'."""
        return Metaclass_SoundRequest.__constants['NEEDS_UNPLUGGING_BADLY']

    @property
    def NEEDS_PLUGGING_BADLY(self):
        """Message constant 'NEEDS_PLUGGING_BADLY'."""
        return Metaclass_SoundRequest.__constants['NEEDS_PLUGGING_BADLY']

    @property
    def ALL(self):
        """Message constant 'ALL'."""
        return Metaclass_SoundRequest.__constants['ALL']

    @property
    def PLAY_FILE(self):
        """Message constant 'PLAY_FILE'."""
        return Metaclass_SoundRequest.__constants['PLAY_FILE']

    @property
    def SAY(self):
        """Message constant 'SAY'."""
        return Metaclass_SoundRequest.__constants['SAY']

    @property
    def PLAY_STOP(self):
        """Message constant 'PLAY_STOP'."""
        return Metaclass_SoundRequest.__constants['PLAY_STOP']

    @property
    def PLAY_ONCE(self):
        """Message constant 'PLAY_ONCE'."""
        return Metaclass_SoundRequest.__constants['PLAY_ONCE']

    @property
    def PLAY_START(self):
        """Message constant 'PLAY_START'."""
        return Metaclass_SoundRequest.__constants['PLAY_START']


class SoundRequest(metaclass=Metaclass_SoundRequest):
    """
    Message class 'SoundRequest'.

    Constants:
      BACKINGUP
      NEEDS_UNPLUGGING
      NEEDS_PLUGGING
      NEEDS_UNPLUGGING_BADLY
      NEEDS_PLUGGING_BADLY
      ALL
      PLAY_FILE
      SAY
      PLAY_STOP
      PLAY_ONCE
      PLAY_START
    """

    __slots__ = [
        '_sound',
        '_command',
        '_volume',
        '_arg',
        '_arg2',
    ]

    _fields_and_field_types = {
        'sound': 'int8',
        'command': 'int8',
        'volume': 'float',
        'arg': 'string',
        'arg2': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sound = kwargs.get('sound', int())
        self.command = kwargs.get('command', int())
        self.volume = kwargs.get('volume', float())
        self.arg = kwargs.get('arg', str())
        self.arg2 = kwargs.get('arg2', str())

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
        if self.sound != other.sound:
            return False
        if self.command != other.command:
            return False
        if self.volume != other.volume:
            return False
        if self.arg != other.arg:
            return False
        if self.arg2 != other.arg2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sound(self):
        """Message field 'sound'."""
        return self._sound

    @sound.setter
    def sound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'sound' field must be an integer in [-128, 127]"
        self._sound = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command' field must be an integer in [-128, 127]"
        self._command = value

    @builtins.property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._volume = value

    @builtins.property
    def arg(self):
        """Message field 'arg'."""
        return self._arg

    @arg.setter
    def arg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'arg' field must be of type 'str'"
        self._arg = value

    @builtins.property
    def arg2(self):
        """Message field 'arg2'."""
        return self._arg2

    @arg2.setter
    def arg2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'arg2' field must be of type 'str'"
        self._arg2 = value
