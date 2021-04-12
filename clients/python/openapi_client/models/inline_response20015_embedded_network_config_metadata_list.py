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


class InlineResponse20015EmbeddedNetworkConfigMetadataList(object):
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
        'network_controller_volume_size': 'float',
        'gateway_volume_size': 'float',
        'name': 'str',
        'gcp_transfer_node_size': 'str',
        'aws_network_controller_size': 'str',
        'transfer_node_volume_size': 'float',
        'aws_gateway_size': 'str',
        'ocp_transfer_node_size': 'str',
        'aws_transfer_node_size': 'str',
        'id': 'str',
        'azure_transfer_node_size': 'str',
        'alicloud_transfer_node_size': 'str',
        'links': 'InlineResponse2002EmbeddedLinks'
    }

    attribute_map = {
        'network_controller_volume_size': 'networkControllerVolumeSize',
        'gateway_volume_size': 'gatewayVolumeSize',
        'name': 'name',
        'gcp_transfer_node_size': 'gcpTransferNodeSize',
        'aws_network_controller_size': 'awsNetworkControllerSize',
        'transfer_node_volume_size': 'transferNodeVolumeSize',
        'aws_gateway_size': 'awsGatewaySize',
        'ocp_transfer_node_size': 'ocpTransferNodeSize',
        'aws_transfer_node_size': 'awsTransferNodeSize',
        'id': 'id',
        'azure_transfer_node_size': 'azureTransferNodeSize',
        'alicloud_transfer_node_size': 'alicloudTransferNodeSize',
        'links': '_links'
    }

    def __init__(self, network_controller_volume_size=None, gateway_volume_size=None, name=None, gcp_transfer_node_size=None, aws_network_controller_size=None, transfer_node_volume_size=None, aws_gateway_size=None, ocp_transfer_node_size=None, aws_transfer_node_size=None, id=None, azure_transfer_node_size=None, alicloud_transfer_node_size=None, links=None, local_vars_configuration=None):  # noqa: E501
        """InlineResponse20015EmbeddedNetworkConfigMetadataList - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._network_controller_volume_size = None
        self._gateway_volume_size = None
        self._name = None
        self._gcp_transfer_node_size = None
        self._aws_network_controller_size = None
        self._transfer_node_volume_size = None
        self._aws_gateway_size = None
        self._ocp_transfer_node_size = None
        self._aws_transfer_node_size = None
        self._id = None
        self._azure_transfer_node_size = None
        self._alicloud_transfer_node_size = None
        self._links = None
        self.discriminator = None

        self.network_controller_volume_size = network_controller_volume_size
        self.gateway_volume_size = gateway_volume_size
        self.name = name
        self.gcp_transfer_node_size = gcp_transfer_node_size
        self.aws_network_controller_size = aws_network_controller_size
        self.transfer_node_volume_size = transfer_node_volume_size
        self.aws_gateway_size = aws_gateway_size
        self.ocp_transfer_node_size = ocp_transfer_node_size
        self.aws_transfer_node_size = aws_transfer_node_size
        self.id = id
        self.azure_transfer_node_size = azure_transfer_node_size
        self.alicloud_transfer_node_size = alicloud_transfer_node_size
        self.links = links

    @property
    def network_controller_volume_size(self):
        """Gets the network_controller_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The network_controller_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: float
        """
        return self._network_controller_volume_size

    @network_controller_volume_size.setter
    def network_controller_volume_size(self, network_controller_volume_size):
        """Sets the network_controller_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param network_controller_volume_size: The network_controller_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and network_controller_volume_size is None:  # noqa: E501
            raise ValueError("Invalid value for `network_controller_volume_size`, must not be `None`")  # noqa: E501

        self._network_controller_volume_size = network_controller_volume_size

    @property
    def gateway_volume_size(self):
        """Gets the gateway_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The gateway_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: float
        """
        return self._gateway_volume_size

    @gateway_volume_size.setter
    def gateway_volume_size(self, gateway_volume_size):
        """Sets the gateway_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param gateway_volume_size: The gateway_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and gateway_volume_size is None:  # noqa: E501
            raise ValueError("Invalid value for `gateway_volume_size`, must not be `None`")  # noqa: E501

        self._gateway_volume_size = gateway_volume_size

    @property
    def name(self):
        """Gets the name of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The name of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param name: The name of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and name is None:  # noqa: E501
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def gcp_transfer_node_size(self):
        """Gets the gcp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The gcp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._gcp_transfer_node_size

    @gcp_transfer_node_size.setter
    def gcp_transfer_node_size(self, gcp_transfer_node_size):
        """Sets the gcp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param gcp_transfer_node_size: The gcp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and gcp_transfer_node_size is None:  # noqa: E501
            raise ValueError("Invalid value for `gcp_transfer_node_size`, must not be `None`")  # noqa: E501

        self._gcp_transfer_node_size = gcp_transfer_node_size

    @property
    def aws_network_controller_size(self):
        """Gets the aws_network_controller_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The aws_network_controller_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._aws_network_controller_size

    @aws_network_controller_size.setter
    def aws_network_controller_size(self, aws_network_controller_size):
        """Sets the aws_network_controller_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param aws_network_controller_size: The aws_network_controller_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and aws_network_controller_size is None:  # noqa: E501
            raise ValueError("Invalid value for `aws_network_controller_size`, must not be `None`")  # noqa: E501

        self._aws_network_controller_size = aws_network_controller_size

    @property
    def transfer_node_volume_size(self):
        """Gets the transfer_node_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The transfer_node_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: float
        """
        return self._transfer_node_volume_size

    @transfer_node_volume_size.setter
    def transfer_node_volume_size(self, transfer_node_volume_size):
        """Sets the transfer_node_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param transfer_node_volume_size: The transfer_node_volume_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: float
        """
        if self.local_vars_configuration.client_side_validation and transfer_node_volume_size is None:  # noqa: E501
            raise ValueError("Invalid value for `transfer_node_volume_size`, must not be `None`")  # noqa: E501

        self._transfer_node_volume_size = transfer_node_volume_size

    @property
    def aws_gateway_size(self):
        """Gets the aws_gateway_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The aws_gateway_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._aws_gateway_size

    @aws_gateway_size.setter
    def aws_gateway_size(self, aws_gateway_size):
        """Sets the aws_gateway_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param aws_gateway_size: The aws_gateway_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and aws_gateway_size is None:  # noqa: E501
            raise ValueError("Invalid value for `aws_gateway_size`, must not be `None`")  # noqa: E501

        self._aws_gateway_size = aws_gateway_size

    @property
    def ocp_transfer_node_size(self):
        """Gets the ocp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The ocp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._ocp_transfer_node_size

    @ocp_transfer_node_size.setter
    def ocp_transfer_node_size(self, ocp_transfer_node_size):
        """Sets the ocp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param ocp_transfer_node_size: The ocp_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and ocp_transfer_node_size is None:  # noqa: E501
            raise ValueError("Invalid value for `ocp_transfer_node_size`, must not be `None`")  # noqa: E501

        self._ocp_transfer_node_size = ocp_transfer_node_size

    @property
    def aws_transfer_node_size(self):
        """Gets the aws_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The aws_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._aws_transfer_node_size

    @aws_transfer_node_size.setter
    def aws_transfer_node_size(self, aws_transfer_node_size):
        """Sets the aws_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param aws_transfer_node_size: The aws_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and aws_transfer_node_size is None:  # noqa: E501
            raise ValueError("Invalid value for `aws_transfer_node_size`, must not be `None`")  # noqa: E501

        self._aws_transfer_node_size = aws_transfer_node_size

    @property
    def id(self):
        """Gets the id of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The id of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param id: The id of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and id is None:  # noqa: E501
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def azure_transfer_node_size(self):
        """Gets the azure_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The azure_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._azure_transfer_node_size

    @azure_transfer_node_size.setter
    def azure_transfer_node_size(self, azure_transfer_node_size):
        """Sets the azure_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param azure_transfer_node_size: The azure_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and azure_transfer_node_size is None:  # noqa: E501
            raise ValueError("Invalid value for `azure_transfer_node_size`, must not be `None`")  # noqa: E501

        self._azure_transfer_node_size = azure_transfer_node_size

    @property
    def alicloud_transfer_node_size(self):
        """Gets the alicloud_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The alicloud_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: str
        """
        return self._alicloud_transfer_node_size

    @alicloud_transfer_node_size.setter
    def alicloud_transfer_node_size(self, alicloud_transfer_node_size):
        """Sets the alicloud_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param alicloud_transfer_node_size: The alicloud_transfer_node_size of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and alicloud_transfer_node_size is None:  # noqa: E501
            raise ValueError("Invalid value for `alicloud_transfer_node_size`, must not be `None`")  # noqa: E501

        self._alicloud_transfer_node_size = alicloud_transfer_node_size

    @property
    def links(self):
        """Gets the links of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501


        :return: The links of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :rtype: InlineResponse2002EmbeddedLinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """Sets the links of this InlineResponse20015EmbeddedNetworkConfigMetadataList.


        :param links: The links of this InlineResponse20015EmbeddedNetworkConfigMetadataList.  # noqa: E501
        :type: InlineResponse2002EmbeddedLinks
        """
        if self.local_vars_configuration.client_side_validation and links is None:  # noqa: E501
            raise ValueError("Invalid value for `links`, must not be `None`")  # noqa: E501

        self._links = links

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
        if not isinstance(other, InlineResponse20015EmbeddedNetworkConfigMetadataList):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, InlineResponse20015EmbeddedNetworkConfigMetadataList):
            return True

        return self.to_dict() != other.to_dict()
