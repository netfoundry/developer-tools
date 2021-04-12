/*
 * inline_response_200_3__embedded_model_edge_router_hosts.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_edge_router_hosts_H_
#define _inline_response_200_3__embedded_model_edge_router_hosts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_edge_router_hosts_t inline_response_200_3__embedded_model_edge_router_hosts_t;

#include "inline_response_200_3__embedded_model_server_egress_1.h"



typedef struct inline_response_200_3__embedded_model_edge_router_hosts_t {
    char *edge_router_id; // string
    struct inline_response_200_3__embedded_model_server_egress_1_t *server_egress; //model

} inline_response_200_3__embedded_model_edge_router_hosts_t;

inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_create(
    char *edge_router_id,
    inline_response_200_3__embedded_model_server_egress_1_t *server_egress
);

void inline_response_200_3__embedded_model_edge_router_hosts_free(inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts);

inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts_parseFromJSON(cJSON *inline_response_200_3__embedded_model_edge_router_hostsJSON);

cJSON *inline_response_200_3__embedded_model_edge_router_hosts_convertToJSON(inline_response_200_3__embedded_model_edge_router_hosts_t *inline_response_200_3__embedded_model_edge_router_hosts);

#endif /* _inline_response_200_3__embedded_model_edge_router_hosts_H_ */

