# generated from rosidl_generator_py/resource/_idl.py.em
# with input from leitungssatz:srv/CheckComponents.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckComponents_Request(type):
    """Metaclass of message 'CheckComponents_Request'."""

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
            module = import_type_support('leitungssatz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'leitungssatz.srv.CheckComponents_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_components__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_components__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_components__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_components__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_components__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckComponents_Request(metaclass=Metaclass_CheckComponents_Request):
    """Message class 'CheckComponents_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_CheckComponents_Response(type):
    """Metaclass of message 'CheckComponents_Response'."""

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
            module = import_type_support('leitungssatz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'leitungssatz.srv.CheckComponents_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_components__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_components__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_components__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_components__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_components__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckComponents_Response(metaclass=Metaclass_CheckComponents_Response):
    """Message class 'CheckComponents_Response'."""

    __slots__ = [
        '_ram',
        '_gpu',
    ]

    _fields_and_field_types = {
        'ram': 'uint8',
        'gpu': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ram = kwargs.get('ram', int())
        self.gpu = kwargs.get('gpu', int())

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
        if self.ram != other.ram:
            return False
        if self.gpu != other.gpu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ram(self):
        """Message field 'ram'."""
        return self._ram

    @ram.setter
    def ram(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ram' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ram' field must be an unsigned integer in [0, 255]"
        self._ram = value

    @builtins.property
    def gpu(self):
        """Message field 'gpu'."""
        return self._gpu

    @gpu.setter
    def gpu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gpu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gpu' field must be an unsigned integer in [0, 255]"
        self._gpu = value


class Metaclass_CheckComponents(type):
    """Metaclass of service 'CheckComponents'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('leitungssatz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'leitungssatz.srv.CheckComponents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__check_components

            from leitungssatz.srv import _check_components
            if _check_components.Metaclass_CheckComponents_Request._TYPE_SUPPORT is None:
                _check_components.Metaclass_CheckComponents_Request.__import_type_support__()
            if _check_components.Metaclass_CheckComponents_Response._TYPE_SUPPORT is None:
                _check_components.Metaclass_CheckComponents_Response.__import_type_support__()


class CheckComponents(metaclass=Metaclass_CheckComponents):
    from leitungssatz.srv._check_components import CheckComponents_Request as Request
    from leitungssatz.srv._check_components import CheckComponents_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
