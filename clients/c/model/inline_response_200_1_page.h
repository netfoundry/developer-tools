/*
 * inline_response_200_1_page.h
 *
 * 
 */

#ifndef _inline_response_200_1_page_H_
#define _inline_response_200_1_page_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_1_page_t inline_response_200_1_page_t;




typedef struct inline_response_200_1_page_t {
    double number; //numeric
    double size; //numeric
    double total_elements; //numeric
    double total_pages; //numeric

} inline_response_200_1_page_t;

inline_response_200_1_page_t *inline_response_200_1_page_create(
    double number,
    double size,
    double total_elements,
    double total_pages
);

void inline_response_200_1_page_free(inline_response_200_1_page_t *inline_response_200_1_page);

inline_response_200_1_page_t *inline_response_200_1_page_parseFromJSON(cJSON *inline_response_200_1_pageJSON);

cJSON *inline_response_200_1_page_convertToJSON(inline_response_200_1_page_t *inline_response_200_1_page);

#endif /* _inline_response_200_1_page_H_ */

