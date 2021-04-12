/*
 * inline_response_200_10.h
 *
 * 
 */

#ifndef _inline_response_200_10_H_
#define _inline_response_200_10_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_10_t inline_response_200_10_t;

#include "inline_response_200_1_page.h"
#include "inline_response_200_2__embedded__links.h"



typedef struct inline_response_200_10_t {
    struct inline_response_200_2__embedded__links_t *_links; //model
    struct inline_response_200_1_page_t *page; //model

} inline_response_200_10_t;

inline_response_200_10_t *inline_response_200_10_create(
    inline_response_200_2__embedded__links_t *_links,
    inline_response_200_1_page_t *page
);

void inline_response_200_10_free(inline_response_200_10_t *inline_response_200_10);

inline_response_200_10_t *inline_response_200_10_parseFromJSON(cJSON *inline_response_200_10JSON);

cJSON *inline_response_200_10_convertToJSON(inline_response_200_10_t *inline_response_200_10);

#endif /* _inline_response_200_10_H_ */

