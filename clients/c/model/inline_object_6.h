/*
 * inline_object_6.h
 *
 * 
 */

#ifndef _inline_object_6_H_
#define _inline_object_6_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_object_6_t inline_object_6_t;




typedef struct inline_object_6_t {
    char *network_id; // string
    char *name; // string
    list_t *attributes; //primitive container
    int link_listener; //boolean
    char *data_center_id; // string

} inline_object_6_t;

inline_object_6_t *inline_object_6_create(
    char *network_id,
    char *name,
    list_t *attributes,
    int link_listener,
    char *data_center_id
);

void inline_object_6_free(inline_object_6_t *inline_object_6);

inline_object_6_t *inline_object_6_parseFromJSON(cJSON *inline_object_6JSON);

cJSON *inline_object_6_convertToJSON(inline_object_6_t *inline_object_6);

#endif /* _inline_object_6_H_ */

