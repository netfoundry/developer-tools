/*
 * inline_response_202_1.h
 *
 * 
 */

#ifndef _inline_response_202_1_H_
#define _inline_response_202_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_1_t inline_response_202_1_t;

#include "any_type.h"
#include "inline_response_200_3__embedded_model.h"
#include "inline_response_202_1__links.h"
#include "inline_response_202_1_config_id_by_config_type_id.h"



typedef struct inline_response_202_1_t {
    char *network_id; // string
    char *name; // string
    char *updated_at; // string
    struct inline_response_200_3__embedded_model_t *model; //model
    char *owner_identity_id; // string
    list_t *attributes; //primitive container
    char *model_type; // string
    char *id; // string
    struct inline_response_202_1_config_id_by_config_type_id_t *config_id_by_config_type_id; //model
    char *created_at; // string
    char *created_by; // string
    int encryption_required; //boolean
    struct inline_response_202_1__links_t *_links; //model

} inline_response_202_1_t;

inline_response_202_1_t *inline_response_202_1_create(
    char *network_id,
    char *name,
    char *updated_at,
    inline_response_200_3__embedded_model_t *model,
    char *owner_identity_id,
    list_t *attributes,
    char *model_type,
    char *id,
    inline_response_202_1_config_id_by_config_type_id_t *config_id_by_config_type_id,
    char *created_at,
    char *created_by,
    int encryption_required,
    inline_response_202_1__links_t *_links
);

void inline_response_202_1_free(inline_response_202_1_t *inline_response_202_1);

inline_response_202_1_t *inline_response_202_1_parseFromJSON(cJSON *inline_response_202_1JSON);

cJSON *inline_response_202_1_convertToJSON(inline_response_202_1_t *inline_response_202_1);

#endif /* _inline_response_202_1_H_ */

