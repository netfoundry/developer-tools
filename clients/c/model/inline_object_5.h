/*
 * inline_object_5.h
 *
 * 
 */

#ifndef _inline_object_5_H_
#define _inline_object_5_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_5_t inline_object_5_t;

#include "_core_v2_endpoints_enrollment_method.h"



typedef struct inline_object_5_t {
    list_t *attributes; //primitive container
    struct _core_v2_endpoints_enrollment_method_t *enrollment_method; //model
    char *name; // string
    char *network_id; // string

} inline_object_5_t;

inline_object_5_t *inline_object_5_create(
    list_t *attributes,
    _core_v2_endpoints_enrollment_method_t *enrollment_method,
    char *name,
    char *network_id
);

void inline_object_5_free(inline_object_5_t *inline_object_5);

inline_object_5_t *inline_object_5_parseFromJSON(cJSON *inline_object_5JSON);

cJSON *inline_object_5_convertToJSON(inline_object_5_t *inline_object_5);

#endif /* _inline_object_5_H_ */

