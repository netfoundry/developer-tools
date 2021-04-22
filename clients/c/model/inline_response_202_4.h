/*
 * inline_response_202_4.h
 *
 * 
 */

#ifndef _inline_response_202_4_H_
#define _inline_response_202_4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_4_t inline_response_202_4_t;

#include "any_type.h"
#include "inline_response_202_4__links.h"
#include "inline_response_202_4_network_controller.h"



typedef struct inline_response_202_4_t {
    char *name; // string
    char *updated_at; // string
    char *size; // string
    char *owner_identity_id; // string
    char *product_version; // string
    char *network_group_id; // string
    char *id; // string
    char *status; // string
    char *created_at; // string
    char *created_by; // string
    struct inline_response_202_4_network_controller_t *network_controller; //model
    char *o365_breakout_category; // string
    struct inline_response_202_4__links_t *_links; //model

} inline_response_202_4_t;

inline_response_202_4_t *inline_response_202_4_create(
    char *name,
    char *updated_at,
    char *size,
    char *owner_identity_id,
    char *product_version,
    char *network_group_id,
    char *id,
    char *status,
    char *created_at,
    char *created_by,
    inline_response_202_4_network_controller_t *network_controller,
    char *o365_breakout_category,
    inline_response_202_4__links_t *_links
);

void inline_response_202_4_free(inline_response_202_4_t *inline_response_202_4);

inline_response_202_4_t *inline_response_202_4_parseFromJSON(cJSON *inline_response_202_4JSON);

cJSON *inline_response_202_4_convertToJSON(inline_response_202_4_t *inline_response_202_4);

#endif /* _inline_response_202_4_H_ */

