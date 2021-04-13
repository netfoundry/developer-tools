/*
 * inline_response_202_3_config_id_by_config_type_id.h
 *
 * 
 */

#ifndef _inline_response_202_3_config_id_by_config_type_id_H_
#define _inline_response_202_3_config_id_by_config_type_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_3_config_id_by_config_type_id_t inline_response_202_3_config_id_by_config_type_id_t;




typedef struct inline_response_202_3_config_id_by_config_type_id_t {
    char *d75e27f0_ebab_4567_8440_c24f02f2eca5; // string
    char *cf3962b1_a98e_4ade_ae25_cdc388e7feb3; // string
    char *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc; // string
    char *_714a918a_7935_4b4f_82c3_afbadcd9e59b; // string
    char *_64a39300_b672_413b_9d8c_42175f7e84dd; // string
    char *ea6e632b_d8e1_420f_bd8f_ad50b067bad6; // string

} inline_response_202_3_config_id_by_config_type_id_t;

inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_create(
    char *d75e27f0_ebab_4567_8440_c24f02f2eca5,
    char *cf3962b1_a98e_4ade_ae25_cdc388e7feb3,
    char *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc,
    char *_714a918a_7935_4b4f_82c3_afbadcd9e59b,
    char *_64a39300_b672_413b_9d8c_42175f7e84dd,
    char *ea6e632b_d8e1_420f_bd8f_ad50b067bad6
);

void inline_response_202_3_config_id_by_config_type_id_free(inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id);

inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_3_config_id_by_config_type_idJSON);

cJSON *inline_response_202_3_config_id_by_config_type_id_convertToJSON(inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id);

#endif /* _inline_response_202_3_config_id_by_config_type_id_H_ */

