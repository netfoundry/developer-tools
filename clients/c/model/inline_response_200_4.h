/*
 * inline_response_200_4.h
 *
 * 
 */

#ifndef _inline_response_200_4_H_
#define _inline_response_200_4_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_4_t inline_response_200_4_t;

#include "inline_response_200_1_page.h"
#include "inline_response_200_2__embedded__links.h"
#include "inline_response_200_4__embedded.h"



typedef struct inline_response_200_4_t {
    struct inline_response_200_4__embedded_t *_embedded; //model
    struct inline_response_200_2__embedded__links_t *_links; //model
    struct inline_response_200_1_page_t *page; //model

} inline_response_200_4_t;

inline_response_200_4_t *inline_response_200_4_create(
    inline_response_200_4__embedded_t *_embedded,
    inline_response_200_2__embedded__links_t *_links,
    inline_response_200_1_page_t *page
);

void inline_response_200_4_free(inline_response_200_4_t *inline_response_200_4);

inline_response_200_4_t *inline_response_200_4_parseFromJSON(cJSON *inline_response_200_4JSON);

cJSON *inline_response_200_4_convertToJSON(inline_response_200_4_t *inline_response_200_4);

#endif /* _inline_response_200_4_H_ */

