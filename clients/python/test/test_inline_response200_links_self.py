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
from openapi_client.models.inline_response200_links_self import InlineResponse200LinksSelf  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse200LinksSelf(unittest.TestCase):
    """InlineResponse200LinksSelf unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse200LinksSelf
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response200_links_self.InlineResponse200LinksSelf()  # noqa: E501
        if include_optional :
            return InlineResponse200LinksSelf(
                href = '0'
            )
        else :
            return InlineResponse200LinksSelf(
                href = '0',
        )

    def testInlineResponse200LinksSelf(self):
        """Test InlineResponse200LinksSelf"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
