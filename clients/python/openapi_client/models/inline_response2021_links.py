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


class InlineResponse2021Links(object):
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
        'network': 'InlineResponse200LinksNetwork',
        'process': 'InlineResponse200LinksNetwork',
        '_self': 'InlineResponse200LinksSelf'
    }

    attribute_map = {
        'network': 'network',
        'process': 'process',
        '_self': 'self'
    }

    def __init__(self, network=None, process=None, _self=None, local_vars_configuration=None):  # noqa: E501
        """InlineResponse2021Links - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._network = None
        self._process = None
        self.__self = None
        self.discriminator = None

        self.network = network
        self.process = process
        self._self = _self

    @property
    def network(self):
        """Gets the network of this InlineResponse2021Links.  # noqa: E501


        :return: The network of this InlineResponse2021Links.  # noqa: E501
        :rtype: InlineResponse200LinksNetwork
        """
        return self._network

    @network.setter
    def network(self, network):
        """Sets the network of this InlineResponse2021Links.


        :param network: The network of this InlineResponse2021Links.  # noqa: E501
        :type: InlineResponse200LinksNetwork
        """
        if self.local_vars_configuration.client_side_validation and network is None:  # noqa: E501
            raise ValueError("Invalid value for `network`, must not be `None`")  # noqa: E501

        self._network = network

    @property
    def process(self):
        """Gets the process of this InlineResponse2021Links.  # noqa: E501


        :return: The process of this InlineResponse2021Links.  # noqa: E501
        :rtype: InlineResponse200LinksNetwork
        """
        return self._process

    @process.setter
    def process(self, process):
        """Sets the process of this InlineResponse2021Links.


        :param process: The process of this InlineResponse2021Links.  # noqa: E501
        :type: InlineResponse200LinksNetwork
        """
        if self.local_vars_configuration.client_side_validation and process is None:  # noqa: E501
            raise ValueError("Invalid value for `process`, must not be `None`")  # noqa: E501

        self._process = process

    @property
    def _self(self):
        """Gets the _self of this InlineResponse2021Links.  # noqa: E501


        :return: The _self of this InlineResponse2021Links.  # noqa: E501
        :rtype: InlineResponse200LinksSelf
        """
        return self.__self

    @_self.setter
    def _self(self, _self):
        """Sets the _self of this InlineResponse2021Links.


        :param _self: The _self of this InlineResponse2021Links.  # noqa: E501
        :type: InlineResponse200LinksSelf
        """
        if self.local_vars_configuration.client_side_validation and _self is None:  # noqa: E501
            raise ValueError("Invalid value for `_self`, must not be `None`")  # noqa: E501

        self.__self = _self

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
        if not isinstance(other, InlineResponse2021Links):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineResponse2021Links):
            return True

        return self.to_dict() != other.to_dict()
