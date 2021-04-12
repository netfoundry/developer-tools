/*
 * _core_v2_services_model_edge_router_hosts.h
 *
 * 
 */

#ifndef __core_v2_services_model_edge_router_hosts_H_
#define __core_v2_services_model_edge_router_hosts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services_model_edge_router_hosts_t _core_v2_services_model_edge_router_hosts_t;

#include "_core_v2_services_model_server_egress.h"



typedef struct _core_v2_services_model_edge_router_hosts_t {
    char *edge_router_id; // string
    struct _core_v2_services_model_server_egress_t *server_egress; //model

} _core_v2_services_model_edge_router_hosts_t;

_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_create(
    char *edge_router_id,
    _core_v2_services_model_server_egress_t *server_egress
);

void _core_v2_services_model_edge_router_hosts_free(_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts);

_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts_parseFromJSON(cJSON *_core_v2_services_model_edge_router_hostsJSON);

cJSON *_core_v2_services_model_edge_router_hosts_convertToJSON(_core_v2_services_model_edge_router_hosts_t *_core_v2_services_model_edge_router_hosts);

#endif /* __core_v2_services_model_edge_router_hosts_H_ */

