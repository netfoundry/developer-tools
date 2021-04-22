/*
 * inline_response_500_1_status.h
 *
 * 
 */

#ifndef _inline_response_500_1_status_H_
#define _inline_response_500_1_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_500_1_status_t inline_response_500_1_status_t;




typedef struct inline_response_500_1_status_t {
    double code; //numeric
    char *label; // string

} inline_response_500_1_status_t;

inline_response_500_1_status_t *inline_response_500_1_status_create(
    double code,
    char *label
);

void inline_response_500_1_status_free(inline_response_500_1_status_t *inline_response_500_1_status);

inline_response_500_1_status_t *inline_response_500_1_status_parseFromJSON(cJSON *inline_response_500_1_statusJSON);

cJSON *inline_response_500_1_status_convertToJSON(inline_response_500_1_status_t *inline_response_500_1_status);

#endif /* _inline_response_500_1_status_H_ */

