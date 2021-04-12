/*
 * inline_response_200_1__links_self.h
 *
 * 
 */

#ifndef _inline_response_200_1__links_self_H_
#define _inline_response_200_1__links_self_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_1__links_self_t inline_response_200_1__links_self_t;




typedef struct inline_response_200_1__links_self_t {
    char *href; // string
    int templated; //boolean

} inline_response_200_1__links_self_t;

inline_response_200_1__links_self_t *inline_response_200_1__links_self_create(
    char *href,
    int templated
);

void inline_response_200_1__links_self_free(inline_response_200_1__links_self_t *inline_response_200_1__links_self);

inline_response_200_1__links_self_t *inline_response_200_1__links_self_parseFromJSON(cJSON *inline_response_200_1__links_selfJSON);

cJSON *inline_response_200_1__links_self_convertToJSON(inline_response_200_1__links_self_t *inline_response_200_1__links_self);

#endif /* _inline_response_200_1__links_self_H_ */

