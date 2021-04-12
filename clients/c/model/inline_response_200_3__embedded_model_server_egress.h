/*
 * inline_response_200_3__embedded_model_server_egress.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_server_egress_H_
#define _inline_response_200_3__embedded_model_server_egress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_server_egress_t inline_response_200_3__embedded_model_server_egress_t;

#include "any_type.h"



typedef struct inline_response_200_3__embedded_model_server_egress_t {
    char *host; // string
    double port; //numeric
    int dial_intercept_protocol; //boolean
    char *address; // string

} inline_response_200_3__embedded_model_server_egress_t;

inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_create(
    char *host,
    double port,
    int dial_intercept_protocol,
    char *address,
);

void inline_response_200_3__embedded_model_server_egress_free(inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress);

inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress_parseFromJSON(cJSON *inline_response_200_3__embedded_model_server_egressJSON);

cJSON *inline_response_200_3__embedded_model_server_egress_convertToJSON(inline_response_200_3__embedded_model_server_egress_t *inline_response_200_3__embedded_model_server_egress);

#endif /* _inline_response_200_3__embedded_model_server_egress_H_ */

