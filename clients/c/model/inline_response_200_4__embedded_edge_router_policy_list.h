/*
 * inline_response_200_4__embedded_edge_router_policy_list.h
 *
 * 
 */

#ifndef _inline_response_200_4__embedded_edge_router_policy_list_H_
#define _inline_response_200_4__embedded_edge_router_policy_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_4__embedded_edge_router_policy_list_t inline_response_200_4__embedded_edge_router_policy_list_t;

#include "any_type.h"
#include "inline_response_200__links.h"



typedef struct inline_response_200_4__embedded_edge_router_policy_list_t {
    char *network_id; // string
    char *name; // string
    list_t *edge_router_attributes; //primitive container
    char *updated_at; // string
    char *ziti_id; // string
    char *owner_identity_id; // string
    char *id; // string
    char *created_at; // string
    char *created_by; // string
    list_t *endpoint_attributes; //primitive container
    struct inline_response_200__links_t *_links; //model

} inline_response_200_4__embedded_edge_router_policy_list_t;

inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_create(
    char *network_id,
    char *name,
    list_t *edge_router_attributes,
    char *updated_at,
    char *ziti_id,
    char *owner_identity_id,
    char *id,
    char *created_at,
    char *created_by,
    list_t *endpoint_attributes,
    inline_response_200__links_t *_links
);

void inline_response_200_4__embedded_edge_router_policy_list_free(inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list);

inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_parseFromJSON(cJSON *inline_response_200_4__embedded_edge_router_policy_listJSON);

cJSON *inline_response_200_4__embedded_edge_router_policy_list_convertToJSON(inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list);

#endif /* _inline_response_200_4__embedded_edge_router_policy_list_H_ */

