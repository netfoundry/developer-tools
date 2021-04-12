/*
 * inline_response_200_7__embedded_endpoint_list.h
 *
 * 
 */

#ifndef _inline_response_200_7__embedded_endpoint_list_H_
#define _inline_response_200_7__embedded_endpoint_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_7__embedded_endpoint_list_t inline_response_200_7__embedded_endpoint_list_t;

#include "any_type.h"
#include "inline_response_200__links.h"



typedef struct inline_response_200_7__embedded_endpoint_list_t {
    int mfa_enabled; //boolean
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    char *ziti_id; // string
    char *owner_identity_id; // string
    int has_edge_router_connection; //boolean
    list_t *attributes; //primitive container
    int has_api_session; //boolean
    char *id; // string
    int session_active; //boolean
    char *created_at; // string
    char *created_by; // string
    struct inline_response_200__links_t *_links; //model

} inline_response_200_7__embedded_endpoint_list_t;

inline_response_200_7__embedded_endpoint_list_t *inline_response_200_7__embedded_endpoint_list_create(
    int mfa_enabled,
    char *network_id,
    char *name,
    char *updated_at,
    char *ziti_id,
    char *owner_identity_id,
    int has_edge_router_connection,
    list_t *attributes,
    int has_api_session,
    char *id,
    int session_active,
    char *created_at,
    char *created_by,
    inline_response_200__links_t *_links
);

void inline_response_200_7__embedded_endpoint_list_free(inline_response_200_7__embedded_endpoint_list_t *inline_response_200_7__embedded_endpoint_list);

inline_response_200_7__embedded_endpoint_list_t *inline_response_200_7__embedded_endpoint_list_parseFromJSON(cJSON *inline_response_200_7__embedded_endpoint_listJSON);

cJSON *inline_response_200_7__embedded_endpoint_list_convertToJSON(inline_response_200_7__embedded_endpoint_list_t *inline_response_200_7__embedded_endpoint_list);

#endif /* _inline_response_200_7__embedded_endpoint_list_H_ */

