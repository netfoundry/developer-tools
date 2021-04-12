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


class InlineResponse20019710(object):
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
        'ziti_cli_linux_binary_sha_1': 'str',
        'ziti_tunnel_linux_binary': 'str',
        'ziti_tunnel_linux_binary_sha_1': 'str',
        'ziti_controller_binary': 'str',
        'ziti_cli_linux_binary_md5': 'str',
        'ziti_router_linux_binary_sha_1': 'str',
        'ziti_router_linux_binary_sha_256': 'str',
        'ziti_router_linux_binary_md5': 'str',
        'ziti_windows_desktop_edge': 'str',
        'ziti_mac_desktop_edge': 'str',
        'ziti_controller_binary_sha_1': 'str',
        'ziti_controller_binary_md5': 'str',
        'ziti_controller_binary_sha_256': 'str',
        'ziti_ios_edge': 'str',
        'ziti_cli_linux_binary': 'str',
        'ziti_version': 'str',
        'ziti_router_linux_binary': 'str',
        'ziti_tunnel_linux_binary_sha_256': 'str',
        'ziti_android_edge': 'str',
        'ziti_tunnel_linux_binary_md5': 'str',
        'ziti_cli_linux_binary_sha_256': 'str',
        'active': 'bool'
    }

    attribute_map = {
        'ziti_cli_linux_binary_sha_1': 'zitiCliLinuxBinary.sha-1',
        'ziti_tunnel_linux_binary': 'zitiTunnelLinuxBinary',
        'ziti_tunnel_linux_binary_sha_1': 'zitiTunnelLinuxBinary.sha-1',
        'ziti_controller_binary': 'zitiControllerBinary',
        'ziti_cli_linux_binary_md5': 'zitiCliLinuxBinary.md5',
        'ziti_router_linux_binary_sha_1': 'zitiRouterLinuxBinary.sha-1',
        'ziti_router_linux_binary_sha_256': 'zitiRouterLinuxBinary.sha-256',
        'ziti_router_linux_binary_md5': 'zitiRouterLinuxBinary.md5',
        'ziti_windows_desktop_edge': 'zitiWindowsDesktopEdge',
        'ziti_mac_desktop_edge': 'zitiMacDesktopEdge',
        'ziti_controller_binary_sha_1': 'zitiControllerBinary.sha-1',
        'ziti_controller_binary_md5': 'zitiControllerBinary.md5',
        'ziti_controller_binary_sha_256': 'zitiControllerBinary.sha-256',
        'ziti_ios_edge': 'zitiIosEdge',
        'ziti_cli_linux_binary': 'zitiCliLinuxBinary',
        'ziti_version': 'zitiVersion',
        'ziti_router_linux_binary': 'zitiRouterLinuxBinary',
        'ziti_tunnel_linux_binary_sha_256': 'zitiTunnelLinuxBinary.sha-256',
        'ziti_android_edge': 'zitiAndroidEdge',
        'ziti_tunnel_linux_binary_md5': 'zitiTunnelLinuxBinary.md5',
        'ziti_cli_linux_binary_sha_256': 'zitiCliLinuxBinary.sha-256',
        'active': 'active'
    }

    def __init__(self, ziti_cli_linux_binary_sha_1=None, ziti_tunnel_linux_binary=None, ziti_tunnel_linux_binary_sha_1=None, ziti_controller_binary=None, ziti_cli_linux_binary_md5=None, ziti_router_linux_binary_sha_1=None, ziti_router_linux_binary_sha_256=None, ziti_router_linux_binary_md5=None, ziti_windows_desktop_edge=None, ziti_mac_desktop_edge=None, ziti_controller_binary_sha_1=None, ziti_controller_binary_md5=None, ziti_controller_binary_sha_256=None, ziti_ios_edge=None, ziti_cli_linux_binary=None, ziti_version=None, ziti_router_linux_binary=None, ziti_tunnel_linux_binary_sha_256=None, ziti_android_edge=None, ziti_tunnel_linux_binary_md5=None, ziti_cli_linux_binary_sha_256=None, active=None, local_vars_configuration=None):  # noqa: E501
        """InlineResponse20019710 - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._ziti_cli_linux_binary_sha_1 = None
        self._ziti_tunnel_linux_binary = None
        self._ziti_tunnel_linux_binary_sha_1 = None
        self._ziti_controller_binary = None
        self._ziti_cli_linux_binary_md5 = None
        self._ziti_router_linux_binary_sha_1 = None
        self._ziti_router_linux_binary_sha_256 = None
        self._ziti_router_linux_binary_md5 = None
        self._ziti_windows_desktop_edge = None
        self._ziti_mac_desktop_edge = None
        self._ziti_controller_binary_sha_1 = None
        self._ziti_controller_binary_md5 = None
        self._ziti_controller_binary_sha_256 = None
        self._ziti_ios_edge = None
        self._ziti_cli_linux_binary = None
        self._ziti_version = None
        self._ziti_router_linux_binary = None
        self._ziti_tunnel_linux_binary_sha_256 = None
        self._ziti_android_edge = None
        self._ziti_tunnel_linux_binary_md5 = None
        self._ziti_cli_linux_binary_sha_256 = None
        self._active = None
        self.discriminator = None

        self.ziti_cli_linux_binary_sha_1 = ziti_cli_linux_binary_sha_1
        self.ziti_tunnel_linux_binary = ziti_tunnel_linux_binary
        self.ziti_tunnel_linux_binary_sha_1 = ziti_tunnel_linux_binary_sha_1
        self.ziti_controller_binary = ziti_controller_binary
        self.ziti_cli_linux_binary_md5 = ziti_cli_linux_binary_md5
        self.ziti_router_linux_binary_sha_1 = ziti_router_linux_binary_sha_1
        self.ziti_router_linux_binary_sha_256 = ziti_router_linux_binary_sha_256
        self.ziti_router_linux_binary_md5 = ziti_router_linux_binary_md5
        self.ziti_windows_desktop_edge = ziti_windows_desktop_edge
        self.ziti_mac_desktop_edge = ziti_mac_desktop_edge
        self.ziti_controller_binary_sha_1 = ziti_controller_binary_sha_1
        self.ziti_controller_binary_md5 = ziti_controller_binary_md5
        self.ziti_controller_binary_sha_256 = ziti_controller_binary_sha_256
        self.ziti_ios_edge = ziti_ios_edge
        self.ziti_cli_linux_binary = ziti_cli_linux_binary
        self.ziti_version = ziti_version
        self.ziti_router_linux_binary = ziti_router_linux_binary
        self.ziti_tunnel_linux_binary_sha_256 = ziti_tunnel_linux_binary_sha_256
        self.ziti_android_edge = ziti_android_edge
        self.ziti_tunnel_linux_binary_md5 = ziti_tunnel_linux_binary_md5
        self.ziti_cli_linux_binary_sha_256 = ziti_cli_linux_binary_sha_256
        self.active = active

    @property
    def ziti_cli_linux_binary_sha_1(self):
        """Gets the ziti_cli_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_cli_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_cli_linux_binary_sha_1

    @ziti_cli_linux_binary_sha_1.setter
    def ziti_cli_linux_binary_sha_1(self, ziti_cli_linux_binary_sha_1):
        """Sets the ziti_cli_linux_binary_sha_1 of this InlineResponse20019710.


        :param ziti_cli_linux_binary_sha_1: The ziti_cli_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_cli_linux_binary_sha_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_cli_linux_binary_sha_1`, must not be `None`")  # noqa: E501

        self._ziti_cli_linux_binary_sha_1 = ziti_cli_linux_binary_sha_1

    @property
    def ziti_tunnel_linux_binary(self):
        """Gets the ziti_tunnel_linux_binary of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_tunnel_linux_binary of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_tunnel_linux_binary

    @ziti_tunnel_linux_binary.setter
    def ziti_tunnel_linux_binary(self, ziti_tunnel_linux_binary):
        """Sets the ziti_tunnel_linux_binary of this InlineResponse20019710.


        :param ziti_tunnel_linux_binary: The ziti_tunnel_linux_binary of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_tunnel_linux_binary is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_tunnel_linux_binary`, must not be `None`")  # noqa: E501

        self._ziti_tunnel_linux_binary = ziti_tunnel_linux_binary

    @property
    def ziti_tunnel_linux_binary_sha_1(self):
        """Gets the ziti_tunnel_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_tunnel_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_tunnel_linux_binary_sha_1

    @ziti_tunnel_linux_binary_sha_1.setter
    def ziti_tunnel_linux_binary_sha_1(self, ziti_tunnel_linux_binary_sha_1):
        """Sets the ziti_tunnel_linux_binary_sha_1 of this InlineResponse20019710.


        :param ziti_tunnel_linux_binary_sha_1: The ziti_tunnel_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_tunnel_linux_binary_sha_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_tunnel_linux_binary_sha_1`, must not be `None`")  # noqa: E501

        self._ziti_tunnel_linux_binary_sha_1 = ziti_tunnel_linux_binary_sha_1

    @property
    def ziti_controller_binary(self):
        """Gets the ziti_controller_binary of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_controller_binary of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_controller_binary

    @ziti_controller_binary.setter
    def ziti_controller_binary(self, ziti_controller_binary):
        """Sets the ziti_controller_binary of this InlineResponse20019710.


        :param ziti_controller_binary: The ziti_controller_binary of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_controller_binary is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_controller_binary`, must not be `None`")  # noqa: E501

        self._ziti_controller_binary = ziti_controller_binary

    @property
    def ziti_cli_linux_binary_md5(self):
        """Gets the ziti_cli_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_cli_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_cli_linux_binary_md5

    @ziti_cli_linux_binary_md5.setter
    def ziti_cli_linux_binary_md5(self, ziti_cli_linux_binary_md5):
        """Sets the ziti_cli_linux_binary_md5 of this InlineResponse20019710.


        :param ziti_cli_linux_binary_md5: The ziti_cli_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_cli_linux_binary_md5 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_cli_linux_binary_md5`, must not be `None`")  # noqa: E501

        self._ziti_cli_linux_binary_md5 = ziti_cli_linux_binary_md5

    @property
    def ziti_router_linux_binary_sha_1(self):
        """Gets the ziti_router_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_router_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_router_linux_binary_sha_1

    @ziti_router_linux_binary_sha_1.setter
    def ziti_router_linux_binary_sha_1(self, ziti_router_linux_binary_sha_1):
        """Sets the ziti_router_linux_binary_sha_1 of this InlineResponse20019710.


        :param ziti_router_linux_binary_sha_1: The ziti_router_linux_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_router_linux_binary_sha_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_router_linux_binary_sha_1`, must not be `None`")  # noqa: E501

        self._ziti_router_linux_binary_sha_1 = ziti_router_linux_binary_sha_1

    @property
    def ziti_router_linux_binary_sha_256(self):
        """Gets the ziti_router_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_router_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_router_linux_binary_sha_256

    @ziti_router_linux_binary_sha_256.setter
    def ziti_router_linux_binary_sha_256(self, ziti_router_linux_binary_sha_256):
        """Sets the ziti_router_linux_binary_sha_256 of this InlineResponse20019710.


        :param ziti_router_linux_binary_sha_256: The ziti_router_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_router_linux_binary_sha_256 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_router_linux_binary_sha_256`, must not be `None`")  # noqa: E501

        self._ziti_router_linux_binary_sha_256 = ziti_router_linux_binary_sha_256

    @property
    def ziti_router_linux_binary_md5(self):
        """Gets the ziti_router_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_router_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_router_linux_binary_md5

    @ziti_router_linux_binary_md5.setter
    def ziti_router_linux_binary_md5(self, ziti_router_linux_binary_md5):
        """Sets the ziti_router_linux_binary_md5 of this InlineResponse20019710.


        :param ziti_router_linux_binary_md5: The ziti_router_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_router_linux_binary_md5 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_router_linux_binary_md5`, must not be `None`")  # noqa: E501

        self._ziti_router_linux_binary_md5 = ziti_router_linux_binary_md5

    @property
    def ziti_windows_desktop_edge(self):
        """Gets the ziti_windows_desktop_edge of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_windows_desktop_edge of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_windows_desktop_edge

    @ziti_windows_desktop_edge.setter
    def ziti_windows_desktop_edge(self, ziti_windows_desktop_edge):
        """Sets the ziti_windows_desktop_edge of this InlineResponse20019710.


        :param ziti_windows_desktop_edge: The ziti_windows_desktop_edge of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_windows_desktop_edge is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_windows_desktop_edge`, must not be `None`")  # noqa: E501

        self._ziti_windows_desktop_edge = ziti_windows_desktop_edge

    @property
    def ziti_mac_desktop_edge(self):
        """Gets the ziti_mac_desktop_edge of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_mac_desktop_edge of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_mac_desktop_edge

    @ziti_mac_desktop_edge.setter
    def ziti_mac_desktop_edge(self, ziti_mac_desktop_edge):
        """Sets the ziti_mac_desktop_edge of this InlineResponse20019710.


        :param ziti_mac_desktop_edge: The ziti_mac_desktop_edge of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_mac_desktop_edge is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_mac_desktop_edge`, must not be `None`")  # noqa: E501

        self._ziti_mac_desktop_edge = ziti_mac_desktop_edge

    @property
    def ziti_controller_binary_sha_1(self):
        """Gets the ziti_controller_binary_sha_1 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_controller_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_controller_binary_sha_1

    @ziti_controller_binary_sha_1.setter
    def ziti_controller_binary_sha_1(self, ziti_controller_binary_sha_1):
        """Sets the ziti_controller_binary_sha_1 of this InlineResponse20019710.


        :param ziti_controller_binary_sha_1: The ziti_controller_binary_sha_1 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_controller_binary_sha_1 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_controller_binary_sha_1`, must not be `None`")  # noqa: E501

        self._ziti_controller_binary_sha_1 = ziti_controller_binary_sha_1

    @property
    def ziti_controller_binary_md5(self):
        """Gets the ziti_controller_binary_md5 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_controller_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_controller_binary_md5

    @ziti_controller_binary_md5.setter
    def ziti_controller_binary_md5(self, ziti_controller_binary_md5):
        """Sets the ziti_controller_binary_md5 of this InlineResponse20019710.


        :param ziti_controller_binary_md5: The ziti_controller_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_controller_binary_md5 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_controller_binary_md5`, must not be `None`")  # noqa: E501

        self._ziti_controller_binary_md5 = ziti_controller_binary_md5

    @property
    def ziti_controller_binary_sha_256(self):
        """Gets the ziti_controller_binary_sha_256 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_controller_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_controller_binary_sha_256

    @ziti_controller_binary_sha_256.setter
    def ziti_controller_binary_sha_256(self, ziti_controller_binary_sha_256):
        """Sets the ziti_controller_binary_sha_256 of this InlineResponse20019710.


        :param ziti_controller_binary_sha_256: The ziti_controller_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_controller_binary_sha_256 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_controller_binary_sha_256`, must not be `None`")  # noqa: E501

        self._ziti_controller_binary_sha_256 = ziti_controller_binary_sha_256

    @property
    def ziti_ios_edge(self):
        """Gets the ziti_ios_edge of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_ios_edge of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_ios_edge

    @ziti_ios_edge.setter
    def ziti_ios_edge(self, ziti_ios_edge):
        """Sets the ziti_ios_edge of this InlineResponse20019710.


        :param ziti_ios_edge: The ziti_ios_edge of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_ios_edge is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_ios_edge`, must not be `None`")  # noqa: E501

        self._ziti_ios_edge = ziti_ios_edge

    @property
    def ziti_cli_linux_binary(self):
        """Gets the ziti_cli_linux_binary of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_cli_linux_binary of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_cli_linux_binary

    @ziti_cli_linux_binary.setter
    def ziti_cli_linux_binary(self, ziti_cli_linux_binary):
        """Sets the ziti_cli_linux_binary of this InlineResponse20019710.


        :param ziti_cli_linux_binary: The ziti_cli_linux_binary of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_cli_linux_binary is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_cli_linux_binary`, must not be `None`")  # noqa: E501

        self._ziti_cli_linux_binary = ziti_cli_linux_binary

    @property
    def ziti_version(self):
        """Gets the ziti_version of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_version of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_version

    @ziti_version.setter
    def ziti_version(self, ziti_version):
        """Sets the ziti_version of this InlineResponse20019710.


        :param ziti_version: The ziti_version of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_version is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_version`, must not be `None`")  # noqa: E501

        self._ziti_version = ziti_version

    @property
    def ziti_router_linux_binary(self):
        """Gets the ziti_router_linux_binary of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_router_linux_binary of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_router_linux_binary

    @ziti_router_linux_binary.setter
    def ziti_router_linux_binary(self, ziti_router_linux_binary):
        """Sets the ziti_router_linux_binary of this InlineResponse20019710.


        :param ziti_router_linux_binary: The ziti_router_linux_binary of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_router_linux_binary is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_router_linux_binary`, must not be `None`")  # noqa: E501

        self._ziti_router_linux_binary = ziti_router_linux_binary

    @property
    def ziti_tunnel_linux_binary_sha_256(self):
        """Gets the ziti_tunnel_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_tunnel_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_tunnel_linux_binary_sha_256

    @ziti_tunnel_linux_binary_sha_256.setter
    def ziti_tunnel_linux_binary_sha_256(self, ziti_tunnel_linux_binary_sha_256):
        """Sets the ziti_tunnel_linux_binary_sha_256 of this InlineResponse20019710.


        :param ziti_tunnel_linux_binary_sha_256: The ziti_tunnel_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_tunnel_linux_binary_sha_256 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_tunnel_linux_binary_sha_256`, must not be `None`")  # noqa: E501

        self._ziti_tunnel_linux_binary_sha_256 = ziti_tunnel_linux_binary_sha_256

    @property
    def ziti_android_edge(self):
        """Gets the ziti_android_edge of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_android_edge of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_android_edge

    @ziti_android_edge.setter
    def ziti_android_edge(self, ziti_android_edge):
        """Sets the ziti_android_edge of this InlineResponse20019710.


        :param ziti_android_edge: The ziti_android_edge of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_android_edge is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_android_edge`, must not be `None`")  # noqa: E501

        self._ziti_android_edge = ziti_android_edge

    @property
    def ziti_tunnel_linux_binary_md5(self):
        """Gets the ziti_tunnel_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_tunnel_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_tunnel_linux_binary_md5

    @ziti_tunnel_linux_binary_md5.setter
    def ziti_tunnel_linux_binary_md5(self, ziti_tunnel_linux_binary_md5):
        """Sets the ziti_tunnel_linux_binary_md5 of this InlineResponse20019710.


        :param ziti_tunnel_linux_binary_md5: The ziti_tunnel_linux_binary_md5 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_tunnel_linux_binary_md5 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_tunnel_linux_binary_md5`, must not be `None`")  # noqa: E501

        self._ziti_tunnel_linux_binary_md5 = ziti_tunnel_linux_binary_md5

    @property
    def ziti_cli_linux_binary_sha_256(self):
        """Gets the ziti_cli_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501


        :return: The ziti_cli_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :rtype: str
        """
        return self._ziti_cli_linux_binary_sha_256

    @ziti_cli_linux_binary_sha_256.setter
    def ziti_cli_linux_binary_sha_256(self, ziti_cli_linux_binary_sha_256):
        """Sets the ziti_cli_linux_binary_sha_256 of this InlineResponse20019710.


        :param ziti_cli_linux_binary_sha_256: The ziti_cli_linux_binary_sha_256 of this InlineResponse20019710.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ziti_cli_linux_binary_sha_256 is None:  # noqa: E501
            raise ValueError("Invalid value for `ziti_cli_linux_binary_sha_256`, must not be `None`")  # noqa: E501

        self._ziti_cli_linux_binary_sha_256 = ziti_cli_linux_binary_sha_256

    @property
    def active(self):
        """Gets the active of this InlineResponse20019710.  # noqa: E501


        :return: The active of this InlineResponse20019710.  # noqa: E501
        :rtype: bool
        """
        return self._active

    @active.setter
    def active(self, active):
        """Sets the active of this InlineResponse20019710.


        :param active: The active of this InlineResponse20019710.  # noqa: E501
        :type: bool
        """
        if self.local_vars_configuration.client_side_validation and active is None:  # noqa: E501
            raise ValueError("Invalid value for `active`, must not be `None`")  # noqa: E501

        self._active = active

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
        if not isinstance(other, InlineResponse20019710):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineResponse20019710):
            return True

        return self.to_dict() != other.to_dict()
