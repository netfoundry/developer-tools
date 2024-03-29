# coding: utf-8

"""
    untitled API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 5229
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class InlineObject5(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'attributes': 'list[str]',
        'enrollment_method': 'CoreV2EndpointsEnrollmentMethod',
        'name': 'str',
        'network_id': 'str'
    }

    attribute_map = {
        'attributes': 'attributes',
        'enrollment_method': 'enrollmentMethod',
        'name': 'name',
        'network_id': 'networkId'
    }

    def __init__(self, attributes=None, enrollment_method=None, name=None, network_id=None, local_vars_configuration=None):  # noqa: E501
        """InlineObject5 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._attributes = None
        self._enrollment_method = None
        self._name = None
        self._network_id = None
        self.discriminator = None

        self.attributes = attributes
        self.enrollment_method = enrollment_method
        self.name = name
        self.network_id = network_id

    @property
    def attributes(self):
        """Gets the attributes of this InlineObject5.  # noqa: E501


        :return: The attributes of this InlineObject5.  # noqa: E501
        :rtype: list[str]
        """
        return self._attributes

    @attributes.setter
    def attributes(self, attributes):
        """Sets the attributes of this InlineObject5.


        :param attributes: The attributes of this InlineObject5.  # noqa: E501
        :type: list[str]
        """
        if self.local_vars_configuration.client_side_validation and attributes is None:  # noqa: E501
            raise ValueError("Invalid value for `attributes`, must not be `None`")  # noqa: E501

        self._attributes = attributes

    @property
    def enrollment_method(self):
        """Gets the enrollment_method of this InlineObject5.  # noqa: E501


        :return: The enrollment_method of this InlineObject5.  # noqa: E501
        :rtype: CoreV2EndpointsEnrollmentMethod
        """
        return self._enrollment_method

    @enrollment_method.setter
    def enrollment_method(self, enrollment_method):
        """Sets the enrollment_method of this InlineObject5.


        :param enrollment_method: The enrollment_method of this InlineObject5.  # noqa: E501
        :type: CoreV2EndpointsEnrollmentMethod
        """
        if self.local_vars_configuration.client_side_validation and enrollment_method is None:  # noqa: E501
            raise ValueError("Invalid value for `enrollment_method`, must not be `None`")  # noqa: E501

        self._enrollment_method = enrollment_method

    @property
    def name(self):
        """Gets the name of this InlineObject5.  # noqa: E501


        :return: The name of this InlineObject5.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this InlineObject5.


        :param name: The name of this InlineObject5.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def network_id(self):
        """Gets the network_id of this InlineObject5.  # noqa: E501


        :return: The network_id of this InlineObject5.  # noqa: E501
        :rtype: str
        """
        return self._network_id

    @network_id.setter
    def network_id(self, network_id):
        """Sets the network_id of this InlineObject5.


        :param network_id: The network_id of this InlineObject5.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and network_id is None:  # noqa: E501
            raise ValueError("Invalid value for `network_id`, must not be `None`")  # noqa: E501

        self._network_id = network_id

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, InlineObject5):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineObject5):
            return True

        return self.to_dict() != other.to_dict()
