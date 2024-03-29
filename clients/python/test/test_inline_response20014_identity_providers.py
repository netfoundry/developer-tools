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
from openapi_client.models.inline_response20014_identity_providers import InlineResponse20014IdentityProviders  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse20014IdentityProviders(unittest.TestCase):
    """InlineResponse20014IdentityProviders unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse20014IdentityProviders
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response20014_identity_providers.InlineResponse20014IdentityProviders()  # noqa: E501
        if include_optional :
            return InlineResponse20014IdentityProviders(
                deleted_at = null, 
                name = '0', 
                updated_at = null, 
                auth0_connection_type = '0', 
                auth0_connection_id = '0', 
                id = '0', 
                created_at = openapi_client.models.inline_response_200_14_updated_at.inline_response_200_14_updatedAt(
                    epoch_second = 1.337, 
                    nano = 1.337, ), 
                organization_id = '0', 
                active = True
            )
        else :
            return InlineResponse20014IdentityProviders(
                deleted_at = null,
                name = '0',
                updated_at = null,
                auth0_connection_type = '0',
                auth0_connection_id = '0',
                id = '0',
                created_at = openapi_client.models.inline_response_200_14_updated_at.inline_response_200_14_updatedAt(
                    epoch_second = 1.337, 
                    nano = 1.337, ),
                organization_id = '0',
                active = True,
        )

    def testInlineResponse20014IdentityProviders(self):
        """Test InlineResponse20014IdentityProviders"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
