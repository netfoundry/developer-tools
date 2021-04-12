/*
 * _core_v2_services_model_client_ingress_ports.h
 *
 * 
 */

#ifndef __core_v2_services_model_client_ingress_ports_H_
#define __core_v2_services_model_client_ingress_ports_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services_model_client_ingress_ports_t _core_v2_services_model_client_ingress_ports_t;




typedef struct _core_v2_services_model_client_ingress_ports_t {
    char *high; // string
    char *low; // string

} _core_v2_services_model_client_ingress_ports_t;

_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_create(
    char *high,
    char *low
);

void _core_v2_services_model_client_ingress_ports_free(_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports);

_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_parseFromJSON(cJSON *_core_v2_services_model_client_ingress_portsJSON);

cJSON *_core_v2_services_model_client_ingress_ports_convertToJSON(_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports);

#endif /* __core_v2_services_model_client_ingress_ports_H_ */

