/*
 * inline_response_200__links.h
 *
 * 
 */

#ifndef _inline_response_200__links_H_
#define _inline_response_200__links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200__links_t inline_response_200__links_t;

#include "inline_response_200__links_network.h"
#include "inline_response_200__links_self.h"



typedef struct inline_response_200__links_t {
    struct inline_response_200__links_network_t *network; //model
    struct inline_response_200__links_self_t *self; //model

} inline_response_200__links_t;

inline_response_200__links_t *inline_response_200__links_create(
    inline_response_200__links_network_t *network,
    inline_response_200__links_self_t *self
);

void inline_response_200__links_free(inline_response_200__links_t *inline_response_200__links);

inline_response_200__links_t *inline_response_200__links_parseFromJSON(cJSON *inline_response_200__linksJSON);

cJSON *inline_response_200__links_convertToJSON(inline_response_200__links_t *inline_response_200__links);

#endif /* _inline_response_200__links_H_ */

