/*
 * _core_v2_services_model_server_egress.h
 *
 * 
 */

#ifndef __core_v2_services_model_server_egress_H_
#define __core_v2_services_model_server_egress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_services_model_server_egress_t _core_v2_services_model_server_egress_t;

#include "any_type.h"



typedef struct _core_v2_services_model_server_egress_t {
    char *host; // string
    char *protocol; // string

} _core_v2_services_model_server_egress_t;

_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_create(
    char *host,
    char *protocol
);

void _core_v2_services_model_server_egress_free(_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress);

_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_parseFromJSON(cJSON *_core_v2_services_model_server_egressJSON);

cJSON *_core_v2_services_model_server_egress_convertToJSON(_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress);

#endif /* __core_v2_services_model_server_egress_H_ */

