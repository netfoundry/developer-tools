# coding: utf-8

"""
    untitled API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 5227
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class InlineObject6(object):
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
        'network_id': 'str',
        'name': 'str',
        'attributes': 'list[str]',
        'link_listener': 'bool',
        'data_center_id': 'str'
    }

    attribute_map = {
        'network_id': 'networkId',
        'name': 'name',
        'attributes': 'attributes',
        'link_listener': 'linkListener',
        'data_center_id': 'dataCenterId'
    }

    def __init__(self, network_id=None, name=None, attributes=None, link_listener=None, data_center_id=None, local_vars_configuration=None):  # noqa: E501
        """InlineObject6 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._network_id = None
        self._name = None
        self._attributes = None
        self._link_listener = None
        self._data_center_id = None
        self.discriminator = None

        self.network_id = network_id
        self.name = name
        self.attributes = attributes
        self.link_listener = link_listener
        if data_center_id is not None:
            self.data_center_id = data_center_id

    @property
    def network_id(self):
        """Gets the network_id of this InlineObject6.  # noqa: E501


        :return: The network_id of this InlineObject6.  # noqa: E501
        :rtype: str
        """
        return self._network_id

    @network_id.setter
    def network_id(self, network_id):
        """Sets the network_id of this InlineObject6.


        :param network_id: The network_id of this InlineObject6.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and network_id is None:  # noqa: E501
            raise ValueError("Invalid value for `network_id`, must not be `None`")  # noqa: E501

        self._network_id = network_id

    @property
    def name(self):
        """Gets the name of this InlineObject6.  # noqa: E501


        :return: The name of this InlineObject6.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this InlineObject6.


        :param name: The name of this InlineObject6.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def attributes(self):
        """Gets the attributes of this InlineObject6.  # noqa: E501


        :return: The attributes of this InlineObject6.  # noqa: E501
        :rtype: list[str]
        """
        return self._attributes

    @attributes.setter
    def attributes(self, attributes):
        """Sets the attributes of this InlineObject6.


        :param attributes: The attributes of this InlineObject6.  # noqa: E501
        :type: list[str]
        """
        if self.local_vars_configuration.client_side_validation and attributes is None:  # noqa: E501
            raise ValueError("Invalid value for `attributes`, must not be `None`")  # noqa: E501

        self._attributes = attributes

    @property
    def link_listener(self):
        """Gets the link_listener of this InlineObject6.  # noqa: E501


        :return: The link_listener of this InlineObject6.  # noqa: E501
        :rtype: bool
        """
        return self._link_listener

    @link_listener.setter
    def link_listener(self, link_listener):
        """Sets the link_listener of this InlineObject6.


        :param link_listener: The link_listener of this InlineObject6.  # noqa: E501
        :type: bool
        """
        if self.local_vars_configuration.client_side_validation and link_listener is None:  # noqa: E501
            raise ValueError("Invalid value for `link_listener`, must not be `None`")  # noqa: E501

        self._link_listener = link_listener

    @property
    def data_center_id(self):
        """Gets the data_center_id of this InlineObject6.  # noqa: E501


        :return: The data_center_id of this InlineObject6.  # noqa: E501
        :rtype: str
        """
        return self._data_center_id

    @data_center_id.setter
    def data_center_id(self, data_center_id):
        """Sets the data_center_id of this InlineObject6.


        :param data_center_id: The data_center_id of this InlineObject6.  # noqa: E501
        :type: str
        """

        self._data_center_id = data_center_id

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
        if not isinstance(other, InlineObject6):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineObject6):
            return True

        return self.to_dict() != other.to_dict()
