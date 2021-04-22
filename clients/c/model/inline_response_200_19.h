/*
 * inline_response_200_19.h
 *
 * 
 */

#ifndef _inline_response_200_19_H_
#define _inline_response_200_19_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_19_t inline_response_200_19_t;

#include "inline_response_200_19_7_1_0.h"
#include "inline_response_200_19_7_3_16.h"
#include "inline_response_200_19_7_3_4.h"



typedef struct inline_response_200_19_t {
    struct inline_response_200_19_7_3_4_t *_7_3_4; //model
    struct inline_response_200_19_7_3_4_t *_7_3_11; //model
    struct inline_response_200_19_7_3_16_t *_7_3_16; //model
    struct inline_response_200_19_7_1_0_t *_7_1_0; //model
    struct inline_response_200_19_7_3_16_t *_7_3_22; //model
    struct inline_response_200_19_7_3_16_t *_7_3_23; //model
    struct inline_response_200_19_7_3_4_t *_7_3_8; //model
    struct inline_response_200_19_7_3_4_t *_7_3_12; //model
    struct inline_response_200_19_7_1_0_t *_7_2_1; //model
    struct inline_response_200_19_7_3_4_t *_7_3_13; //model
    struct inline_response_200_19_7_1_0_t *_7_0_0; //model
    struct inline_response_200_19_7_3_16_t *_7_3_17; //model
    struct inline_response_200_19_7_3_4_t *_7_3_5; //model
    struct inline_response_200_19_7_3_16_t *_7_3_20; //model
    struct inline_response_200_19_7_1_0_t *_7_3_2; //model
    struct inline_response_200_19_7_3_4_t *_7_3_9; //model
    struct inline_response_200_19_7_3_16_t *_7_3_24; //model
    struct inline_response_200_19_7_1_0_t *_7_2_0; //model
    struct inline_response_200_19_7_1_0_t *_7_3_0; //model
    struct inline_response_200_19_7_3_16_t *_7_3_14; //model
    struct inline_response_200_19_7_3_4_t *_7_3_6; //model
    struct inline_response_200_19_7_1_0_t *_7_3_1; //model
    struct inline_response_200_19_7_3_16_t *_7_3_19; //model
    struct inline_response_200_19_7_3_16_t *_7_3_15; //model
    struct inline_response_200_19_7_3_4_t *_7_3_10; //model
    struct inline_response_200_19_7_3_4_t *_7_3_7; //model
    struct inline_response_200_19_7_3_16_t *_7_3_21; //model
    struct inline_response_200_19_7_1_0_t *_7_3_3; //model
    struct inline_response_200_19_7_3_16_t *_7_3_18; //model

} inline_response_200_19_t;

inline_response_200_19_t *inline_response_200_19_create(
    inline_response_200_19_7_3_4_t *_7_3_4,
    inline_response_200_19_7_3_4_t *_7_3_11,
    inline_response_200_19_7_3_16_t *_7_3_16,
    inline_response_200_19_7_1_0_t *_7_1_0,
    inline_response_200_19_7_3_16_t *_7_3_22,
    inline_response_200_19_7_3_16_t *_7_3_23,
    inline_response_200_19_7_3_4_t *_7_3_8,
    inline_response_200_19_7_3_4_t *_7_3_12,
    inline_response_200_19_7_1_0_t *_7_2_1,
    inline_response_200_19_7_3_4_t *_7_3_13,
    inline_response_200_19_7_1_0_t *_7_0_0,
    inline_response_200_19_7_3_16_t *_7_3_17,
    inline_response_200_19_7_3_4_t *_7_3_5,
    inline_response_200_19_7_3_16_t *_7_3_20,
    inline_response_200_19_7_1_0_t *_7_3_2,
    inline_response_200_19_7_3_4_t *_7_3_9,
    inline_response_200_19_7_3_16_t *_7_3_24,
    inline_response_200_19_7_1_0_t *_7_2_0,
    inline_response_200_19_7_1_0_t *_7_3_0,
    inline_response_200_19_7_3_16_t *_7_3_14,
    inline_response_200_19_7_3_4_t *_7_3_6,
    inline_response_200_19_7_1_0_t *_7_3_1,
    inline_response_200_19_7_3_16_t *_7_3_19,
    inline_response_200_19_7_3_16_t *_7_3_15,
    inline_response_200_19_7_3_4_t *_7_3_10,
    inline_response_200_19_7_3_4_t *_7_3_7,
    inline_response_200_19_7_3_16_t *_7_3_21,
    inline_response_200_19_7_1_0_t *_7_3_3,
    inline_response_200_19_7_3_16_t *_7_3_18
);

void inline_response_200_19_free(inline_response_200_19_t *inline_response_200_19);

inline_response_200_19_t *inline_response_200_19_parseFromJSON(cJSON *inline_response_200_19JSON);

cJSON *inline_response_200_19_convertToJSON(inline_response_200_19_t *inline_response_200_19);

#endif /* _inline_response_200_19_H_ */

