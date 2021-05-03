# coding: utf-8

"""
    untitled API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 5170
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.inline_response20015_embedded_network_config_metadata_list import InlineResponse20015EmbeddedNetworkConfigMetadataList  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse20015EmbeddedNetworkConfigMetadataList(unittest.TestCase):
    """InlineResponse20015EmbeddedNetworkConfigMetadataList unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse20015EmbeddedNetworkConfigMetadataList
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response20015_embedded_network_config_metadata_list.InlineResponse20015EmbeddedNetworkConfigMetadataList()  # noqa: E501
        if include_optional :
            return InlineResponse20015EmbeddedNetworkConfigMetadataList(
                network_controller_volume_size = 1.337, 
                gateway_volume_size = 1.337, 
                name = '0', 
                gcp_transfer_node_size = '0', 
                aws_network_controller_size = '0', 
                transfer_node_volume_size = 1.337, 
                aws_gateway_size = '0', 
                ocp_transfer_node_size = '0', 
                aws_transfer_node_size = '0', 
                id = '0', 
                azure_transfer_node_size = '0', 
                alicloud_transfer_node_size = '0', 
                links = openapi_client.models.inline_response_200_2__embedded__links.inline_response_200_2__embedded__links(
                    self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), )
            )
        else :
            return InlineResponse20015EmbeddedNetworkConfigMetadataList(
                network_controller_volume_size = 1.337,
                gateway_volume_size = 1.337,
                name = '0',
                gcp_transfer_node_size = '0',
                aws_network_controller_size = '0',
                transfer_node_volume_size = 1.337,
                aws_gateway_size = '0',
                ocp_transfer_node_size = '0',
                aws_transfer_node_size = '0',
                id = '0',
                azure_transfer_node_size = '0',
                alicloud_transfer_node_size = '0',
                links = openapi_client.models.inline_response_200_2__embedded__links.inline_response_200_2__embedded__links(
                    self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), ),
        )

    def testInlineResponse20015EmbeddedNetworkConfigMetadataList(self):
        """Test InlineResponse20015EmbeddedNetworkConfigMetadataList"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()