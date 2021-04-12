/*
 * inline_response_200_3__embedded_model_server_egress_1.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_server_egress_1_H_
#define _inline_response_200_3__embedded_model_server_egress_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_server_egress_1_t inline_response_200_3__embedded_model_server_egress_1_t;




typedef struct inline_response_200_3__embedded_model_server_egress_1_t {
    char *host; // string
    double port; //numeric
    char *protocol; // string

} inline_response_200_3__embedded_model_server_egress_1_t;

inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_create(
    char *host,
    double port,
    char *protocol
);

void inline_response_200_3__embedded_model_server_egress_1_free(inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1);

inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1_parseFromJSON(cJSON *inline_response_200_3__embedded_model_server_egress_1JSON);

cJSON *inline_response_200_3__embedded_model_server_egress_1_convertToJSON(inline_response_200_3__embedded_model_server_egress_1_t *inline_response_200_3__embedded_model_server_egress_1);

#endif /* _inline_response_200_3__embedded_model_server_egress_1_H_ */

