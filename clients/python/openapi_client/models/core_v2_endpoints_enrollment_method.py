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


class CoreV2EndpointsEnrollmentMethod(object):
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
        'ott': 'bool'
    }

    attribute_map = {
        'ott': 'ott'
    }

    def __init__(self, ott=None, local_vars_configuration=None):  # noqa: E501
        """CoreV2EndpointsEnrollmentMethod - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._ott = None
        self.discriminator = None

        self.ott = ott

    @property
    def ott(self):
        """Gets the ott of this CoreV2EndpointsEnrollmentMethod.  # noqa: E501


        :return: The ott of this CoreV2EndpointsEnrollmentMethod.  # noqa: E501
        :rtype: bool
        """
        return self._ott

    @ott.setter
    def ott(self, ott):
        """Sets the ott of this CoreV2EndpointsEnrollmentMethod.


        :param ott: The ott of this CoreV2EndpointsEnrollmentMethod.  # noqa: E501
        :type: bool
        """
        if self.local_vars_configuration.client_side_validation and ott is None:  # noqa: E501
            raise ValueError("Invalid value for `ott`, must not be `None`")  # noqa: E501

        self._ott = ott

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
        if not isinstance(other, CoreV2EndpointsEnrollmentMethod):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, CoreV2EndpointsEnrollmentMethod):
            return True

        return self.to_dict() != other.to_dict()
