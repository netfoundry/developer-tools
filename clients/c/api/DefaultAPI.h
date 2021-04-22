#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/inline_object.h"
#include "../model/inline_object_1.h"
#include "../model/inline_object_2.h"
#include "../model/inline_object_3.h"
#include "../model/inline_object_4.h"
#include "../model/inline_object_5.h"
#include "../model/inline_object_6.h"
#include "../model/inline_response_200.h"
#include "../model/inline_response_200_1.h"
#include "../model/inline_response_200_10.h"
#include "../model/inline_response_200_11.h"
#include "../model/inline_response_200_12.h"
#include "../model/inline_response_200_13.h"
#include "../model/inline_response_200_14.h"
#include "../model/inline_response_200_15.h"
#include "../model/inline_response_200_16.h"
#include "../model/inline_response_200_17.h"
#include "../model/inline_response_200_18.h"
#include "../model/inline_response_200_19.h"
#include "../model/inline_response_200_2.h"
#include "../model/inline_response_200_3.h"
#include "../model/inline_response_200_4.h"
#include "../model/inline_response_200_4__embedded_edge_router_policy_list.h"
#include "../model/inline_response_200_5.h"
#include "../model/inline_response_200_6.h"
#include "../model/inline_response_200_7.h"
#include "../model/inline_response_200_7__embedded_endpoint_list.h"
#include "../model/inline_response_200_8.h"
#include "../model/inline_response_200_9.h"
#include "../model/inline_response_202.h"
#include "../model/inline_response_202_1.h"
#include "../model/inline_response_202_2.h"
#include "../model/inline_response_202_3.h"
#include "../model/inline_response_202_4.h"
#include "../model/inline_response_202_5.h"
#include "../model/inline_response_500.h"
#include "../model/inline_response_500_1.h"


// Get an Edge Router
//
inline_response_200_12_t*
DefaultAPI_request4Q1qU3c4dk(apiClient_t *apiClient, char * edgeRouterId );


// Create an Endpoint
//
inline_response_200_8_t*
DefaultAPI_request9sDuPizCiu(apiClient_t *apiClient, inline_object_5_t * inline_object_5 );


// Get the list of Network product versions
//
inline_response_200_19_t*
DefaultAPI_requestA8syyaPZnw(apiClient_t *apiClient);


// Get an Endpoint
//
inline_response_200_7_t*
DefaultAPI_requestAYFhAQd5pn(apiClient_t *apiClient);


// Get the registration information for an Edge Router
//
inline_response_200_9_t*
DefaultAPI_requestAuarCsIhkJ(apiClient_t *apiClient, char * edgeRouterId );


// Get an Edge Router Policy
//
inline_response_200_4__embedded_edge_router_policy_list_t*
DefaultAPI_requestBtgg9ZlC0e(apiClient_t *apiClient, char * edgeRouterPolicyId );


// Get the list of Services
//
inline_response_200_3_t*
DefaultAPI_requestE1IexRfvZg(apiClient_t *apiClient);


// Create a Network
//
inline_response_202_t*
DefaultAPI_requestFWlFMQIDPX(apiClient_t *apiClient, inline_object_t * inline_object );


// Get the list of AppWANs
//
inline_response_200_6_t*
DefaultAPI_requestGijVCEoMlM(apiClient_t *apiClient);


// Get an Edge Router Policy
//
inline_response_200_4_t*
DefaultAPI_requestHp1b9GiLax(apiClient_t *apiClient);


// Delete a Network
//
inline_response_202_4_t*
DefaultAPI_requestIAJViYLviu(apiClient_t *apiClient, char * networkId );


// Get the list of Network Groups
//
inline_response_200_17_t*
DefaultAPI_requestK9ajDJ8vUS(apiClient_t *apiClient);


// Get an AppWAN
//
inline_response_200_t*
DefaultAPI_requestKkeR9gNy25(apiClient_t *apiClient, char * appWanId );


// Get a Network Configuration profile
//
// e.g. small, medium, large
//
inline_response_200_15_t*
DefaultAPI_requestLOXfQSs8GE(apiClient_t *apiClient);


// Create an Edge Router Policy
//
inline_response_200_4__embedded_edge_router_policy_list_t*
DefaultAPI_requestLgKxU4ph9t(apiClient_t *apiClient, inline_object_2_t * inline_object_2 );


// Create a Service
//
inline_response_202_1_t*
DefaultAPI_requestLopoFtq4ih(apiClient_t *apiClient, inline_object_1_t * inline_object_1 );


// Get the identity of the caller's API account
//
inline_response_200_16_t*
DefaultAPI_requestMpyYtIiS6x(apiClient_t *apiClient);


// Get an Organization
//
inline_response_200_14_t*
DefaultAPI_requestN6GjgPLO4v(apiClient_t *apiClient, char * organizationId );


// Create an AppWAN
//
inline_response_200_t*
DefaultAPI_requestNXoV6K2f0Q(apiClient_t *apiClient, inline_object_4_t * inline_object_4 );


// Get the list of Networks
//
inline_response_200_1_t*
DefaultAPI_requestOiIAfX2VUs(apiClient_t *apiClient);


// Delete a Service
//
inline_response_202_2_t*
DefaultAPI_requestPBaaiO3B0d(apiClient_t *apiClient, char * serviceId );


// Create an Edge Router
//
inline_response_202_5_t*
DefaultAPI_requestPyR6aUP5mi(apiClient_t *apiClient, inline_object_6_t * inline_object_6 );


// Get the list of Posture Checks
//
inline_response_200_10_t*
DefaultAPI_requestQ0b3cbDW8S(apiClient_t *apiClient);


// Get a Network
//
inline_response_200_13_t*
DefaultAPI_requestTeqMGeER5F(apiClient_t *apiClient, char * networkId );


// Get an Endpoint
//
inline_response_200_7__embedded_endpoint_list_t*
DefaultAPI_requestTsyuwlAejK(apiClient_t *apiClient, char * endpointId );


// Change some properties of a Service
//
inline_response_202_3_t*
DefaultAPI_requestVIzB1k6Uqb(apiClient_t *apiClient, char * serviceId , inline_object_3_t * inline_object_3 );


// Get a Network Group
//
inline_response_200_11_t*
DefaultAPI_requestVeJCBUR9iO(apiClient_t *apiClient, char * networkGroupId );


// Get the list of data centers
//
inline_response_200_2_t*
DefaultAPI_requestVfuaDMeTRP(apiClient_t *apiClient);


// Get a Service
//
inline_response_200_5_t*
DefaultAPI_requestYLsf4m9TTT(apiClient_t *apiClient, char * serviceId );


// Get an Edge Router
//
inline_response_200_18_t*
DefaultAPI_requestYhzDAw1Ks4(apiClient_t *apiClient);


