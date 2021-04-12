/*
 * inline_response_200_7__embedded.h
 *
 * 
 */

#ifndef _inline_response_200_7__embedded_H_
#define _inline_response_200_7__embedded_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_7__embedded_t inline_response_200_7__embedded_t;

#include "inline_response_200_7__embedded_endpoint_list.h"



typedef struct inline_response_200_7__embedded_t {
    list_t *endpoint_list; //nonprimitive container

} inline_response_200_7__embedded_t;

inline_response_200_7__embedded_t *inline_response_200_7__embedded_create(
    list_t *endpoint_list
);

void inline_response_200_7__embedded_free(inline_response_200_7__embedded_t *inline_response_200_7__embedded);

inline_response_200_7__embedded_t *inline_response_200_7__embedded_parseFromJSON(cJSON *inline_response_200_7__embeddedJSON);

cJSON *inline_response_200_7__embedded_convertToJSON(inline_response_200_7__embedded_t *inline_response_200_7__embedded);

#endif /* _inline_response_200_7__embedded_H_ */

