/*
 * inline_response_200_17__links.h
 *
 * 
 */

#ifndef _inline_response_200_17__links_H_
#define _inline_response_200_17__links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_17__links_t inline_response_200_17__links_t;

#include "inline_response_200__links_self.h"



typedef struct inline_response_200_17__links_t {
    struct inline_response_200__links_self_t *first; //model
    struct inline_response_200__links_self_t *last; //model

} inline_response_200_17__links_t;

inline_response_200_17__links_t *inline_response_200_17__links_create(
    inline_response_200__links_self_t *first,
    inline_response_200__links_self_t *last
);

void inline_response_200_17__links_free(inline_response_200_17__links_t *inline_response_200_17__links);

inline_response_200_17__links_t *inline_response_200_17__links_parseFromJSON(cJSON *inline_response_200_17__linksJSON);

cJSON *inline_response_200_17__links_convertToJSON(inline_response_200_17__links_t *inline_response_200_17__links);

#endif /* _inline_response_200_17__links_H_ */

