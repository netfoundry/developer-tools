/*
 * inline_object_2.h
 *
 * 
 */

#ifndef _inline_object_2_H_
#define _inline_object_2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_2_t inline_object_2_t;




typedef struct inline_object_2_t {
    list_t *edge_router_attributes; //primitive container
    list_t *endpoint_attributes; //primitive container
    char *name; // string
    char *network_id; // string

} inline_object_2_t;

inline_object_2_t *inline_object_2_create(
    list_t *edge_router_attributes,
    list_t *endpoint_attributes,
    char *name,
    char *network_id
);

void inline_object_2_free(inline_object_2_t *inline_object_2);

inline_object_2_t *inline_object_2_parseFromJSON(cJSON *inline_object_2JSON);

cJSON *inline_object_2_convertToJSON(inline_object_2_t *inline_object_2);

#endif /* _inline_object_2_H_ */

