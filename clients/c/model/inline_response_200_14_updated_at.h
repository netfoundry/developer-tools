/*
 * inline_response_200_14_updated_at.h
 *
 * 
 */

#ifndef _inline_response_200_14_updated_at_H_
#define _inline_response_200_14_updated_at_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_14_updated_at_t inline_response_200_14_updated_at_t;




typedef struct inline_response_200_14_updated_at_t {
    double epoch_second; //numeric
    double nano; //numeric

} inline_response_200_14_updated_at_t;

inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_create(
    double epoch_second,
    double nano
);

void inline_response_200_14_updated_at_free(inline_response_200_14_updated_at_t *inline_response_200_14_updated_at);

inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_parseFromJSON(cJSON *inline_response_200_14_updated_atJSON);

cJSON *inline_response_200_14_updated_at_convertToJSON(inline_response_200_14_updated_at_t *inline_response_200_14_updated_at);

#endif /* _inline_response_200_14_updated_at_H_ */

