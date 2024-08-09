# generated from rosidl_generator_py/resource/_idl.py.em
# with input from speech_recognition_msgs:srv/SpeechRecognition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeechRecognition_Request(type):
    """Metaclass of message 'SpeechRecognition_Request'."""

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
            module = import_type_support('speech_recognition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'speech_recognition_msgs.srv.SpeechRecognition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speech_recognition__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speech_recognition__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speech_recognition__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speech_recognition__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speech_recognition__request

            from speech_recognition_msgs.msg import Grammar
            if Grammar.__class__._TYPE_SUPPORT is None:
                Grammar.__class__.__import_type_support__()

            from speech_recognition_msgs.msg import Vocabulary
            if Vocabulary.__class__._TYPE_SUPPORT is None:
                Vocabulary.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeechRecognition_Request(metaclass=Metaclass_SpeechRecognition_Request):
    """Message class 'SpeechRecognition_Request'."""

    __slots__ = [
        '_vocabulary',
        '_grammar',
        '_grammar_name',
        '_duration',
        '_quiet',
        '_threshold',
    ]

    _fields_and_field_types = {
        'vocabulary': 'speech_recognition_msgs/Vocabulary',
        'grammar': 'speech_recognition_msgs/Grammar',
        'grammar_name': 'string',
        'duration': 'float',
        'quiet': 'boolean',
        'threshold': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['speech_recognition_msgs', 'msg'], 'Vocabulary'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['speech_recognition_msgs', 'msg'], 'Grammar'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from speech_recognition_msgs.msg import Vocabulary
        self.vocabulary = kwargs.get('vocabulary', Vocabulary())
        from speech_recognition_msgs.msg import Grammar
        self.grammar = kwargs.get('grammar', Grammar())
        self.grammar_name = kwargs.get('grammar_name', str())
        self.duration = kwargs.get('duration', float())
        self.quiet = kwargs.get('quiet', bool())
        self.threshold = kwargs.get('threshold', float())

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
        if self.vocabulary != other.vocabulary:
            return False
        if self.grammar != other.grammar:
            return False
        if self.grammar_name != other.grammar_name:
            return False
        if self.duration != other.duration:
            return False
        if self.quiet != other.quiet:
            return False
        if self.threshold != other.threshold:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vocabulary(self):
        """Message field 'vocabulary'."""
        return self._vocabulary

    @vocabulary.setter
    def vocabulary(self, value):
        if __debug__:
            from speech_recognition_msgs.msg import Vocabulary
            assert \
                isinstance(value, Vocabulary), \
                "The 'vocabulary' field must be a sub message of type 'Vocabulary'"
        self._vocabulary = value

    @builtins.property
    def grammar(self):
        """Message field 'grammar'."""
        return self._grammar

    @grammar.setter
    def grammar(self, value):
        if __debug__:
            from speech_recognition_msgs.msg import Grammar
            assert \
                isinstance(value, Grammar), \
                "The 'grammar' field must be a sub message of type 'Grammar'"
        self._grammar = value

    @builtins.property
    def grammar_name(self):
        """Message field 'grammar_name'."""
        return self._grammar_name

    @grammar_name.setter
    def grammar_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'grammar_name' field must be of type 'str'"
        self._grammar_name = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration = value

    @builtins.property
    def quiet(self):
        """Message field 'quiet'."""
        return self._quiet

    @quiet.setter
    def quiet(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quiet' field must be of type 'bool'"
        self._quiet = value

    @builtins.property
    def threshold(self):
        """Message field 'threshold'."""
        return self._threshold

    @threshold.setter
    def threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._threshold = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpeechRecognition_Response(type):
    """Metaclass of message 'SpeechRecognition_Response'."""

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
            module = import_type_support('speech_recognition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'speech_recognition_msgs.srv.SpeechRecognition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speech_recognition__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speech_recognition__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speech_recognition__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speech_recognition__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speech_recognition__response

            from speech_recognition_msgs.msg import SpeechRecognitionCandidates
            if SpeechRecognitionCandidates.__class__._TYPE_SUPPORT is None:
                SpeechRecognitionCandidates.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeechRecognition_Response(metaclass=Metaclass_SpeechRecognition_Response):
    """Message class 'SpeechRecognition_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'speech_recognition_msgs/SpeechRecognitionCandidates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['speech_recognition_msgs', 'msg'], 'SpeechRecognitionCandidates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from speech_recognition_msgs.msg import SpeechRecognitionCandidates
        self.result = kwargs.get('result', SpeechRecognitionCandidates())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from speech_recognition_msgs.msg import SpeechRecognitionCandidates
            assert \
                isinstance(value, SpeechRecognitionCandidates), \
                "The 'result' field must be a sub message of type 'SpeechRecognitionCandidates'"
        self._result = value


class Metaclass_SpeechRecognition(type):
    """Metaclass of service 'SpeechRecognition'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('speech_recognition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'speech_recognition_msgs.srv.SpeechRecognition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__speech_recognition

            from speech_recognition_msgs.srv import _speech_recognition
            if _speech_recognition.Metaclass_SpeechRecognition_Request._TYPE_SUPPORT is None:
                _speech_recognition.Metaclass_SpeechRecognition_Request.__import_type_support__()
            if _speech_recognition.Metaclass_SpeechRecognition_Response._TYPE_SUPPORT is None:
                _speech_recognition.Metaclass_SpeechRecognition_Response.__import_type_support__()


class SpeechRecognition(metaclass=Metaclass_SpeechRecognition):
    from speech_recognition_msgs.srv._speech_recognition import SpeechRecognition_Request as Request
    from speech_recognition_msgs.srv._speech_recognition import SpeechRecognition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
