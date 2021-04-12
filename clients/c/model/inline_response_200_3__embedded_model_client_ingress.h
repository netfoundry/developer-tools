/*
 * inline_response_200_3__embedded_model_client_ingress.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_client_ingress_H_
#define _inline_response_200_3__embedded_model_client_ingress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_client_ingress_t inline_response_200_3__embedded_model_client_ingress_t;

#include "inline_response_200_3__embedded_model_client_ingress_ports.h"



typedef struct inline_response_200_3__embedded_model_client_ingress_t {
    list_t *protocols; //primitive container
    char *host; // string
    list_t *ports; //nonprimitive container
    double port; //numeric
    list_t *addresses; //primitive container

} inline_response_200_3__embedded_model_client_ingress_t;

inline_response_200_3__embedded_model_client_ingress_t *inline_response_200_3__embedded_model_client_ingress_create(
    list_t *protocols,
    char *host,
    list_t *ports,
    double port,
    list_t *addresses
);

void inline_response_200_3__embedded_model_client_ingress_free(inline_response_200_3__embedded_model_client_ingress_t *inline_response_200_3__embedded_model_client_ingress);

inline_response_200_3__embedded_model_client_ingress_t *inline_response_200_3__embedded_model_client_ingress_parseFromJSON(cJSON *inline_response_200_3__embedded_model_client_ingressJSON);

cJSON *inline_response_200_3__embedded_model_client_ingress_convertToJSON(inline_response_200_3__embedded_model_client_ingress_t *inline_response_200_3__embedded_model_client_ingress);

#endif /* _inline_response_200_3__embedded_model_client_ingress_H_ */

