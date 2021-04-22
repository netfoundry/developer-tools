/*
 * inline_response_200_2__embedded__links.h
 *
 * 
 */

#ifndef _inline_response_200_2__embedded__links_H_
#define _inline_response_200_2__embedded__links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_2__embedded__links_t inline_response_200_2__embedded__links_t;

#include "inline_response_200__links_self.h"



typedef struct inline_response_200_2__embedded__links_t {
    struct inline_response_200__links_self_t *self; //model

} inline_response_200_2__embedded__links_t;

inline_response_200_2__embedded__links_t *inline_response_200_2__embedded__links_create(
    inline_response_200__links_self_t *self
);

void inline_response_200_2__embedded__links_free(inline_response_200_2__embedded__links_t *inline_response_200_2__embedded__links);

inline_response_200_2__embedded__links_t *inline_response_200_2__embedded__links_parseFromJSON(cJSON *inline_response_200_2__embedded__linksJSON);

cJSON *inline_response_200_2__embedded__links_convertToJSON(inline_response_200_2__embedded__links_t *inline_response_200_2__embedded__links);

#endif /* _inline_response_200_2__embedded__links_H_ */

