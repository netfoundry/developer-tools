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
from openapi_client.models.core_v2_endpoints_enrollment_method import CoreV2EndpointsEnrollmentMethod  # noqa: E501
from openapi_client.rest import ApiException

class TestCoreV2EndpointsEnrollmentMethod(unittest.TestCase):
    """CoreV2EndpointsEnrollmentMethod unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test CoreV2EndpointsEnrollmentMethod
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.core_v2_endpoints_enrollment_method.CoreV2EndpointsEnrollmentMethod()  # noqa: E501
        if include_optional :
            return CoreV2EndpointsEnrollmentMethod(
                ott = True
            )
        else :
            return CoreV2EndpointsEnrollmentMethod(
                ott = True,
        )

    def testCoreV2EndpointsEnrollmentMethod(self):
        """Test CoreV2EndpointsEnrollmentMethod"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
