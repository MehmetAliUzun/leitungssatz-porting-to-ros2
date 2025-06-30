# generated from rosidl_generator_py/resource/_idl.py.em
# with input from leitungssatz:srv/SelectCam.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SelectCam_Request(type):
    """Metaclass of message 'SelectCam_Request'."""

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
                'leitungssatz.srv.SelectCam_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__select_cam__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__select_cam__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__select_cam__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__select_cam__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__select_cam__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelectCam_Request(metaclass=Metaclass_SelectCam_Request):
    """Message class 'SelectCam_Request'."""

    __slots__ = [
        '_camera_type',
        '_camera_index',
    ]

    _fields_and_field_types = {
        'camera_type': 'string',
        'camera_index': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_type = kwargs.get('camera_type', str())
        self.camera_index = kwargs.get('camera_index', int())

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
        if self.camera_type != other.camera_type:
            return False
        if self.camera_index != other.camera_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_type(self):
        """Message field 'camera_type'."""
        return self._camera_type

    @camera_type.setter
    def camera_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_type' field must be of type 'str'"
        self._camera_type = value

    @builtins.property
    def camera_index(self):
        """Message field 'camera_index'."""
        return self._camera_index

    @camera_index.setter
    def camera_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'camera_index' field must be an unsigned integer in [0, 4294967295]"
        self._camera_index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SelectCam_Response(type):
    """Metaclass of message 'SelectCam_Response'."""

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
                'leitungssatz.srv.SelectCam_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__select_cam__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__select_cam__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__select_cam__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__select_cam__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__select_cam__response

            from leitungssatz.msg import VectorResolution
            if VectorResolution.__class__._TYPE_SUPPORT is None:
                VectorResolution.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelectCam_Response(metaclass=Metaclass_SelectCam_Response):
    """Message class 'SelectCam_Response'."""

    __slots__ = [
        '_available_resolutions',
        '_resolution_idx',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'available_resolutions': 'leitungssatz/VectorResolution',
        'resolution_idx': 'uint32',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['leitungssatz', 'msg'], 'VectorResolution'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from leitungssatz.msg import VectorResolution
        self.available_resolutions = kwargs.get('available_resolutions', VectorResolution())
        self.resolution_idx = kwargs.get('resolution_idx', int())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.available_resolutions != other.available_resolutions:
            return False
        if self.resolution_idx != other.resolution_idx:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available_resolutions(self):
        """Message field 'available_resolutions'."""
        return self._available_resolutions

    @available_resolutions.setter
    def available_resolutions(self, value):
        if __debug__:
            from leitungssatz.msg import VectorResolution
            assert \
                isinstance(value, VectorResolution), \
                "The 'available_resolutions' field must be a sub message of type 'VectorResolution'"
        self._available_resolutions = value

    @builtins.property
    def resolution_idx(self):
        """Message field 'resolution_idx'."""
        return self._resolution_idx

    @resolution_idx.setter
    def resolution_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'resolution_idx' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'resolution_idx' field must be an unsigned integer in [0, 4294967295]"
        self._resolution_idx = value

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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SelectCam(type):
    """Metaclass of service 'SelectCam'."""

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
                'leitungssatz.srv.SelectCam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__select_cam

            from leitungssatz.srv import _select_cam
            if _select_cam.Metaclass_SelectCam_Request._TYPE_SUPPORT is None:
                _select_cam.Metaclass_SelectCam_Request.__import_type_support__()
            if _select_cam.Metaclass_SelectCam_Response._TYPE_SUPPORT is None:
                _select_cam.Metaclass_SelectCam_Response.__import_type_support__()


class SelectCam(metaclass=Metaclass_SelectCam):
    from leitungssatz.srv._select_cam import SelectCam_Request as Request
    from leitungssatz.srv._select_cam import SelectCam_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
