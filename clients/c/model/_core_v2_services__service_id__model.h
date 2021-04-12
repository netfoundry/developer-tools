/*
 * _core_v2_services__service_id__model.h
 *
 * 
 */

#ifndef __core_v2_services__service_id__model_H_
#define __core_v2_services__service_id__model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services__service_id__model_t _core_v2_services__service_id__model_t;

#include "_core_v2_services__service_id__model_client_ingress.h"
#include "_core_v2_services__service_id__model_server_egress.h"



typedef struct _core_v2_services__service_id__model_t {
    list_t *bind_endpoint_attributes; //primitive container
    struct _core_v2_services__service_id__model_client_ingress_t *client_ingress; //model
    list_t *edge_router_attributes; //primitive container
    struct _core_v2_services__service_id__model_server_egress_t *server_egress; //model

} _core_v2_services__service_id__model_t;

_core_v2_services__service_id__model_t *_core_v2_services__service_id__model_create(
    list_t *bind_endpoint_attributes,
    _core_v2_services__service_id__model_client_ingress_t *client_ingress,
    list_t *edge_router_attributes,
    _core_v2_services__service_id__model_server_egress_t *server_egress
);

void _core_v2_services__service_id__model_free(_core_v2_services__service_id__model_t *_core_v2_services__service_id__model);

_core_v2_services__service_id__model_t *_core_v2_services__service_id__model_parseFromJSON(cJSON *_core_v2_services__service_id__modelJSON);

cJSON *_core_v2_services__service_id__model_convertToJSON(_core_v2_services__service_id__model_t *_core_v2_services__service_id__model);

#endif /* __core_v2_services__service_id__model_H_ */

