/*
 * inline_response_202_4_network_controller.h
 *
 * 
 */

#ifndef _inline_response_202_4_network_controller_H_
#define _inline_response_202_4_network_controller_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_4_network_controller_t inline_response_202_4_network_controller_t;

#include "any_type.h"



typedef struct inline_response_202_4_network_controller_t {
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    char *provider; // string
    char *domain_name; // string
    char *provider_id; // string
    char *id; // string
    double port; //numeric
    char *ip_address; // string
    char *status; // string
    char *host_id; // string
    char *created_at; // string
    char *location_metadata_id; // string
    char *data_center_id; // string

} inline_response_202_4_network_controller_t;

inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_create(
    char *network_id,
    char *name,
    char *updated_at,
    char *provider,
    char *domain_name,
    char *provider_id,
    char *id,
    double port,
    char *ip_address,
    char *status,
    char *host_id,
    char *created_at,
    char *location_metadata_id,
    char *data_center_id
);

void inline_response_202_4_network_controller_free(inline_response_202_4_network_controller_t *inline_response_202_4_network_controller);

inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_parseFromJSON(cJSON *inline_response_202_4_network_controllerJSON);

cJSON *inline_response_202_4_network_controller_convertToJSON(inline_response_202_4_network_controller_t *inline_response_202_4_network_controller);

#endif /* _inline_response_202_4_network_controller_H_ */

