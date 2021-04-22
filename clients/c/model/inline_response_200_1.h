/*
 * inline_response_200_1.h
 *
 * 
 */

#ifndef _inline_response_200_1_H_
#define _inline_response_200_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_1_t inline_response_200_1_t;

#include "inline_response_200_1__embedded.h"
#include "inline_response_200_1__links.h"
#include "inline_response_200_1_page.h"



typedef struct inline_response_200_1_t {
    struct inline_response_200_1__embedded_t *_embedded; //model
    struct inline_response_200_1__links_t *_links; //model
    struct inline_response_200_1_page_t *page; //model

} inline_response_200_1_t;

inline_response_200_1_t *inline_response_200_1_create(
    inline_response_200_1__embedded_t *_embedded,
    inline_response_200_1__links_t *_links,
    inline_response_200_1_page_t *page
);

void inline_response_200_1_free(inline_response_200_1_t *inline_response_200_1);

inline_response_200_1_t *inline_response_200_1_parseFromJSON(cJSON *inline_response_200_1JSON);

cJSON *inline_response_200_1_convertToJSON(inline_response_200_1_t *inline_response_200_1);

#endif /* _inline_response_200_1_H_ */

