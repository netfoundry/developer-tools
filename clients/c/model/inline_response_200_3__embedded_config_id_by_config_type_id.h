/*
 * inline_response_200_3__embedded_config_id_by_config_type_id.h
 *
 * 
 */

#ifndef _inline_response_200_3__embedded_config_id_by_config_type_id_H_
#define _inline_response_200_3__embedded_config_id_by_config_type_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inline_response_200_3__embedded_config_id_by_config_type_id_t inline_response_200_3__embedded_config_id_by_config_type_id_t;




typedef struct inline_response_200_3__embedded_config_id_by_config_type_id_t {
    char *d75e27f0_ebab_4567_8440_c24f02f2eca5; // string
    char *_2c1998a1_32e2_4084_b20a_b580570f4fbf; // string
    char *_4c42c4db_f039_4a57_8264_5f57af512614; // string
    char *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc; // string
    char *_714a918a_7935_4b4f_82c3_afbadcd9e59b; // string
    char *b1582680_ab7b_45d0_ac36_b00f82df8e79; // string
    char *_6fa5c2bc_b7f7_47f8_9229_e927722adb27; // string
    char *_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc; // string
    char *ea6e632b_d8e1_420f_bd8f_ad50b067bad6; // string

} inline_response_200_3__embedded_config_id_by_config_type_id_t;

inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id_create(
    char *d75e27f0_ebab_4567_8440_c24f02f2eca5,
    char *_2c1998a1_32e2_4084_b20a_b580570f4fbf,
    char *_4c42c4db_f039_4a57_8264_5f57af512614,
    char *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc,
    char *_714a918a_7935_4b4f_82c3_afbadcd9e59b,
    char *b1582680_ab7b_45d0_ac36_b00f82df8e79,
    char *_6fa5c2bc_b7f7_47f8_9229_e927722adb27,
    char *_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc,
    char *ea6e632b_d8e1_420f_bd8f_ad50b067bad6
);

void inline_response_200_3__embedded_config_id_by_config_type_id_free(inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id);

inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_200_3__embedded_config_id_by_config_type_idJSON);

cJSON *inline_response_200_3__embedded_config_id_by_config_type_id_convertToJSON(inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id);

#endif /* _inline_response_200_3__embedded_config_id_by_config_type_id_H_ */

