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
from openapi_client.models.inline_response5001_status import InlineResponse5001Status  # noqa: E501
from openapi_client.rest import ApiException

class TestInlineResponse5001Status(unittest.TestCase):
    """InlineResponse5001Status unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test InlineResponse5001Status
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.inline_response5001_status.InlineResponse5001Status()  # noqa: E501
        if include_optional :
            return InlineResponse5001Status(
                code = 1.337, 
                label = '0'
            )
        else :
            return InlineResponse5001Status(
                code = 1.337,
                label = '0',
        )

    def testInlineResponse5001Status(self):
        """Test InlineResponse5001Status"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
