/*
 * inline_response_200_3__embedded_model.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_H_
#define _inline_response_200_3__embedded_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_t inline_response_200_3__embedded_model_t;

#include "inline_response_200_3__embedded_model_client_ingress.h"
#include "inline_response_200_3__embedded_model_edge_router_hosts.h"
#include "inline_response_200_3__embedded_model_server_egress.h"



typedef struct inline_response_200_3__embedded_model_t {
    list_t *edge_router_attributes; //primitive container
    struct inline_response_200_3__embedded_model_server_egress_t *server_egress; //model
    list_t *bind_endpoint_attributes; //primitive container
    struct inline_response_200_3__embedded_model_client_ingress_t *client_ingress; //model
    list_t *edge_router_hosts; //nonprimitive container

} inline_response_200_3__embedded_model_t;

inline_response_200_3__embedded_model_t *inline_response_200_3__embedded_model_create(
    list_t *edge_router_attributes,
    inline_response_200_3__embedded_model_server_egress_t *server_egress,
    list_t *bind_endpoint_attributes,
    inline_response_200_3__embedded_model_client_ingress_t *client_ingress,
    list_t *edge_router_hosts
);

void inline_response_200_3__embedded_model_free(inline_response_200_3__embedded_model_t *inline_response_200_3__embedded_model);

inline_response_200_3__embedded_model_t *inline_response_200_3__embedded_model_parseFromJSON(cJSON *inline_response_200_3__embedded_modelJSON);

cJSON *inline_response_200_3__embedded_model_convertToJSON(inline_response_200_3__embedded_model_t *inline_response_200_3__embedded_model);

#endif /* _inline_response_200_3__embedded_model_H_ */

