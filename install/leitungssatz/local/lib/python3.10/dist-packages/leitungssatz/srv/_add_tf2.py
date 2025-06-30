# generated from rosidl_generator_py/resource/_idl.py.em
# with input from leitungssatz:srv/AddTf2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddTf2_Request(type):
    """Metaclass of message 'AddTf2_Request'."""

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
                'leitungssatz.srv.AddTf2_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_tf2__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_tf2__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_tf2__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_tf2__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_tf2__request

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddTf2_Request(metaclass=Metaclass_AddTf2_Request):
    """Message class 'AddTf2_Request'."""

    __slots__ = [
        '_pose',
        '_relative',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/TransformStamped',
        'relative': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import TransformStamped
        self.pose = kwargs.get('pose', TransformStamped())
        self.relative = kwargs.get('relative', bool())

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
        if self.pose != other.pose:
            return False
        if self.relative != other.relative:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'pose' field must be a sub message of type 'TransformStamped'"
        self._pose = value

    @builtins.property
    def relative(self):
        """Message field 'relative'."""
        return self._relative

    @relative.setter
    def relative(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'relative' field must be of type 'bool'"
        self._relative = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AddTf2_Response(type):
    """Metaclass of message 'AddTf2_Response'."""

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
                'leitungssatz.srv.AddTf2_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_tf2__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_tf2__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_tf2__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_tf2__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_tf2__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddTf2_Response(metaclass=Metaclass_AddTf2_Response):
    """Message class 'AddTf2_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_AddTf2(type):
    """Metaclass of service 'AddTf2'."""

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
                'leitungssatz.srv.AddTf2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_tf2

            from leitungssatz.srv import _add_tf2
            if _add_tf2.Metaclass_AddTf2_Request._TYPE_SUPPORT is None:
                _add_tf2.Metaclass_AddTf2_Request.__import_type_support__()
            if _add_tf2.Metaclass_AddTf2_Response._TYPE_SUPPORT is None:
                _add_tf2.Metaclass_AddTf2_Response.__import_type_support__()


class AddTf2(metaclass=Metaclass_AddTf2):
    from leitungssatz.srv._add_tf2 import AddTf2_Request as Request
    from leitungssatz.srv._add_tf2 import AddTf2_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
