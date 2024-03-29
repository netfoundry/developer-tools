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
from openapi_client.models.inline_response2004 import InlineResponse2004  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse2004(unittest.TestCase):
    """InlineResponse2004 unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse2004
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response2004.InlineResponse2004()  # noqa: E501
        if include_optional :
            return InlineResponse2004(
                embedded = openapi_client.models.inline_response_200_4__embedded.inline_response_200_4__embedded(
                    edge_router_policy_list = [
                        openapi_client.models.inline_response_200_4__embedded_edge_router_policy_list.inline_response_200_4__embedded_edgeRouterPolicyList(
                            deleted_at = null, 
                            network_id = '0', 
                            name = '0', 
                            edge_router_attributes = [
                                '0'
                                ], 
                            updated_at = '0', 
                            ziti_id = '0', 
                            owner_identity_id = '0', 
                            id = '0', 
                            created_at = '0', 
                            created_by = '0', 
                            deleted_by = null, 
                            endpoint_attributes = [
                                '0'
                                ], 
                            _links = openapi_client.models.inline_response_200__links.inline_response_200__links(
                                network = openapi_client.models.inline_response_200__links_network.inline_response_200__links_network(
                                    href = '0', 
                                    profile = '0', ), 
                                self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), ), )
                        ], ), 
                links = openapi_client.models.inline_response_200_2__embedded__links.inline_response_200_2__embedded__links(
                    self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), ), 
                page = openapi_client.models.inline_response_200_1_page.inline_response_200_1_page(
                    number = 1.337, 
                    size = 1.337, 
                    total_elements = 1.337, 
                    total_pages = 1.337, )
            )
        else :
            return InlineResponse2004(
                links = openapi_client.models.inline_response_200_2__embedded__links.inline_response_200_2__embedded__links(
                    self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), ),
                page = openapi_client.models.inline_response_200_1_page.inline_response_200_1_page(
                    number = 1.337, 
                    size = 1.337, 
                    total_elements = 1.337, 
                    total_pages = 1.337, ),
        )

    def testInlineResponse2004(self):
        """Test InlineResponse2004"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
