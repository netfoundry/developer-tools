/*
 * inline_response_200_13.h
 *
 * 
 */

#ifndef _inline_response_200_13_H_
#define _inline_response_200_13_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_13_t inline_response_200_13_t;

#include "any_type.h"
#include "inline_response_200_1__embedded__links.h"



typedef struct inline_response_200_13_t {
    char *name; // string
    char *updated_at; // string
    char *size; // string
    char *location_code; // string
    char *owner_identity_id; // string
    char *product_version; // string
    char *network_group_id; // string
    char *id; // string
    char *status; // string
    char *sds_password; // string
    char *created_at; // string
    char *created_by; // string
    char *o365_breakout_category; // string
    struct inline_response_200_1__embedded__links_t *_links; //model

} inline_response_200_13_t;

inline_response_200_13_t *inline_response_200_13_create(
    char *name,
    char *updated_at,
    char *size,
    char *location_code,
    char *owner_identity_id,
    char *product_version,
    char *network_group_id,
    char *id,
    char *status,
    char *sds_password,
    char *created_at,
    char *created_by,
    char *o365_breakout_category,
    inline_response_200_1__embedded__links_t *_links
);

void inline_response_200_13_free(inline_response_200_13_t *inline_response_200_13);

inline_response_200_13_t *inline_response_200_13_parseFromJSON(cJSON *inline_response_200_13JSON);

cJSON *inline_response_200_13_convertToJSON(inline_response_200_13_t *inline_response_200_13);

#endif /* _inline_response_200_13_H_ */

