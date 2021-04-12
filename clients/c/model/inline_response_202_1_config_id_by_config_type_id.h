/*
 * inline_response_202_1_config_id_by_config_type_id.h
 *
 * 
 */

#ifndef _inline_response_202_1_config_id_by_config_type_id_H_
#define _inline_response_202_1_config_id_by_config_type_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_202_1_config_id_by_config_type_id_t inline_response_202_1_config_id_by_config_type_id_t;




typedef struct inline_response_202_1_config_id_by_config_type_id_t {
    char *_6fa5c2bc_b7f7_47f8_9229_e927722adb27; // string
    char *b1582680_ab7b_45d0_ac36_b00f82df8e79; // string

} inline_response_202_1_config_id_by_config_type_id_t;

inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_create(
    char *_6fa5c2bc_b7f7_47f8_9229_e927722adb27,
    char *b1582680_ab7b_45d0_ac36_b00f82df8e79
);

void inline_response_202_1_config_id_by_config_type_id_free(inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id);

inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_1_config_id_by_config_type_idJSON);

cJSON *inline_response_202_1_config_id_by_config_type_id_convertToJSON(inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id);

#endif /* _inline_response_202_1_config_id_by_config_type_id_H_ */

