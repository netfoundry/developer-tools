/*
 * inline_response_200_17__embedded.h
 *
 * 
 */

#ifndef _inline_response_200_17__embedded_H_
#define _inline_response_200_17__embedded_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_17__embedded_t inline_response_200_17__embedded_t;

#include "inline_response_200_17__embedded_organizations.h"



typedef struct inline_response_200_17__embedded_t {
    list_t *organizations; //nonprimitive container

} inline_response_200_17__embedded_t;

inline_response_200_17__embedded_t *inline_response_200_17__embedded_create(
    list_t *organizations
);

void inline_response_200_17__embedded_free(inline_response_200_17__embedded_t *inline_response_200_17__embedded);

inline_response_200_17__embedded_t *inline_response_200_17__embedded_parseFromJSON(cJSON *inline_response_200_17__embeddedJSON);

cJSON *inline_response_200_17__embedded_convertToJSON(inline_response_200_17__embedded_t *inline_response_200_17__embedded);

#endif /* _inline_response_200_17__embedded_H_ */

