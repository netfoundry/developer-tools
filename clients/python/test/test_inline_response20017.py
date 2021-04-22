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
from openapi_client.models.inline_response20017 import InlineResponse20017  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse20017(unittest.TestCase):
    """InlineResponse20017 unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse20017
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response20017.InlineResponse20017()  # noqa: E501
        if include_optional :
            return InlineResponse20017(
                embedded = openapi_client.models.inline_response_200_17__embedded.inline_response_200_17__embedded(
                    organizations = [
                        openapi_client.models.inline_response_200_17__embedded_organizations.inline_response_200_17__embedded_organizations(
                            organization_short_name = '0', 
                            name = '0', 
                            updated_at = '0', 
                            ziti_enabled = True, 
                            default_azure_virtual_wan_id = null, 
                            owner_identity_id = null, 
                            billing_account_id = '0', 
                            id = '0', 
                            aws_auto_scaling_gateway_enabled = True, 
                            created_at = '0', 
                            mfa_required = True, 
                            deleted = True, 
                            _links = openapi_client.models.inline_response_200_11__links.inline_response_200_11__links(
                                azure_subscription = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), 
                                networks = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), 
                                self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), ), )
                        ], ), 
                links = openapi_client.models.inline_response_200_17__links.inline_response_200_17__links(
                    first = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), 
                    last = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), ), 
                page = openapi_client.models.inline_response_200_1_page.inline_response_200_1_page(
                    number = 1.337, 
                    size = 1.337, 
                    total_elements = 1.337, 
                    total_pages = 1.337, )
            )
        else :
            return InlineResponse20017(
                embedded = openapi_client.models.inline_response_200_17__embedded.inline_response_200_17__embedded(
                    organizations = [
                        openapi_client.models.inline_response_200_17__embedded_organizations.inline_response_200_17__embedded_organizations(
                            organization_short_name = '0', 
                            name = '0', 
                            updated_at = '0', 
                            ziti_enabled = True, 
                            default_azure_virtual_wan_id = null, 
                            owner_identity_id = null, 
                            billing_account_id = '0', 
                            id = '0', 
                            aws_auto_scaling_gateway_enabled = True, 
                            created_at = '0', 
                            mfa_required = True, 
                            deleted = True, 
                            _links = openapi_client.models.inline_response_200_11__links.inline_response_200_11__links(
                                azure_subscription = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), 
                                networks = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), 
                                self = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                                    href = '0', ), ), )
                        ], ),
                links = openapi_client.models.inline_response_200_17__links.inline_response_200_17__links(
                    first = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), 
                    last = openapi_client.models.inline_response_200__links_self.inline_response_200__links_self(
                        href = '0', ), ),
                page = openapi_client.models.inline_response_200_1_page.inline_response_200_1_page(
                    number = 1.337, 
                    size = 1.337, 
                    total_elements = 1.337, 
                    total_pages = 1.337, ),
        )

    def testInlineResponse20017(self):
        """Test InlineResponse20017"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
