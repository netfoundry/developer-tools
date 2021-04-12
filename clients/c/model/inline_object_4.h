/*
 * inline_object_4.h
 *
 * 
 */

#ifndef _inline_object_4_H_
#define _inline_object_4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_4_t inline_object_4_t;

#include "any_type.h"



typedef struct inline_object_4_t {
    list_t *service_attributes; //primitive container
    char *network_id; // string
    char *name; // string
    list_t *posture_check_attributes; //nonprimitive container
    list_t *endpoint_attributes; //primitive container

} inline_object_4_t;

inline_object_4_t *inline_object_4_create(
    list_t *service_attributes,
    char *network_id,
    char *name,
    list_t *posture_check_attributes,
    list_t *endpoint_attributes
);

void inline_object_4_free(inline_object_4_t *inline_object_4);

inline_object_4_t *inline_object_4_parseFromJSON(cJSON *inline_object_4JSON);

cJSON *inline_object_4_convertToJSON(inline_object_4_t *inline_object_4);

#endif /* _inline_object_4_H_ */

