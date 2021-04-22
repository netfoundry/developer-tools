package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.InlineObject
import org.openapitools.model.InlineObject1
import org.openapitools.model.InlineObject2
import org.openapitools.model.InlineObject3
import org.openapitools.model.InlineObject4
import org.openapitools.model.InlineObject5
import org.openapitools.model.InlineObject6
import org.openapitools.model.InlineResponse200
import org.openapitools.model.InlineResponse2001
import org.openapitools.model.InlineResponse20010
import org.openapitools.model.InlineResponse20011
import org.openapitools.model.InlineResponse20012
import org.openapitools.model.InlineResponse20013
import org.openapitools.model.InlineResponse20014
import org.openapitools.model.InlineResponse20015
import org.openapitools.model.InlineResponse20016
import org.openapitools.model.InlineResponse20017
import org.openapitools.model.InlineResponse20018
import org.openapitools.model.InlineResponse20019
import org.openapitools.model.InlineResponse2002
import org.openapitools.model.InlineResponse2003
import org.openapitools.model.InlineResponse2004
import org.openapitools.model.InlineResponse2004EmbeddedEdgeRouterPolicyList
import org.openapitools.model.InlineResponse2005
import org.openapitools.model.InlineResponse2006
import org.openapitools.model.InlineResponse2007
import org.openapitools.model.InlineResponse2007EmbeddedEndpointList
import org.openapitools.model.InlineResponse2008
import org.openapitools.model.InlineResponse2009
import org.openapitools.model.InlineResponse202
import org.openapitools.model.InlineResponse2021
import org.openapitools.model.InlineResponse2022
import org.openapitools.model.InlineResponse2023
import org.openapitools.model.InlineResponse2024
import org.openapitools.model.InlineResponse2025
import org.openapitools.model.InlineResponse500
import org.openapitools.model.InlineResponse5001

class DefaultApi {
    String basePath = "http://localhost"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def request4Q1qU3c4dk ( String edgeRouterId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-routers/${edgeRouterId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (edgeRouterId == null) {
            throw new RuntimeException("missing required params edgeRouterId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20012.class )

    }

    def request9sDuPizCiu ( InlineObject5 inlineObject5, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/endpoints"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject5


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse2008.class )

    }

    def requestA8syyaPZnw ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/product-metadata/v2/download-urls.json"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20019.class )

    }

    def requestAYFhAQd5pn ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/endpoints"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2007.class )

    }

    def requestAuarCsIhkJ ( String edgeRouterId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-routers/${edgeRouterId}/registration-key"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (edgeRouterId == null) {
            throw new RuntimeException("missing required params edgeRouterId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse2009.class )

    }

    def requestBtgg9ZlC0e ( String edgeRouterPolicyId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-router-policies/${edgeRouterPolicyId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (edgeRouterPolicyId == null) {
            throw new RuntimeException("missing required params edgeRouterPolicyId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2004EmbeddedEdgeRouterPolicyList.class )

    }

    def requestE1IexRfvZg ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/services"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2003.class )

    }

    def requestFWlFMQIDPX ( InlineObject inlineObject, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/networks"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse202.class )

    }

    def requestGijVCEoMlM ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/app-wans"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2006.class )

    }

    def requestHp1b9GiLax ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-router-policies"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2004.class )

    }

    def requestIAJViYLviu ( String networkId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/networks/${networkId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (networkId == null) {
            throw new RuntimeException("missing required params networkId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "DELETE", "",
                    InlineResponse2024.class )

    }

    def requestK9ajDJ8vUS ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/rest/v1/network-groups"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20017.class )

    }

    def requestKkeR9gNy25 ( String appWanId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/app-wans/${appWanId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (appWanId == null) {
            throw new RuntimeException("missing required params appWanId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse200.class )

    }

    def requestLOXfQSs8GE ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/network-configs"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20015.class )

    }

    def requestLgKxU4ph9t ( InlineObject2 inlineObject2, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-router-policies"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject2


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse2004EmbeddedEdgeRouterPolicyList.class )

    }

    def requestLopoFtq4ih ( InlineObject1 inlineObject1, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/services"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject1


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse2021.class )

    }

    def requestMpyYtIiS6x ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/identity/v1/api-account-identities/self"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20016.class )

    }

    def requestN6GjgPLO4v ( String organizationId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/identity/v1/organizations/${organizationId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (organizationId == null) {
            throw new RuntimeException("missing required params organizationId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20014.class )

    }

    def requestNXoV6K2f0Q ( InlineObject4 inlineObject4, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/app-wans"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject4


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse200.class )

    }

    def requestOiIAfX2VUs ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/networks"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2001.class )

    }

    def requestPBaaiO3B0d ( String serviceId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/services/${serviceId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (serviceId == null) {
            throw new RuntimeException("missing required params serviceId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "DELETE", "",
                    InlineResponse2022.class )

    }

    def requestPyR6aUP5mi ( InlineObject6 inlineObject6, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-routers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType




        contentType = 'application/json';
        bodyParams = inlineObject6


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "POST", "",
                    InlineResponse2025.class )

    }

    def requestQ0b3cbDW8S ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/posture-checks"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20010.class )

    }

    def requestTeqMGeER5F ( String networkId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/networks/${networkId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (networkId == null) {
            throw new RuntimeException("missing required params networkId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20013.class )

    }

    def requestTsyuwlAejK ( String endpointId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/endpoints/${endpointId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (endpointId == null) {
            throw new RuntimeException("missing required params endpointId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2007EmbeddedEndpointList.class )

    }

    def requestVIzB1k6Uqb ( String serviceId, InlineObject3 inlineObject3, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/services/${serviceId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (serviceId == null) {
            throw new RuntimeException("missing required params serviceId")
        }



        contentType = 'application/json';
        bodyParams = inlineObject3


        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "PATCH", "",
                    InlineResponse2023.class )

    }

    def requestVeJCBUR9iO ( String networkGroupId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/rest/v1/network-groups/${networkGroupId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (networkGroupId == null) {
            throw new RuntimeException("missing required params networkGroupId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20011.class )

    }

    def requestVfuaDMeTRP ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/data-centers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2002.class )

    }

    def requestYLsf4m9TTT ( String serviceId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/services/${serviceId}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType

        // verify required params are set
        if (serviceId == null) {
            throw new RuntimeException("missing required params serviceId")
        }





        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse2005.class )

    }

    def requestYhzDAw1Ks4 ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/core/v2/edge-routers"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def contentType






        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, contentType,
                    "GET", "",
                    InlineResponse20018.class )

    }

}
