/*
 * inline_response_200.h
 *
 * 
 */

#ifndef _inline_response_200_H_
#define _inline_response_200_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_t inline_response_200_t;

#include "any_type.h"
#include "inline_response_200__links.h"



typedef struct inline_response_200_t {
    list_t *service_attributes; //primitive container
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    list_t *posture_check_attributes; //nonprimitive container
    char *ziti_id; // string
    char *owner_identity_id; // string
    char *id; // string
    char *created_at; // string
    char *created_by; // string
    list_t *endpoint_attributes; //primitive container
    struct inline_response_200__links_t *_links; //model

} inline_response_200_t;

inline_response_200_t *inline_response_200_create(
    list_t *service_attributes,
    char *network_id,
    char *name,
    char *updated_at,
    list_t *posture_check_attributes,
    char *ziti_id,
    char *owner_identity_id,
    char *id,
    char *created_at,
    char *created_by,
    list_t *endpoint_attributes,
    inline_response_200__links_t *_links
);

void inline_response_200_free(inline_response_200_t *inline_response_200);

inline_response_200_t *inline_response_200_parseFromJSON(cJSON *inline_response_200JSON);

cJSON *inline_response_200_convertToJSON(inline_response_200_t *inline_response_200);

#endif /* _inline_response_200_H_ */

