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


class InlineResponse20019(object):
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
        '_7_3_4': 'InlineResponse20019734',
        '_7_3_11': 'InlineResponse20019734',
        '_7_3_16': 'InlineResponse200197316',
        '_7_1_0': 'InlineResponse20019710',
        '_7_3_22': 'InlineResponse200197316',
        '_7_3_23': 'InlineResponse200197316',
        '_7_3_8': 'InlineResponse20019734',
        '_7_3_12': 'InlineResponse20019734',
        '_7_2_1': 'InlineResponse20019710',
        '_7_3_13': 'InlineResponse20019734',
        '_7_0_0': 'InlineResponse20019710',
        '_7_3_17': 'InlineResponse200197316',
        '_7_3_5': 'InlineResponse20019734',
        '_7_3_20': 'InlineResponse200197316',
        '_7_3_2': 'InlineResponse20019710',
        '_7_3_9': 'InlineResponse20019734',
        '_7_3_24': 'InlineResponse200197316',
        '_7_2_0': 'InlineResponse20019710',
        '_7_3_0': 'InlineResponse20019710',
        '_7_3_14': 'InlineResponse200197316',
        '_7_3_6': 'InlineResponse20019734',
        '_7_3_1': 'InlineResponse20019710',
        '_7_3_19': 'InlineResponse200197316',
        '_7_3_15': 'InlineResponse200197316',
        '_7_3_10': 'InlineResponse20019734',
        '_7_3_7': 'InlineResponse20019734',
        '_7_3_21': 'InlineResponse200197316',
        '_7_3_3': 'InlineResponse20019710',
        '_7_3_18': 'InlineResponse200197316'
    }

    attribute_map = {
        '_7_3_4': '7.3.4',
        '_7_3_11': '7.3.11',
        '_7_3_16': '7.3.16',
        '_7_1_0': '7.1.0',
        '_7_3_22': '7.3.22',
        '_7_3_23': '7.3.23',
        '_7_3_8': '7.3.8',
        '_7_3_12': '7.3.12',
        '_7_2_1': '7.2.1',
        '_7_3_13': '7.3.13',
        '_7_0_0': '7.0.0',
        '_7_3_17': '7.3.17',
        '_7_3_5': '7.3.5',
        '_7_3_20': '7.3.20',
        '_7_3_2': '7.3.2',
        '_7_3_9': '7.3.9',
        '_7_3_24': '7.3.24',
        '_7_2_0': '7.2.0',
        '_7_3_0': '7.3.0',
        '_7_3_14': '7.3.14',
        '_7_3_6': '7.3.6',
        '_7_3_1': '7.3.1',
        '_7_3_19': '7.3.19',
        '_7_3_15': '7.3.15',
        '_7_3_10': '7.3.10',
        '_7_3_7': '7.3.7',
        '_7_3_21': '7.3.21',
        '_7_3_3': '7.3.3',
        '_7_3_18': '7.3.18'
    }

    def __init__(self, _7_3_4=None, _7_3_11=None, _7_3_16=None, _7_1_0=None, _7_3_22=None, _7_3_23=None, _7_3_8=None, _7_3_12=None, _7_2_1=None, _7_3_13=None, _7_0_0=None, _7_3_17=None, _7_3_5=None, _7_3_20=None, _7_3_2=None, _7_3_9=None, _7_3_24=None, _7_2_0=None, _7_3_0=None, _7_3_14=None, _7_3_6=None, _7_3_1=None, _7_3_19=None, _7_3_15=None, _7_3_10=None, _7_3_7=None, _7_3_21=None, _7_3_3=None, _7_3_18=None, local_vars_configuration=None):  # noqa: E501
        """InlineResponse20019 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self.__7_3_4 = None
        self.__7_3_11 = None
        self.__7_3_16 = None
        self.__7_1_0 = None
        self.__7_3_22 = None
        self.__7_3_23 = None
        self.__7_3_8 = None
        self.__7_3_12 = None
        self.__7_2_1 = None
        self.__7_3_13 = None
        self.__7_0_0 = None
        self.__7_3_17 = None
        self.__7_3_5 = None
        self.__7_3_20 = None
        self.__7_3_2 = None
        self.__7_3_9 = None
        self.__7_3_24 = None
        self.__7_2_0 = None
        self.__7_3_0 = None
        self.__7_3_14 = None
        self.__7_3_6 = None
        self.__7_3_1 = None
        self.__7_3_19 = None
        self.__7_3_15 = None
        self.__7_3_10 = None
        self.__7_3_7 = None
        self.__7_3_21 = None
        self.__7_3_3 = None
        self.__7_3_18 = None
        self.discriminator = None

        self._7_3_4 = _7_3_4
        self._7_3_11 = _7_3_11
        self._7_3_16 = _7_3_16
        self._7_1_0 = _7_1_0
        self._7_3_22 = _7_3_22
        self._7_3_23 = _7_3_23
        self._7_3_8 = _7_3_8
        self._7_3_12 = _7_3_12
        self._7_2_1 = _7_2_1
        self._7_3_13 = _7_3_13
        self._7_0_0 = _7_0_0
        self._7_3_17 = _7_3_17
        self._7_3_5 = _7_3_5
        self._7_3_20 = _7_3_20
        self._7_3_2 = _7_3_2
        self._7_3_9 = _7_3_9
        self._7_3_24 = _7_3_24
        self._7_2_0 = _7_2_0
        self._7_3_0 = _7_3_0
        self._7_3_14 = _7_3_14
        self._7_3_6 = _7_3_6
        self._7_3_1 = _7_3_1
        self._7_3_19 = _7_3_19
        self._7_3_15 = _7_3_15
        self._7_3_10 = _7_3_10
        self._7_3_7 = _7_3_7
        self._7_3_21 = _7_3_21
        self._7_3_3 = _7_3_3
        self._7_3_18 = _7_3_18

    @property
    def _7_3_4(self):
        """Gets the _7_3_4 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_4 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_4

    @_7_3_4.setter
    def _7_3_4(self, _7_3_4):
        """Sets the _7_3_4 of this InlineResponse20019.


        :param _7_3_4: The _7_3_4 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_4 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_4`, must not be `None`")  # noqa: E501

        self.__7_3_4 = _7_3_4

    @property
    def _7_3_11(self):
        """Gets the _7_3_11 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_11 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_11

    @_7_3_11.setter
    def _7_3_11(self, _7_3_11):
        """Sets the _7_3_11 of this InlineResponse20019.


        :param _7_3_11: The _7_3_11 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_11 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_11`, must not be `None`")  # noqa: E501

        self.__7_3_11 = _7_3_11

    @property
    def _7_3_16(self):
        """Gets the _7_3_16 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_16 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_16

    @_7_3_16.setter
    def _7_3_16(self, _7_3_16):
        """Sets the _7_3_16 of this InlineResponse20019.


        :param _7_3_16: The _7_3_16 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_16 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_16`, must not be `None`")  # noqa: E501

        self.__7_3_16 = _7_3_16

    @property
    def _7_1_0(self):
        """Gets the _7_1_0 of this InlineResponse20019.  # noqa: E501


        :return: The _7_1_0 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_1_0

    @_7_1_0.setter
    def _7_1_0(self, _7_1_0):
        """Sets the _7_1_0 of this InlineResponse20019.


        :param _7_1_0: The _7_1_0 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_1_0 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_1_0`, must not be `None`")  # noqa: E501

        self.__7_1_0 = _7_1_0

    @property
    def _7_3_22(self):
        """Gets the _7_3_22 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_22 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_22

    @_7_3_22.setter
    def _7_3_22(self, _7_3_22):
        """Sets the _7_3_22 of this InlineResponse20019.


        :param _7_3_22: The _7_3_22 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_22 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_22`, must not be `None`")  # noqa: E501

        self.__7_3_22 = _7_3_22

    @property
    def _7_3_23(self):
        """Gets the _7_3_23 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_23 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_23

    @_7_3_23.setter
    def _7_3_23(self, _7_3_23):
        """Sets the _7_3_23 of this InlineResponse20019.


        :param _7_3_23: The _7_3_23 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_23 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_23`, must not be `None`")  # noqa: E501

        self.__7_3_23 = _7_3_23

    @property
    def _7_3_8(self):
        """Gets the _7_3_8 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_8 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_8

    @_7_3_8.setter
    def _7_3_8(self, _7_3_8):
        """Sets the _7_3_8 of this InlineResponse20019.


        :param _7_3_8: The _7_3_8 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_8 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_8`, must not be `None`")  # noqa: E501

        self.__7_3_8 = _7_3_8

    @property
    def _7_3_12(self):
        """Gets the _7_3_12 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_12 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_12

    @_7_3_12.setter
    def _7_3_12(self, _7_3_12):
        """Sets the _7_3_12 of this InlineResponse20019.


        :param _7_3_12: The _7_3_12 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_12 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_12`, must not be `None`")  # noqa: E501

        self.__7_3_12 = _7_3_12

    @property
    def _7_2_1(self):
        """Gets the _7_2_1 of this InlineResponse20019.  # noqa: E501


        :return: The _7_2_1 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_2_1

    @_7_2_1.setter
    def _7_2_1(self, _7_2_1):
        """Sets the _7_2_1 of this InlineResponse20019.


        :param _7_2_1: The _7_2_1 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_2_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_2_1`, must not be `None`")  # noqa: E501

        self.__7_2_1 = _7_2_1

    @property
    def _7_3_13(self):
        """Gets the _7_3_13 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_13 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_13

    @_7_3_13.setter
    def _7_3_13(self, _7_3_13):
        """Sets the _7_3_13 of this InlineResponse20019.


        :param _7_3_13: The _7_3_13 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_13 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_13`, must not be `None`")  # noqa: E501

        self.__7_3_13 = _7_3_13

    @property
    def _7_0_0(self):
        """Gets the _7_0_0 of this InlineResponse20019.  # noqa: E501


        :return: The _7_0_0 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_0_0

    @_7_0_0.setter
    def _7_0_0(self, _7_0_0):
        """Sets the _7_0_0 of this InlineResponse20019.


        :param _7_0_0: The _7_0_0 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_0_0 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_0_0`, must not be `None`")  # noqa: E501

        self.__7_0_0 = _7_0_0

    @property
    def _7_3_17(self):
        """Gets the _7_3_17 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_17 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_17

    @_7_3_17.setter
    def _7_3_17(self, _7_3_17):
        """Sets the _7_3_17 of this InlineResponse20019.


        :param _7_3_17: The _7_3_17 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_17 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_17`, must not be `None`")  # noqa: E501

        self.__7_3_17 = _7_3_17

    @property
    def _7_3_5(self):
        """Gets the _7_3_5 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_5 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_5

    @_7_3_5.setter
    def _7_3_5(self, _7_3_5):
        """Sets the _7_3_5 of this InlineResponse20019.


        :param _7_3_5: The _7_3_5 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_5 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_5`, must not be `None`")  # noqa: E501

        self.__7_3_5 = _7_3_5

    @property
    def _7_3_20(self):
        """Gets the _7_3_20 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_20 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_20

    @_7_3_20.setter
    def _7_3_20(self, _7_3_20):
        """Sets the _7_3_20 of this InlineResponse20019.


        :param _7_3_20: The _7_3_20 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_20 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_20`, must not be `None`")  # noqa: E501

        self.__7_3_20 = _7_3_20

    @property
    def _7_3_2(self):
        """Gets the _7_3_2 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_2 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_3_2

    @_7_3_2.setter
    def _7_3_2(self, _7_3_2):
        """Sets the _7_3_2 of this InlineResponse20019.


        :param _7_3_2: The _7_3_2 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_3_2 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_2`, must not be `None`")  # noqa: E501

        self.__7_3_2 = _7_3_2

    @property
    def _7_3_9(self):
        """Gets the _7_3_9 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_9 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_9

    @_7_3_9.setter
    def _7_3_9(self, _7_3_9):
        """Sets the _7_3_9 of this InlineResponse20019.


        :param _7_3_9: The _7_3_9 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_9 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_9`, must not be `None`")  # noqa: E501

        self.__7_3_9 = _7_3_9

    @property
    def _7_3_24(self):
        """Gets the _7_3_24 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_24 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_24

    @_7_3_24.setter
    def _7_3_24(self, _7_3_24):
        """Sets the _7_3_24 of this InlineResponse20019.


        :param _7_3_24: The _7_3_24 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_24 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_24`, must not be `None`")  # noqa: E501

        self.__7_3_24 = _7_3_24

    @property
    def _7_2_0(self):
        """Gets the _7_2_0 of this InlineResponse20019.  # noqa: E501


        :return: The _7_2_0 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_2_0

    @_7_2_0.setter
    def _7_2_0(self, _7_2_0):
        """Sets the _7_2_0 of this InlineResponse20019.


        :param _7_2_0: The _7_2_0 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_2_0 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_2_0`, must not be `None`")  # noqa: E501

        self.__7_2_0 = _7_2_0

    @property
    def _7_3_0(self):
        """Gets the _7_3_0 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_0 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_3_0

    @_7_3_0.setter
    def _7_3_0(self, _7_3_0):
        """Sets the _7_3_0 of this InlineResponse20019.


        :param _7_3_0: The _7_3_0 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_3_0 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_0`, must not be `None`")  # noqa: E501

        self.__7_3_0 = _7_3_0

    @property
    def _7_3_14(self):
        """Gets the _7_3_14 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_14 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_14

    @_7_3_14.setter
    def _7_3_14(self, _7_3_14):
        """Sets the _7_3_14 of this InlineResponse20019.


        :param _7_3_14: The _7_3_14 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_14 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_14`, must not be `None`")  # noqa: E501

        self.__7_3_14 = _7_3_14

    @property
    def _7_3_6(self):
        """Gets the _7_3_6 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_6 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_6

    @_7_3_6.setter
    def _7_3_6(self, _7_3_6):
        """Sets the _7_3_6 of this InlineResponse20019.


        :param _7_3_6: The _7_3_6 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_6 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_6`, must not be `None`")  # noqa: E501

        self.__7_3_6 = _7_3_6

    @property
    def _7_3_1(self):
        """Gets the _7_3_1 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_1 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_3_1

    @_7_3_1.setter
    def _7_3_1(self, _7_3_1):
        """Sets the _7_3_1 of this InlineResponse20019.


        :param _7_3_1: The _7_3_1 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_3_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_1`, must not be `None`")  # noqa: E501

        self.__7_3_1 = _7_3_1

    @property
    def _7_3_19(self):
        """Gets the _7_3_19 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_19 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_19

    @_7_3_19.setter
    def _7_3_19(self, _7_3_19):
        """Sets the _7_3_19 of this InlineResponse20019.


        :param _7_3_19: The _7_3_19 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_19 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_19`, must not be `None`")  # noqa: E501

        self.__7_3_19 = _7_3_19

    @property
    def _7_3_15(self):
        """Gets the _7_3_15 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_15 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_15

    @_7_3_15.setter
    def _7_3_15(self, _7_3_15):
        """Sets the _7_3_15 of this InlineResponse20019.


        :param _7_3_15: The _7_3_15 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_15 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_15`, must not be `None`")  # noqa: E501

        self.__7_3_15 = _7_3_15

    @property
    def _7_3_10(self):
        """Gets the _7_3_10 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_10 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_10

    @_7_3_10.setter
    def _7_3_10(self, _7_3_10):
        """Sets the _7_3_10 of this InlineResponse20019.


        :param _7_3_10: The _7_3_10 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_10 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_10`, must not be `None`")  # noqa: E501

        self.__7_3_10 = _7_3_10

    @property
    def _7_3_7(self):
        """Gets the _7_3_7 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_7 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019734
        """
        return self.__7_3_7

    @_7_3_7.setter
    def _7_3_7(self, _7_3_7):
        """Sets the _7_3_7 of this InlineResponse20019.


        :param _7_3_7: The _7_3_7 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019734
        """
        if self.local_vars_configuration.client_side_validation and _7_3_7 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_7`, must not be `None`")  # noqa: E501

        self.__7_3_7 = _7_3_7

    @property
    def _7_3_21(self):
        """Gets the _7_3_21 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_21 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_21

    @_7_3_21.setter
    def _7_3_21(self, _7_3_21):
        """Sets the _7_3_21 of this InlineResponse20019.


        :param _7_3_21: The _7_3_21 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_21 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_21`, must not be `None`")  # noqa: E501

        self.__7_3_21 = _7_3_21

    @property
    def _7_3_3(self):
        """Gets the _7_3_3 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_3 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse20019710
        """
        return self.__7_3_3

    @_7_3_3.setter
    def _7_3_3(self, _7_3_3):
        """Sets the _7_3_3 of this InlineResponse20019.


        :param _7_3_3: The _7_3_3 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse20019710
        """
        if self.local_vars_configuration.client_side_validation and _7_3_3 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_3`, must not be `None`")  # noqa: E501

        self.__7_3_3 = _7_3_3

    @property
    def _7_3_18(self):
        """Gets the _7_3_18 of this InlineResponse20019.  # noqa: E501


        :return: The _7_3_18 of this InlineResponse20019.  # noqa: E501
        :rtype: InlineResponse200197316
        """
        return self.__7_3_18

    @_7_3_18.setter
    def _7_3_18(self, _7_3_18):
        """Sets the _7_3_18 of this InlineResponse20019.


        :param _7_3_18: The _7_3_18 of this InlineResponse20019.  # noqa: E501
        :type: InlineResponse200197316
        """
        if self.local_vars_configuration.client_side_validation and _7_3_18 is None:  # noqa: E501
            raise ValueError("Invalid value for `_7_3_18`, must not be `None`")  # noqa: E501

        self.__7_3_18 = _7_3_18

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
        if not isinstance(other, InlineResponse20019):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineResponse20019):
            return True

        return self.to_dict() != other.to_dict()
