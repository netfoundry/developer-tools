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
from openapi_client.models.inline_response2001_links import InlineResponse2001Links  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse2001Links(unittest.TestCase):
    """InlineResponse2001Links unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse2001Links
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response2001_links.InlineResponse2001Links()  # noqa: E501
        if include_optional :
            return InlineResponse2001Links(
                _self = openapi_client.models.inline_response_200_1__links_self.inline_response_200_1__links_self(
                    href = '0', 
                    templated = True, )
            )
        else :
            return InlineResponse2001Links(
                _self = openapi_client.models.inline_response_200_1__links_self.inline_response_200_1__links_self(
                    href = '0', 
                    templated = True, ),
        )

    def testInlineResponse2001Links(self):
        """Test InlineResponse2001Links"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
