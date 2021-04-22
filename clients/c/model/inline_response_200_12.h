/*
 * inline_response_200_12.h
 *
 * 
 */

#ifndef _inline_response_200_12_H_
#define _inline_response_200_12_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_12_t inline_response_200_12_t;

#include "any_type.h"
#include "inline_response_200__links.h"



typedef struct inline_response_200_12_t {
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    int online; //boolean
    char *ziti_id; // string
    char *owner_identity_id; // string
    list_t *attributes; //primitive container
    char *id; // string
    char *status; // string
    char *created_at; // string
    char *created_by; // string
    int link_listener; //boolean
    int verified; //boolean
    struct inline_response_200__links_t *_links; //model

} inline_response_200_12_t;

inline_response_200_12_t *inline_response_200_12_create(
    char *network_id,
    char *name,
    char *updated_at,
    int online,
    char *ziti_id,
    char *owner_identity_id,
    list_t *attributes,
    char *id,
    char *status,
    char *created_at,
    char *created_by,
    int link_listener,
    int verified,
    inline_response_200__links_t *_links
);

void inline_response_200_12_free(inline_response_200_12_t *inline_response_200_12);

inline_response_200_12_t *inline_response_200_12_parseFromJSON(cJSON *inline_response_200_12JSON);

cJSON *inline_response_200_12_convertToJSON(inline_response_200_12_t *inline_response_200_12);

#endif /* _inline_response_200_12_H_ */

