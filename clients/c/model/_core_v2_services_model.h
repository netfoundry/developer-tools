/*
 * _core_v2_services_model.h
 *
 * 
 */

#ifndef __core_v2_services_model_H_
#define __core_v2_services_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services_model_t _core_v2_services_model_t;

#include "_core_v2_services_model_client_ingress.h"
#include "_core_v2_services_model_edge_router_hosts.h"
#include "inline_response_200_3__embedded_model_server_egress.h"



typedef struct _core_v2_services_model_t {
    list_t *edge_router_attributes; //primitive container
    struct inline_response_200_3__embedded_model_server_egress_t *server_egress; //model
    list_t *bind_endpoint_attributes; //primitive container
    struct _core_v2_services_model_client_ingress_t *client_ingress; //model
    list_t *edge_router_hosts; //nonprimitive container

} _core_v2_services_model_t;

_core_v2_services_model_t *_core_v2_services_model_create(
    list_t *edge_router_attributes,
    inline_response_200_3__embedded_model_server_egress_t *server_egress,
    list_t *bind_endpoint_attributes,
    _core_v2_services_model_client_ingress_t *client_ingress,
    list_t *edge_router_hosts
);

void _core_v2_services_model_free(_core_v2_services_model_t *_core_v2_services_model);

_core_v2_services_model_t *_core_v2_services_model_parseFromJSON(cJSON *_core_v2_services_modelJSON);

cJSON *_core_v2_services_model_convertToJSON(_core_v2_services_model_t *_core_v2_services_model);

#endif /* __core_v2_services_model_H_ */

