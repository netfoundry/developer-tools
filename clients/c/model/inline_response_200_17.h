/*
 * inline_response_200_17.h
 *
 * 
 */

#ifndef _inline_response_200_17_H_
#define _inline_response_200_17_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_17_t inline_response_200_17_t;

#include "inline_response_200_17__embedded.h"
#include "inline_response_200_17__links.h"
#include "inline_response_200_1_page.h"



typedef struct inline_response_200_17_t {
    struct inline_response_200_17__embedded_t *_embedded; //model
    struct inline_response_200_17__links_t *_links; //model
    struct inline_response_200_1_page_t *page; //model

} inline_response_200_17_t;

inline_response_200_17_t *inline_response_200_17_create(
    inline_response_200_17__embedded_t *_embedded,
    inline_response_200_17__links_t *_links,
    inline_response_200_1_page_t *page
);

void inline_response_200_17_free(inline_response_200_17_t *inline_response_200_17);

inline_response_200_17_t *inline_response_200_17_parseFromJSON(cJSON *inline_response_200_17JSON);

cJSON *inline_response_200_17_convertToJSON(inline_response_200_17_t *inline_response_200_17);

#endif /* _inline_response_200_17_H_ */

