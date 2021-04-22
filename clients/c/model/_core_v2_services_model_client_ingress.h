/*
 * _core_v2_services_model_client_ingress.h
 *
 * 
 */

#ifndef __core_v2_services_model_client_ingress_H_
#define __core_v2_services_model_client_ingress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services_model_client_ingress_t _core_v2_services_model_client_ingress_t;

#include "_core_v2_services_model_client_ingress_ports.h"
#include "any_type.h"



typedef struct _core_v2_services_model_client_ingress_t {
    list_t *protocols; //primitive container
    char *host; // string
    list_t *ports; //nonprimitive container
    list_t *addresses; //primitive container

} _core_v2_services_model_client_ingress_t;

_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_create(
    list_t *protocols,
    char *host,
    list_t *ports,
    list_t *addresses
);

void _core_v2_services_model_client_ingress_free(_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress);

_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_parseFromJSON(cJSON *_core_v2_services_model_client_ingressJSON);

cJSON *_core_v2_services_model_client_ingress_convertToJSON(_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress);

#endif /* __core_v2_services_model_client_ingress_H_ */

