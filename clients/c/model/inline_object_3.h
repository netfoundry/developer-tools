/*
 * inline_object_3.h
 *
 * 
 */

#ifndef _inline_object_3_H_
#define _inline_object_3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_3_t inline_object_3_t;

#include "_core_v2_services__service_id__model.h"



typedef struct inline_object_3_t {
    struct _core_v2_services__service_id__model_t *model; //model
    char *model_type; // string
    char *name; // string

} inline_object_3_t;

inline_object_3_t *inline_object_3_create(
    _core_v2_services__service_id__model_t *model,
    char *model_type,
    char *name
);

void inline_object_3_free(inline_object_3_t *inline_object_3);

inline_object_3_t *inline_object_3_parseFromJSON(cJSON *inline_object_3JSON);

cJSON *inline_object_3_convertToJSON(inline_object_3_t *inline_object_3);

#endif /* _inline_object_3_H_ */

