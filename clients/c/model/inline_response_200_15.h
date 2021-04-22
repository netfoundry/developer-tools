/*
 * inline_response_200_15.h
 *
 * 
 */

#ifndef _inline_response_200_15_H_
#define _inline_response_200_15_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_15_t inline_response_200_15_t;

#include "inline_response_200_15__embedded.h"
#include "inline_response_200_1_page.h"
#include "inline_response_200_2__embedded__links.h"



typedef struct inline_response_200_15_t {
    struct inline_response_200_15__embedded_t *_embedded; //model
    struct inline_response_200_2__embedded__links_t *_links; //model
    struct inline_response_200_1_page_t *page; //model

} inline_response_200_15_t;

inline_response_200_15_t *inline_response_200_15_create(
    inline_response_200_15__embedded_t *_embedded,
    inline_response_200_2__embedded__links_t *_links,
    inline_response_200_1_page_t *page
);

void inline_response_200_15_free(inline_response_200_15_t *inline_response_200_15);

inline_response_200_15_t *inline_response_200_15_parseFromJSON(cJSON *inline_response_200_15JSON);

cJSON *inline_response_200_15_convertToJSON(inline_response_200_15_t *inline_response_200_15);

#endif /* _inline_response_200_15_H_ */

