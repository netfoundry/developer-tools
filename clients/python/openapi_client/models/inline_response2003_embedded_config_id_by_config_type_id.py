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


class InlineResponse2003EmbeddedConfigIdByConfigTypeId(object):
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
        'd75e27f0_ebab_4567_8440_c24f02f2eca5': 'str',
        'cf3962b1_a98e_4ade_ae25_cdc388e7feb3': 'str',
        '_2c1998a1_32e2_4084_b20a_b580570f4fbf': 'str',
        '_4c42c4db_f039_4a57_8264_5f57af512614': 'str',
        '_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc': 'str',
        '_714a918a_7935_4b4f_82c3_afbadcd9e59b': 'str',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79': 'str',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be': 'str',
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27': 'str',
        '_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc': 'str',
        '_64a39300_b672_413b_9d8c_42175f7e84dd': 'str',
        'ea6e632b_d8e1_420f_bd8f_ad50b067bad6': 'str',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822': 'str'
    }

    attribute_map = {
        'd75e27f0_ebab_4567_8440_c24f02f2eca5': 'd75e27f0-ebab-4567-8440-c24f02f2eca5',
        'cf3962b1_a98e_4ade_ae25_cdc388e7feb3': 'cf3962b1-a98e-4ade-ae25-cdc388e7feb3',
        '_2c1998a1_32e2_4084_b20a_b580570f4fbf': '2c1998a1-32e2-4084-b20a-b580570f4fbf',
        '_4c42c4db_f039_4a57_8264_5f57af512614': '4c42c4db-f039-4a57-8264-5f57af512614',
        '_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc': '7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc',
        '_714a918a_7935_4b4f_82c3_afbadcd9e59b': '714a918a-7935-4b4f-82c3-afbadcd9e59b',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79': 'b1582680-ab7b-45d0-ac36-b00f82df8e79',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be': 'e7f6ef8d-da57-444c-b677-f03974f5d8be',
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27': '6fa5c2bc-b7f7-47f8-9229-e927722adb27',
        '_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc': '170c6b9b-f010-46a1-a2ee-cd6729e1f5dc',
        '_64a39300_b672_413b_9d8c_42175f7e84dd': '64a39300-b672-413b-9d8c-42175f7e84dd',
        'ea6e632b_d8e1_420f_bd8f_ad50b067bad6': 'ea6e632b-d8e1-420f-bd8f-ad50b067bad6',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822': '7491e52d-97e8-4759-8a63-c8ea8a75f822'
    }

    def __init__(self, d75e27f0_ebab_4567_8440_c24f02f2eca5=None, cf3962b1_a98e_4ade_ae25_cdc388e7feb3=None, _2c1998a1_32e2_4084_b20a_b580570f4fbf=None, _4c42c4db_f039_4a57_8264_5f57af512614=None, _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc=None, _714a918a_7935_4b4f_82c3_afbadcd9e59b=None, b1582680_ab7b_45d0_ac36_b00f82df8e79=None, e7f6ef8d_da57_444c_b677_f03974f5d8be=None, _6fa5c2bc_b7f7_47f8_9229_e927722adb27=None, _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc=None, _64a39300_b672_413b_9d8c_42175f7e84dd=None, ea6e632b_d8e1_420f_bd8f_ad50b067bad6=None, _7491e52d_97e8_4759_8a63_c8ea8a75f822=None, local_vars_configuration=None):  # noqa: E501
        """InlineResponse2003EmbeddedConfigIdByConfigTypeId - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._d75e27f0_ebab_4567_8440_c24f02f2eca5 = None
        self._cf3962b1_a98e_4ade_ae25_cdc388e7feb3 = None
        self.__2c1998a1_32e2_4084_b20a_b580570f4fbf = None
        self.__4c42c4db_f039_4a57_8264_5f57af512614 = None
        self.__7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = None
        self.__714a918a_7935_4b4f_82c3_afbadcd9e59b = None
        self._b1582680_ab7b_45d0_ac36_b00f82df8e79 = None
        self._e7f6ef8d_da57_444c_b677_f03974f5d8be = None
        self.__6fa5c2bc_b7f7_47f8_9229_e927722adb27 = None
        self.__170c6b9b_f010_46a1_a2ee_cd6729e1f5dc = None
        self.__64a39300_b672_413b_9d8c_42175f7e84dd = None
        self._ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = None
        self.__7491e52d_97e8_4759_8a63_c8ea8a75f822 = None
        self.discriminator = None

        if d75e27f0_ebab_4567_8440_c24f02f2eca5 is not None:
            self.d75e27f0_ebab_4567_8440_c24f02f2eca5 = d75e27f0_ebab_4567_8440_c24f02f2eca5
        if cf3962b1_a98e_4ade_ae25_cdc388e7feb3 is not None:
            self.cf3962b1_a98e_4ade_ae25_cdc388e7feb3 = cf3962b1_a98e_4ade_ae25_cdc388e7feb3
        if _2c1998a1_32e2_4084_b20a_b580570f4fbf is not None:
            self._2c1998a1_32e2_4084_b20a_b580570f4fbf = _2c1998a1_32e2_4084_b20a_b580570f4fbf
        if _4c42c4db_f039_4a57_8264_5f57af512614 is not None:
            self._4c42c4db_f039_4a57_8264_5f57af512614 = _4c42c4db_f039_4a57_8264_5f57af512614
        if _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc is not None:
            self._7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc
        if _714a918a_7935_4b4f_82c3_afbadcd9e59b is not None:
            self._714a918a_7935_4b4f_82c3_afbadcd9e59b = _714a918a_7935_4b4f_82c3_afbadcd9e59b
        if b1582680_ab7b_45d0_ac36_b00f82df8e79 is not None:
            self.b1582680_ab7b_45d0_ac36_b00f82df8e79 = b1582680_ab7b_45d0_ac36_b00f82df8e79
        if e7f6ef8d_da57_444c_b677_f03974f5d8be is not None:
            self.e7f6ef8d_da57_444c_b677_f03974f5d8be = e7f6ef8d_da57_444c_b677_f03974f5d8be
        if _6fa5c2bc_b7f7_47f8_9229_e927722adb27 is not None:
            self._6fa5c2bc_b7f7_47f8_9229_e927722adb27 = _6fa5c2bc_b7f7_47f8_9229_e927722adb27
        if _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc is not None:
            self._170c6b9b_f010_46a1_a2ee_cd6729e1f5dc = _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc
        if _64a39300_b672_413b_9d8c_42175f7e84dd is not None:
            self._64a39300_b672_413b_9d8c_42175f7e84dd = _64a39300_b672_413b_9d8c_42175f7e84dd
        if ea6e632b_d8e1_420f_bd8f_ad50b067bad6 is not None:
            self.ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = ea6e632b_d8e1_420f_bd8f_ad50b067bad6
        if _7491e52d_97e8_4759_8a63_c8ea8a75f822 is not None:
            self._7491e52d_97e8_4759_8a63_c8ea8a75f822 = _7491e52d_97e8_4759_8a63_c8ea8a75f822

    @property
    def d75e27f0_ebab_4567_8440_c24f02f2eca5(self):
        """Gets the d75e27f0_ebab_4567_8440_c24f02f2eca5 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The d75e27f0_ebab_4567_8440_c24f02f2eca5 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self._d75e27f0_ebab_4567_8440_c24f02f2eca5

    @d75e27f0_ebab_4567_8440_c24f02f2eca5.setter
    def d75e27f0_ebab_4567_8440_c24f02f2eca5(self, d75e27f0_ebab_4567_8440_c24f02f2eca5):
        """Sets the d75e27f0_ebab_4567_8440_c24f02f2eca5 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param d75e27f0_ebab_4567_8440_c24f02f2eca5: The d75e27f0_ebab_4567_8440_c24f02f2eca5 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self._d75e27f0_ebab_4567_8440_c24f02f2eca5 = d75e27f0_ebab_4567_8440_c24f02f2eca5

    @property
    def cf3962b1_a98e_4ade_ae25_cdc388e7feb3(self):
        """Gets the cf3962b1_a98e_4ade_ae25_cdc388e7feb3 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The cf3962b1_a98e_4ade_ae25_cdc388e7feb3 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self._cf3962b1_a98e_4ade_ae25_cdc388e7feb3

    @cf3962b1_a98e_4ade_ae25_cdc388e7feb3.setter
    def cf3962b1_a98e_4ade_ae25_cdc388e7feb3(self, cf3962b1_a98e_4ade_ae25_cdc388e7feb3):
        """Sets the cf3962b1_a98e_4ade_ae25_cdc388e7feb3 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param cf3962b1_a98e_4ade_ae25_cdc388e7feb3: The cf3962b1_a98e_4ade_ae25_cdc388e7feb3 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self._cf3962b1_a98e_4ade_ae25_cdc388e7feb3 = cf3962b1_a98e_4ade_ae25_cdc388e7feb3

    @property
    def _2c1998a1_32e2_4084_b20a_b580570f4fbf(self):
        """Gets the _2c1998a1_32e2_4084_b20a_b580570f4fbf of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _2c1998a1_32e2_4084_b20a_b580570f4fbf of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__2c1998a1_32e2_4084_b20a_b580570f4fbf

    @_2c1998a1_32e2_4084_b20a_b580570f4fbf.setter
    def _2c1998a1_32e2_4084_b20a_b580570f4fbf(self, _2c1998a1_32e2_4084_b20a_b580570f4fbf):
        """Sets the _2c1998a1_32e2_4084_b20a_b580570f4fbf of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _2c1998a1_32e2_4084_b20a_b580570f4fbf: The _2c1998a1_32e2_4084_b20a_b580570f4fbf of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__2c1998a1_32e2_4084_b20a_b580570f4fbf = _2c1998a1_32e2_4084_b20a_b580570f4fbf

    @property
    def _4c42c4db_f039_4a57_8264_5f57af512614(self):
        """Gets the _4c42c4db_f039_4a57_8264_5f57af512614 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _4c42c4db_f039_4a57_8264_5f57af512614 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__4c42c4db_f039_4a57_8264_5f57af512614

    @_4c42c4db_f039_4a57_8264_5f57af512614.setter
    def _4c42c4db_f039_4a57_8264_5f57af512614(self, _4c42c4db_f039_4a57_8264_5f57af512614):
        """Sets the _4c42c4db_f039_4a57_8264_5f57af512614 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _4c42c4db_f039_4a57_8264_5f57af512614: The _4c42c4db_f039_4a57_8264_5f57af512614 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__4c42c4db_f039_4a57_8264_5f57af512614 = _4c42c4db_f039_4a57_8264_5f57af512614

    @property
    def _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc(self):
        """Gets the _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc

    @_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc.setter
    def _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc(self, _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc):
        """Sets the _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc: The _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc

    @property
    def _714a918a_7935_4b4f_82c3_afbadcd9e59b(self):
        """Gets the _714a918a_7935_4b4f_82c3_afbadcd9e59b of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _714a918a_7935_4b4f_82c3_afbadcd9e59b of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__714a918a_7935_4b4f_82c3_afbadcd9e59b

    @_714a918a_7935_4b4f_82c3_afbadcd9e59b.setter
    def _714a918a_7935_4b4f_82c3_afbadcd9e59b(self, _714a918a_7935_4b4f_82c3_afbadcd9e59b):
        """Sets the _714a918a_7935_4b4f_82c3_afbadcd9e59b of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _714a918a_7935_4b4f_82c3_afbadcd9e59b: The _714a918a_7935_4b4f_82c3_afbadcd9e59b of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__714a918a_7935_4b4f_82c3_afbadcd9e59b = _714a918a_7935_4b4f_82c3_afbadcd9e59b

    @property
    def b1582680_ab7b_45d0_ac36_b00f82df8e79(self):
        """Gets the b1582680_ab7b_45d0_ac36_b00f82df8e79 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The b1582680_ab7b_45d0_ac36_b00f82df8e79 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self._b1582680_ab7b_45d0_ac36_b00f82df8e79

    @b1582680_ab7b_45d0_ac36_b00f82df8e79.setter
    def b1582680_ab7b_45d0_ac36_b00f82df8e79(self, b1582680_ab7b_45d0_ac36_b00f82df8e79):
        """Sets the b1582680_ab7b_45d0_ac36_b00f82df8e79 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param b1582680_ab7b_45d0_ac36_b00f82df8e79: The b1582680_ab7b_45d0_ac36_b00f82df8e79 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self._b1582680_ab7b_45d0_ac36_b00f82df8e79 = b1582680_ab7b_45d0_ac36_b00f82df8e79

    @property
    def e7f6ef8d_da57_444c_b677_f03974f5d8be(self):
        """Gets the e7f6ef8d_da57_444c_b677_f03974f5d8be of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The e7f6ef8d_da57_444c_b677_f03974f5d8be of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self._e7f6ef8d_da57_444c_b677_f03974f5d8be

    @e7f6ef8d_da57_444c_b677_f03974f5d8be.setter
    def e7f6ef8d_da57_444c_b677_f03974f5d8be(self, e7f6ef8d_da57_444c_b677_f03974f5d8be):
        """Sets the e7f6ef8d_da57_444c_b677_f03974f5d8be of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param e7f6ef8d_da57_444c_b677_f03974f5d8be: The e7f6ef8d_da57_444c_b677_f03974f5d8be of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self._e7f6ef8d_da57_444c_b677_f03974f5d8be = e7f6ef8d_da57_444c_b677_f03974f5d8be

    @property
    def _6fa5c2bc_b7f7_47f8_9229_e927722adb27(self):
        """Gets the _6fa5c2bc_b7f7_47f8_9229_e927722adb27 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _6fa5c2bc_b7f7_47f8_9229_e927722adb27 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__6fa5c2bc_b7f7_47f8_9229_e927722adb27

    @_6fa5c2bc_b7f7_47f8_9229_e927722adb27.setter
    def _6fa5c2bc_b7f7_47f8_9229_e927722adb27(self, _6fa5c2bc_b7f7_47f8_9229_e927722adb27):
        """Sets the _6fa5c2bc_b7f7_47f8_9229_e927722adb27 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _6fa5c2bc_b7f7_47f8_9229_e927722adb27: The _6fa5c2bc_b7f7_47f8_9229_e927722adb27 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__6fa5c2bc_b7f7_47f8_9229_e927722adb27 = _6fa5c2bc_b7f7_47f8_9229_e927722adb27

    @property
    def _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc(self):
        """Gets the _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__170c6b9b_f010_46a1_a2ee_cd6729e1f5dc

    @_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc.setter
    def _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc(self, _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc):
        """Sets the _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc: The _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__170c6b9b_f010_46a1_a2ee_cd6729e1f5dc = _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc

    @property
    def _64a39300_b672_413b_9d8c_42175f7e84dd(self):
        """Gets the _64a39300_b672_413b_9d8c_42175f7e84dd of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _64a39300_b672_413b_9d8c_42175f7e84dd of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__64a39300_b672_413b_9d8c_42175f7e84dd

    @_64a39300_b672_413b_9d8c_42175f7e84dd.setter
    def _64a39300_b672_413b_9d8c_42175f7e84dd(self, _64a39300_b672_413b_9d8c_42175f7e84dd):
        """Sets the _64a39300_b672_413b_9d8c_42175f7e84dd of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _64a39300_b672_413b_9d8c_42175f7e84dd: The _64a39300_b672_413b_9d8c_42175f7e84dd of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__64a39300_b672_413b_9d8c_42175f7e84dd = _64a39300_b672_413b_9d8c_42175f7e84dd

    @property
    def ea6e632b_d8e1_420f_bd8f_ad50b067bad6(self):
        """Gets the ea6e632b_d8e1_420f_bd8f_ad50b067bad6 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The ea6e632b_d8e1_420f_bd8f_ad50b067bad6 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self._ea6e632b_d8e1_420f_bd8f_ad50b067bad6

    @ea6e632b_d8e1_420f_bd8f_ad50b067bad6.setter
    def ea6e632b_d8e1_420f_bd8f_ad50b067bad6(self, ea6e632b_d8e1_420f_bd8f_ad50b067bad6):
        """Sets the ea6e632b_d8e1_420f_bd8f_ad50b067bad6 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param ea6e632b_d8e1_420f_bd8f_ad50b067bad6: The ea6e632b_d8e1_420f_bd8f_ad50b067bad6 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self._ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = ea6e632b_d8e1_420f_bd8f_ad50b067bad6

    @property
    def _7491e52d_97e8_4759_8a63_c8ea8a75f822(self):
        """Gets the _7491e52d_97e8_4759_8a63_c8ea8a75f822 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501


        :return: The _7491e52d_97e8_4759_8a63_c8ea8a75f822 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :rtype: str
        """
        return self.__7491e52d_97e8_4759_8a63_c8ea8a75f822

    @_7491e52d_97e8_4759_8a63_c8ea8a75f822.setter
    def _7491e52d_97e8_4759_8a63_c8ea8a75f822(self, _7491e52d_97e8_4759_8a63_c8ea8a75f822):
        """Sets the _7491e52d_97e8_4759_8a63_c8ea8a75f822 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.


        :param _7491e52d_97e8_4759_8a63_c8ea8a75f822: The _7491e52d_97e8_4759_8a63_c8ea8a75f822 of this InlineResponse2003EmbeddedConfigIdByConfigTypeId.  # noqa: E501
        :type: str
        """

        self.__7491e52d_97e8_4759_8a63_c8ea8a75f822 = _7491e52d_97e8_4759_8a63_c8ea8a75f822

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
        if not isinstance(other, InlineResponse2003EmbeddedConfigIdByConfigTypeId):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineResponse2003EmbeddedConfigIdByConfigTypeId):
            return True

        return self.to_dict() != other.to_dict()
