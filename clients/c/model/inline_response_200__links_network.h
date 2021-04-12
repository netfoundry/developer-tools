/*
 * inline_response_200__links_network.h
 *
 * 
 */

#ifndef _inline_response_200__links_network_H_
#define _inline_response_200__links_network_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200__links_network_t inline_response_200__links_network_t;




typedef struct inline_response_200__links_network_t {
    char *href; // string
    char *profile; // string

} inline_response_200__links_network_t;

inline_response_200__links_network_t *inline_response_200__links_network_create(
    char *href,
    char *profile
);

void inline_response_200__links_network_free(inline_response_200__links_network_t *inline_response_200__links_network);

inline_response_200__links_network_t *inline_response_200__links_network_parseFromJSON(cJSON *inline_response_200__links_networkJSON);

cJSON *inline_response_200__links_network_convertToJSON(inline_response_200__links_network_t *inline_response_200__links_network);

#endif /* _inline_response_200__links_network_H_ */

