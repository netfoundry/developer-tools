/*
 * inline_response_200_3__embedded_model_client_ingress_ports.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_model_client_ingress_ports_H_
#define _inline_response_200_3__embedded_model_client_ingress_ports_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_model_client_ingress_ports_t inline_response_200_3__embedded_model_client_ingress_ports_t;




typedef struct inline_response_200_3__embedded_model_client_ingress_ports_t {
    double high; //numeric
    double low; //numeric

} inline_response_200_3__embedded_model_client_ingress_ports_t;

inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_create(
    double high,
    double low
);

void inline_response_200_3__embedded_model_client_ingress_ports_free(inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports);

inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports_parseFromJSON(cJSON *inline_response_200_3__embedded_model_client_ingress_portsJSON);

cJSON *inline_response_200_3__embedded_model_client_ingress_ports_convertToJSON(inline_response_200_3__embedded_model_client_ingress_ports_t *inline_response_200_3__embedded_model_client_ingress_ports);

#endif /* _inline_response_200_3__embedded_model_client_ingress_ports_H_ */

