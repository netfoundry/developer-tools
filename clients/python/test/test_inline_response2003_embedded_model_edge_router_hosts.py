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
from openapi_client.models.inline_response2003_embedded_model_edge_router_hosts import InlineResponse2003EmbeddedModelEdgeRouterHosts  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse2003EmbeddedModelEdgeRouterHosts(unittest.TestCase):
    """InlineResponse2003EmbeddedModelEdgeRouterHosts unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse2003EmbeddedModelEdgeRouterHosts
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response2003_embedded_model_edge_router_hosts.InlineResponse2003EmbeddedModelEdgeRouterHosts()  # noqa: E501
        if include_optional :
            return InlineResponse2003EmbeddedModelEdgeRouterHosts(
                edge_router_id = '0', 
                server_egress = openapi_client.models.inline_response_200_3__embedded_model_server_egress_1.inline_response_200_3__embedded_model_serverEgress_1(
                    host = '0', 
                    port = 1.337, 
                    protocol = '0', )
            )
        else :
            return InlineResponse2003EmbeddedModelEdgeRouterHosts(
                edge_router_id = '0',
                server_egress = openapi_client.models.inline_response_200_3__embedded_model_server_egress_1.inline_response_200_3__embedded_model_serverEgress_1(
                    host = '0', 
                    port = 1.337, 
                    protocol = '0', ),
        )

    def testInlineResponse2003EmbeddedModelEdgeRouterHosts(self):
        """Test InlineResponse2003EmbeddedModelEdgeRouterHosts"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
