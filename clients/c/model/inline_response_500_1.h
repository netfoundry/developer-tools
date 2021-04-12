/*
 * inline_response_500_1.h
 *
 * 
 */

#ifndef _inline_response_500_1_H_
#define _inline_response_500_1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_500_1_t inline_response_500_1_t;

#include "inline_response_500_1_status.h"



typedef struct inline_response_500_1_t {
    list_t *errors; //primitive container
    struct inline_response_500_1_status_t *status; //model
    char *trace_id; // string

} inline_response_500_1_t;

inline_response_500_1_t *inline_response_500_1_create(
    list_t *errors,
    inline_response_500_1_status_t *status,
    char *trace_id
);

void inline_response_500_1_free(inline_response_500_1_t *inline_response_500_1);

inline_response_500_1_t *inline_response_500_1_parseFromJSON(cJSON *inline_response_500_1JSON);

cJSON *inline_response_500_1_convertToJSON(inline_response_500_1_t *inline_response_500_1);

#endif /* _inline_response_500_1_H_ */

