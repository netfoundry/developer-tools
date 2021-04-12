/*
 * inline_response_500.h
 *
 * 
 */

#ifndef _inline_response_500_H_
#define _inline_response_500_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_500_t inline_response_500_t;




typedef struct inline_response_500_t {
    char *error; // string
    char *message; // string
    double status; //numeric
    char *timestamp; // string

} inline_response_500_t;

inline_response_500_t *inline_response_500_create(
    char *error,
    char *message,
    double status,
    char *timestamp
);

void inline_response_500_free(inline_response_500_t *inline_response_500);

inline_response_500_t *inline_response_500_parseFromJSON(cJSON *inline_response_500JSON);

cJSON *inline_response_500_convertToJSON(inline_response_500_t *inline_response_500);

#endif /* _inline_response_500_H_ */

