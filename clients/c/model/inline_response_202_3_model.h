/*
 * inline_response_202_3_model.h
 *
 * 
 */

#ifndef _inline_response_202_3_model_H_
#define _inline_response_202_3_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_3_model_t inline_response_202_3_model_t;

#include "_core_v2_services__service_id__model_server_egress.h"
#include "inline_response_202_3_model_client_ingress.h"



typedef struct inline_response_202_3_model_t {
    list_t *bind_endpoint_attributes; //primitive container
    struct inline_response_202_3_model_client_ingress_t *client_ingress; //model
    list_t *edge_router_attributes; //primitive container
    struct _core_v2_services__service_id__model_server_egress_t *server_egress; //model

} inline_response_202_3_model_t;

inline_response_202_3_model_t *inline_response_202_3_model_create(
    list_t *bind_endpoint_attributes,
    inline_response_202_3_model_client_ingress_t *client_ingress,
    list_t *edge_router_attributes,
    _core_v2_services__service_id__model_server_egress_t *server_egress
);

void inline_response_202_3_model_free(inline_response_202_3_model_t *inline_response_202_3_model);

inline_response_202_3_model_t *inline_response_202_3_model_parseFromJSON(cJSON *inline_response_202_3_modelJSON);

cJSON *inline_response_202_3_model_convertToJSON(inline_response_202_3_model_t *inline_response_202_3_model);

#endif /* _inline_response_202_3_model_H_ */

