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
from openapi_client.models.core_v2_services_model_edge_router_hosts import CoreV2ServicesModelEdgeRouterHosts  # noqa: E501
from openapi_client.rest import ApiException

class TestCoreV2ServicesModelEdgeRouterHosts(unittest.TestCase):
    """CoreV2ServicesModelEdgeRouterHosts unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test CoreV2ServicesModelEdgeRouterHosts
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.core_v2_services_model_edge_router_hosts.CoreV2ServicesModelEdgeRouterHosts()  # noqa: E501
        if include_optional :
            return CoreV2ServicesModelEdgeRouterHosts(
                edge_router_id = '0', 
                server_egress = openapi_client.models._core_v2_services_model_server_egress._core_v2_services_model_serverEgress(
                    host = '0', 
                    port = null, 
                    protocol = '0', )
            )
        else :
            return CoreV2ServicesModelEdgeRouterHosts(
                edge_router_id = '0',
                server_egress = openapi_client.models._core_v2_services_model_server_egress._core_v2_services_model_serverEgress(
                    host = '0', 
                    port = null, 
                    protocol = '0', ),
        )

    def testCoreV2ServicesModelEdgeRouterHosts(self):
        """Test CoreV2ServicesModelEdgeRouterHosts"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
