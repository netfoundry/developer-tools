/*
 * inline_object_1.h
 *
 * 
 */

#ifndef _inline_object_1_H_
#define _inline_object_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_1_t inline_object_1_t;

#include "_core_v2_services_model.h"



typedef struct inline_object_1_t {
    char *network_id; // string
    char *name; // string
    struct _core_v2_services_model_t *model; //model
    list_t *attributes; //primitive container
    char *model_type; // string
    int encryption_required; //boolean

} inline_object_1_t;

inline_object_1_t *inline_object_1_create(
    char *network_id,
    char *name,
    _core_v2_services_model_t *model,
    list_t *attributes,
    char *model_type,
    int encryption_required
);

void inline_object_1_free(inline_object_1_t *inline_object_1);

inline_object_1_t *inline_object_1_parseFromJSON(cJSON *inline_object_1JSON);

cJSON *inline_object_1_convertToJSON(inline_object_1_t *inline_object_1);

#endif /* _inline_object_1_H_ */

