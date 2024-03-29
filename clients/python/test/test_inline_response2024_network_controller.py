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
from openapi_client.models.inline_response2024_network_controller import InlineResponse2024NetworkController  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse2024NetworkController(unittest.TestCase):
    """InlineResponse2024NetworkController unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse2024NetworkController
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response2024_network_controller.InlineResponse2024NetworkController()  # noqa: E501
        if include_optional :
            return InlineResponse2024NetworkController(
                deleted_at = null, 
                network_id = '0', 
                name = '0', 
                updated_at = '0', 
                provider = '0', 
                user_data = null, 
                owner_identity_id = null, 
                domain_name = '0', 
                provider_id = '0', 
                id = '0', 
                port = 1.337, 
                ip_address = '0', 
                status = '0', 
                host_id = '0', 
                created_at = '0', 
                deleted_by = null, 
                location_metadata_id = '0', 
                data_center_id = '0'
            )
        else :
            return InlineResponse2024NetworkController(
                deleted_at = null,
                network_id = '0',
                name = '0',
                updated_at = '0',
                provider = '0',
                user_data = null,
                owner_identity_id = null,
                domain_name = '0',
                provider_id = '0',
                id = '0',
                port = 1.337,
                ip_address = '0',
                status = '0',
                host_id = '0',
                created_at = '0',
                deleted_by = null,
                location_metadata_id = '0',
                data_center_id = '0',
        )

    def testInlineResponse2024NetworkController(self):
        """Test InlineResponse2024NetworkController"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
