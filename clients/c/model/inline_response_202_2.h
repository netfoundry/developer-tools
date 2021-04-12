/*
 * inline_response_202_2.h
 *
 * 
 */

#ifndef _inline_response_202_2_H_
#define _inline_response_202_2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_2_t inline_response_202_2_t;

#include "any_type.h"
#include "inline_response_202_1__links.h"
#include "inline_response_202_2_config_id_by_config_type_id.h"



typedef struct inline_response_202_2_t {
    char *deleted_at; // string
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    char *owner_identity_id; // string
    char *model_type; // string
    char *id; // string
    struct inline_response_202_2_config_id_by_config_type_id_t *config_id_by_config_type_id; //model
    char *created_at; // string
    char *created_by; // string
    char *deleted_by; // string
    int encryption_required; //boolean
    struct inline_response_202_1__links_t *_links; //model

} inline_response_202_2_t;

inline_response_202_2_t *inline_response_202_2_create(
    char *deleted_at,
    char *network_id,
    char *name,
    char *updated_at,
    char *owner_identity_id,
    char *model_type,
    char *id,
    inline_response_202_2_config_id_by_config_type_id_t *config_id_by_config_type_id,
    char *created_at,
    char *created_by,
    char *deleted_by,
    int encryption_required,
    inline_response_202_1__links_t *_links
);

void inline_response_202_2_free(inline_response_202_2_t *inline_response_202_2);

inline_response_202_2_t *inline_response_202_2_parseFromJSON(cJSON *inline_response_202_2JSON);

cJSON *inline_response_202_2_convertToJSON(inline_response_202_2_t *inline_response_202_2);

#endif /* _inline_response_202_2_H_ */

