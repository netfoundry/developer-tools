/*
 * inline_response_202_2_config_id_by_config_type_id.h
 *
 * 
 */

#ifndef _inline_response_202_2_config_id_by_config_type_id_H_
#define _inline_response_202_2_config_id_by_config_type_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_2_config_id_by_config_type_id_t inline_response_202_2_config_id_by_config_type_id_t;




typedef struct inline_response_202_2_config_id_by_config_type_id_t {
    char *aca7f705_9f00_4ff6_8b86_63a4d44bde8a; // string
    char *_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f; // string
    char *d28725c0_9771_47d7_a9da_e408bd0adf4e; // string
    char *_888d6565_4359_4d91_b38d_0a24124e4456; // string
    char *feb075cd_dd2b_47c5_922c_86ef3b06fb16; // string

} inline_response_202_2_config_id_by_config_type_id_t;

inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_create(
    char *aca7f705_9f00_4ff6_8b86_63a4d44bde8a,
    char *_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f,
    char *d28725c0_9771_47d7_a9da_e408bd0adf4e,
    char *_888d6565_4359_4d91_b38d_0a24124e4456,
    char *feb075cd_dd2b_47c5_922c_86ef3b06fb16
);

void inline_response_202_2_config_id_by_config_type_id_free(inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id);

inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_2_config_id_by_config_type_idJSON);

cJSON *inline_response_202_2_config_id_by_config_type_id_convertToJSON(inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id);

#endif /* _inline_response_202_2_config_id_by_config_type_id_H_ */

