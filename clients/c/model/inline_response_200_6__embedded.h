/*
 * inline_response_200_6__embedded.h
 *
 * 
 */

#ifndef _inline_response_200_6__embedded_H_
#define _inline_response_200_6__embedded_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_6__embedded_t inline_response_200_6__embedded_t;

#include "inline_response_200.h"



typedef struct inline_response_200_6__embedded_t {
    list_t *app_wan_list; //nonprimitive container

} inline_response_200_6__embedded_t;

inline_response_200_6__embedded_t *inline_response_200_6__embedded_create(
    list_t *app_wan_list
);

void inline_response_200_6__embedded_free(inline_response_200_6__embedded_t *inline_response_200_6__embedded);

inline_response_200_6__embedded_t *inline_response_200_6__embedded_parseFromJSON(cJSON *inline_response_200_6__embeddedJSON);

cJSON *inline_response_200_6__embedded_convertToJSON(inline_response_200_6__embedded_t *inline_response_200_6__embedded);

#endif /* _inline_response_200_6__embedded_H_ */

