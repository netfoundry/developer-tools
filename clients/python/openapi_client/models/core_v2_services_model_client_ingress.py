# coding: utf-8

"""
    untitled API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 5170
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class CoreV2ServicesModelClientIngress(object):
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
        'protocols': 'list[str]',
        'host': 'str',
        'ports': 'list[CoreV2ServicesModelClientIngressPorts]',
        'port': 'object',
        'addresses': 'list[str]'
    }

    attribute_map = {
        'protocols': 'protocols',
        'host': 'host',
        'ports': 'ports',
        'port': 'port',
        'addresses': 'addresses'
    }

    def __init__(self, protocols=None, host=None, ports=None, port=None, addresses=None, local_vars_configuration=None):  # noqa: E501
        """CoreV2ServicesModelClientIngress - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._protocols = None
        self._host = None
        self._ports = None
        self._port = None
        self._addresses = None
        self.discriminator = None

        if protocols is not None:
            self.protocols = protocols
        if host is not None:
            self.host = host
        if ports is not None:
            self.ports = ports
        if port is not None:
            self.port = port
        if addresses is not None:
            self.addresses = addresses

    @property
    def protocols(self):
        """Gets the protocols of this CoreV2ServicesModelClientIngress.  # noqa: E501


        :return: The protocols of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :rtype: list[str]
        """
        return self._protocols

    @protocols.setter
    def protocols(self, protocols):
        """Sets the protocols of this CoreV2ServicesModelClientIngress.


        :param protocols: The protocols of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :type: list[str]
        """

        self._protocols = protocols

    @property
    def host(self):
        """Gets the host of this CoreV2ServicesModelClientIngress.  # noqa: E501


        :return: The host of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :rtype: str
        """
        return self._host

    @host.setter
    def host(self, host):
        """Sets the host of this CoreV2ServicesModelClientIngress.


        :param host: The host of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :type: str
        """

        self._host = host

    @property
    def ports(self):
        """Gets the ports of this CoreV2ServicesModelClientIngress.  # noqa: E501


        :return: The ports of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :rtype: list[CoreV2ServicesModelClientIngressPorts]
        """
        return self._ports

    @ports.setter
    def ports(self, ports):
        """Sets the ports of this CoreV2ServicesModelClientIngress.


        :param ports: The ports of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :type: list[CoreV2ServicesModelClientIngressPorts]
        """

        self._ports = ports

    @property
    def port(self):
        """Gets the port of this CoreV2ServicesModelClientIngress.  # noqa: E501


        :return: The port of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :rtype: object
        """
        return self._port

    @port.setter
    def port(self, port):
        """Sets the port of this CoreV2ServicesModelClientIngress.


        :param port: The port of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :type: object
        """

        self._port = port

    @property
    def addresses(self):
        """Gets the addresses of this CoreV2ServicesModelClientIngress.  # noqa: E501


        :return: The addresses of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :rtype: list[str]
        """
        return self._addresses

    @addresses.setter
    def addresses(self, addresses):
        """Sets the addresses of this CoreV2ServicesModelClientIngress.


        :param addresses: The addresses of this CoreV2ServicesModelClientIngress.  # noqa: E501
        :type: list[str]
        """

        self._addresses = addresses

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
        if not isinstance(other, CoreV2ServicesModelClientIngress):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, CoreV2ServicesModelClientIngress):
            return True

        return self.to_dict() != other.to_dict()
