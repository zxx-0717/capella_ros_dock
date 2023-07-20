# generated from rosidl_generator_py/resource/_idl.py.em
# with input from capella_ros_service_interfaces:msg/IrtemperatureData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IrtemperatureData(type):
    """Metaclass of message 'IrtemperatureData'."""

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
            module = import_type_support('capella_ros_service_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'capella_ros_service_interfaces.msg.IrtemperatureData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__irtemperature_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__irtemperature_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__irtemperature_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__irtemperature_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__irtemperature_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IrtemperatureData(metaclass=Metaclass_IrtemperatureData):
    """Message class 'IrtemperatureData'."""

    __slots__ = [
        '_irtemperature',
        '_center_x',
        '_center_y',
        '_width',
        '_height',
    ]

    _fields_and_field_types = {
        'irtemperature': 'float',
        'center_x': 'uint16',
        'center_y': 'uint16',
        'width': 'uint16',
        'height': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.irtemperature = kwargs.get('irtemperature', float())
        self.center_x = kwargs.get('center_x', int())
        self.center_y = kwargs.get('center_y', int())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())

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
        if self.irtemperature != other.irtemperature:
            return False
        if self.center_x != other.center_x:
            return False
        if self.center_y != other.center_y:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def irtemperature(self):
        """Message field 'irtemperature'."""
        return self._irtemperature

    @irtemperature.setter
    def irtemperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'irtemperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'irtemperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._irtemperature = value

    @builtins.property
    def center_x(self):
        """Message field 'center_x'."""
        return self._center_x

    @center_x.setter
    def center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'center_x' field must be an unsigned integer in [0, 65535]"
        self._center_x = value

    @builtins.property
    def center_y(self):
        """Message field 'center_y'."""
        return self._center_y

    @center_y.setter
    def center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'center_y' field must be an unsigned integer in [0, 65535]"
        self._center_y = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'width' field must be an unsigned integer in [0, 65535]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'height' field must be an unsigned integer in [0, 65535]"
        self._height = value
