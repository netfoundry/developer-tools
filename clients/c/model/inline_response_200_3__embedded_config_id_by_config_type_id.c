#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_3__embedded_config_id_by_config_type_id.h"



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
    ) {
    inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id_local_var = malloc(sizeof(inline_response_200_3__embedded_config_id_by_config_type_id_t));
    if (!inline_response_200_3__embedded_config_id_by_config_type_id_local_var) {
        return NULL;
    }
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->d75e27f0_ebab_4567_8440_c24f02f2eca5 = d75e27f0_ebab_4567_8440_c24f02f2eca5;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_2c1998a1_32e2_4084_b20a_b580570f4fbf = _2c1998a1_32e2_4084_b20a_b580570f4fbf;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_4c42c4db_f039_4a57_8264_5f57af512614 = _4c42c4db_f039_4a57_8264_5f57af512614;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_714a918a_7935_4b4f_82c3_afbadcd9e59b = _714a918a_7935_4b4f_82c3_afbadcd9e59b;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->b1582680_ab7b_45d0_ac36_b00f82df8e79 = b1582680_ab7b_45d0_ac36_b00f82df8e79;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_6fa5c2bc_b7f7_47f8_9229_e927722adb27 = _6fa5c2bc_b7f7_47f8_9229_e927722adb27;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc = _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc;
    inline_response_200_3__embedded_config_id_by_config_type_id_local_var->ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = ea6e632b_d8e1_420f_bd8f_ad50b067bad6;

    return inline_response_200_3__embedded_config_id_by_config_type_id_local_var;
}


void inline_response_200_3__embedded_config_id_by_config_type_id_free(inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id) {
    if(NULL == inline_response_200_3__embedded_config_id_by_config_type_id){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_3__embedded_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_2c1998a1_32e2_4084_b20a_b580570f4fbf);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_4c42c4db_f039_4a57_8264_5f57af512614);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc);
    free(inline_response_200_3__embedded_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6);
    free(inline_response_200_3__embedded_config_id_by_config_type_id);
}

cJSON *inline_response_200_3__embedded_config_id_by_config_type_id_convertToJSON(inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_3__embedded_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5
    if(inline_response_200_3__embedded_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5) { 
    if(cJSON_AddStringToObject(item, "d75e27f0-ebab-4567-8440-c24f02f2eca5", inline_response_200_3__embedded_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_2c1998a1_32e2_4084_b20a_b580570f4fbf
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_2c1998a1_32e2_4084_b20a_b580570f4fbf) { 
    if(cJSON_AddStringToObject(item, "2c1998a1-32e2-4084-b20a-b580570f4fbf", inline_response_200_3__embedded_config_id_by_config_type_id->_2c1998a1_32e2_4084_b20a_b580570f4fbf) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_4c42c4db_f039_4a57_8264_5f57af512614
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_4c42c4db_f039_4a57_8264_5f57af512614) { 
    if(cJSON_AddStringToObject(item, "4c42c4db-f039-4a57-8264-5f57af512614", inline_response_200_3__embedded_config_id_by_config_type_id->_4c42c4db_f039_4a57_8264_5f57af512614) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) { 
    if(cJSON_AddStringToObject(item, "7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc", inline_response_200_3__embedded_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b) { 
    if(cJSON_AddStringToObject(item, "714a918a-7935-4b4f-82c3-afbadcd9e59b", inline_response_200_3__embedded_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79
    if(inline_response_200_3__embedded_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79) { 
    if(cJSON_AddStringToObject(item, "b1582680-ab7b-45d0-ac36-b00f82df8e79", inline_response_200_3__embedded_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27) { 
    if(cJSON_AddStringToObject(item, "6fa5c2bc-b7f7-47f8-9229-e927722adb27", inline_response_200_3__embedded_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc
    if(inline_response_200_3__embedded_config_id_by_config_type_id->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc) { 
    if(cJSON_AddStringToObject(item, "170c6b9b-f010-46a1-a2ee-cd6729e1f5dc", inline_response_200_3__embedded_config_id_by_config_type_id->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_200_3__embedded_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6
    if(inline_response_200_3__embedded_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6) { 
    if(cJSON_AddStringToObject(item, "ea6e632b-d8e1-420f-bd8f-ad50b067bad6", inline_response_200_3__embedded_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_200_3__embedded_config_id_by_config_type_idJSON){

    inline_response_200_3__embedded_config_id_by_config_type_id_t *inline_response_200_3__embedded_config_id_by_config_type_id_local_var = NULL;

    // inline_response_200_3__embedded_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5
    cJSON *d75e27f0_ebab_4567_8440_c24f02f2eca5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "d75e27f0-ebab-4567-8440-c24f02f2eca5");
    if (d75e27f0_ebab_4567_8440_c24f02f2eca5) { 
    if(!cJSON_IsString(d75e27f0_ebab_4567_8440_c24f02f2eca5))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_2c1998a1_32e2_4084_b20a_b580570f4fbf
    cJSON *_2c1998a1_32e2_4084_b20a_b580570f4fbf = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "2c1998a1-32e2-4084-b20a-b580570f4fbf");
    if (_2c1998a1_32e2_4084_b20a_b580570f4fbf) { 
    if(!cJSON_IsString(_2c1998a1_32e2_4084_b20a_b580570f4fbf))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_4c42c4db_f039_4a57_8264_5f57af512614
    cJSON *_4c42c4db_f039_4a57_8264_5f57af512614 = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "4c42c4db-f039-4a57-8264-5f57af512614");
    if (_4c42c4db_f039_4a57_8264_5f57af512614) { 
    if(!cJSON_IsString(_4c42c4db_f039_4a57_8264_5f57af512614))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc
    cJSON *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc");
    if (_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) { 
    if(!cJSON_IsString(_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b
    cJSON *_714a918a_7935_4b4f_82c3_afbadcd9e59b = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "714a918a-7935-4b4f-82c3-afbadcd9e59b");
    if (_714a918a_7935_4b4f_82c3_afbadcd9e59b) { 
    if(!cJSON_IsString(_714a918a_7935_4b4f_82c3_afbadcd9e59b))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79
    cJSON *b1582680_ab7b_45d0_ac36_b00f82df8e79 = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "b1582680-ab7b-45d0-ac36-b00f82df8e79");
    if (b1582680_ab7b_45d0_ac36_b00f82df8e79) { 
    if(!cJSON_IsString(b1582680_ab7b_45d0_ac36_b00f82df8e79))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27
    cJSON *_6fa5c2bc_b7f7_47f8_9229_e927722adb27 = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "6fa5c2bc-b7f7-47f8-9229-e927722adb27");
    if (_6fa5c2bc_b7f7_47f8_9229_e927722adb27) { 
    if(!cJSON_IsString(_6fa5c2bc_b7f7_47f8_9229_e927722adb27))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc
    cJSON *_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "170c6b9b-f010-46a1-a2ee-cd6729e1f5dc");
    if (_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc) { 
    if(!cJSON_IsString(_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc))
    {
    goto end; //String
    }
    }

    // inline_response_200_3__embedded_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6
    cJSON *ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = cJSON_GetObjectItemCaseSensitive(inline_response_200_3__embedded_config_id_by_config_type_idJSON, "ea6e632b-d8e1-420f-bd8f-ad50b067bad6");
    if (ea6e632b_d8e1_420f_bd8f_ad50b067bad6) { 
    if(!cJSON_IsString(ea6e632b_d8e1_420f_bd8f_ad50b067bad6))
    {
    goto end; //String
    }
    }


    inline_response_200_3__embedded_config_id_by_config_type_id_local_var = inline_response_200_3__embedded_config_id_by_config_type_id_create (
        d75e27f0_ebab_4567_8440_c24f02f2eca5 ? strdup(d75e27f0_ebab_4567_8440_c24f02f2eca5->valuestring) : NULL,
        _2c1998a1_32e2_4084_b20a_b580570f4fbf ? strdup(_2c1998a1_32e2_4084_b20a_b580570f4fbf->valuestring) : NULL,
        _4c42c4db_f039_4a57_8264_5f57af512614 ? strdup(_4c42c4db_f039_4a57_8264_5f57af512614->valuestring) : NULL,
        _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc ? strdup(_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc->valuestring) : NULL,
        _714a918a_7935_4b4f_82c3_afbadcd9e59b ? strdup(_714a918a_7935_4b4f_82c3_afbadcd9e59b->valuestring) : NULL,
        b1582680_ab7b_45d0_ac36_b00f82df8e79 ? strdup(b1582680_ab7b_45d0_ac36_b00f82df8e79->valuestring) : NULL,
        _6fa5c2bc_b7f7_47f8_9229_e927722adb27 ? strdup(_6fa5c2bc_b7f7_47f8_9229_e927722adb27->valuestring) : NULL,
        _170c6b9b_f010_46a1_a2ee_cd6729e1f5dc ? strdup(_170c6b9b_f010_46a1_a2ee_cd6729e1f5dc->valuestring) : NULL,
        ea6e632b_d8e1_420f_bd8f_ad50b067bad6 ? strdup(ea6e632b_d8e1_420f_bd8f_ad50b067bad6->valuestring) : NULL
        );

    return inline_response_200_3__embedded_config_id_by_config_type_id_local_var;
end:
    return NULL;

}
