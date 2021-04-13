#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_3_config_id_by_config_type_id.h"



inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_create(
    char *d75e27f0_ebab_4567_8440_c24f02f2eca5,
    char *cf3962b1_a98e_4ade_ae25_cdc388e7feb3,
    char *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc,
    char *_714a918a_7935_4b4f_82c3_afbadcd9e59b,
    char *_64a39300_b672_413b_9d8c_42175f7e84dd,
    char *ea6e632b_d8e1_420f_bd8f_ad50b067bad6
    ) {
    inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_local_var = malloc(sizeof(inline_response_202_3_config_id_by_config_type_id_t));
    if (!inline_response_202_3_config_id_by_config_type_id_local_var) {
        return NULL;
    }
    inline_response_202_3_config_id_by_config_type_id_local_var->d75e27f0_ebab_4567_8440_c24f02f2eca5 = d75e27f0_ebab_4567_8440_c24f02f2eca5;
    inline_response_202_3_config_id_by_config_type_id_local_var->cf3962b1_a98e_4ade_ae25_cdc388e7feb3 = cf3962b1_a98e_4ade_ae25_cdc388e7feb3;
    inline_response_202_3_config_id_by_config_type_id_local_var->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc;
    inline_response_202_3_config_id_by_config_type_id_local_var->_714a918a_7935_4b4f_82c3_afbadcd9e59b = _714a918a_7935_4b4f_82c3_afbadcd9e59b;
    inline_response_202_3_config_id_by_config_type_id_local_var->_64a39300_b672_413b_9d8c_42175f7e84dd = _64a39300_b672_413b_9d8c_42175f7e84dd;
    inline_response_202_3_config_id_by_config_type_id_local_var->ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = ea6e632b_d8e1_420f_bd8f_ad50b067bad6;

    return inline_response_202_3_config_id_by_config_type_id_local_var;
}


void inline_response_202_3_config_id_by_config_type_id_free(inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id) {
    if(NULL == inline_response_202_3_config_id_by_config_type_id){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_3_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5);
    free(inline_response_202_3_config_id_by_config_type_id->cf3962b1_a98e_4ade_ae25_cdc388e7feb3);
    free(inline_response_202_3_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc);
    free(inline_response_202_3_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b);
    free(inline_response_202_3_config_id_by_config_type_id->_64a39300_b672_413b_9d8c_42175f7e84dd);
    free(inline_response_202_3_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6);
    free(inline_response_202_3_config_id_by_config_type_id);
}

cJSON *inline_response_202_3_config_id_by_config_type_id_convertToJSON(inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_3_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5
    if(inline_response_202_3_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5) { 
    if(cJSON_AddStringToObject(item, "d75e27f0-ebab-4567-8440-c24f02f2eca5", inline_response_202_3_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_3_config_id_by_config_type_id->cf3962b1_a98e_4ade_ae25_cdc388e7feb3
    if (!inline_response_202_3_config_id_by_config_type_id->cf3962b1_a98e_4ade_ae25_cdc388e7feb3) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "cf3962b1-a98e-4ade-ae25-cdc388e7feb3", inline_response_202_3_config_id_by_config_type_id->cf3962b1_a98e_4ade_ae25_cdc388e7feb3) == NULL) {
    goto fail; //String
    }


    // inline_response_202_3_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc
    if(inline_response_202_3_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) { 
    if(cJSON_AddStringToObject(item, "7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc", inline_response_202_3_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_3_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b
    if(inline_response_202_3_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b) { 
    if(cJSON_AddStringToObject(item, "714a918a-7935-4b4f-82c3-afbadcd9e59b", inline_response_202_3_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_3_config_id_by_config_type_id->_64a39300_b672_413b_9d8c_42175f7e84dd
    if (!inline_response_202_3_config_id_by_config_type_id->_64a39300_b672_413b_9d8c_42175f7e84dd) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "64a39300-b672-413b-9d8c-42175f7e84dd", inline_response_202_3_config_id_by_config_type_id->_64a39300_b672_413b_9d8c_42175f7e84dd) == NULL) {
    goto fail; //String
    }


    // inline_response_202_3_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6
    if(inline_response_202_3_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6) { 
    if(cJSON_AddStringToObject(item, "ea6e632b-d8e1-420f-bd8f-ad50b067bad6", inline_response_202_3_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6) == NULL) {
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

inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_3_config_id_by_config_type_idJSON){

    inline_response_202_3_config_id_by_config_type_id_t *inline_response_202_3_config_id_by_config_type_id_local_var = NULL;

    // inline_response_202_3_config_id_by_config_type_id->d75e27f0_ebab_4567_8440_c24f02f2eca5
    cJSON *d75e27f0_ebab_4567_8440_c24f02f2eca5 = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "d75e27f0-ebab-4567-8440-c24f02f2eca5");
    if (d75e27f0_ebab_4567_8440_c24f02f2eca5) { 
    if(!cJSON_IsString(d75e27f0_ebab_4567_8440_c24f02f2eca5))
    {
    goto end; //String
    }
    }

    // inline_response_202_3_config_id_by_config_type_id->cf3962b1_a98e_4ade_ae25_cdc388e7feb3
    cJSON *cf3962b1_a98e_4ade_ae25_cdc388e7feb3 = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "cf3962b1-a98e-4ade-ae25-cdc388e7feb3");
    if (!cf3962b1_a98e_4ade_ae25_cdc388e7feb3) {
        goto end;
    }

    
    if(!cJSON_IsString(cf3962b1_a98e_4ade_ae25_cdc388e7feb3))
    {
    goto end; //String
    }

    // inline_response_202_3_config_id_by_config_type_id->_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc
    cJSON *_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc");
    if (_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc) { 
    if(!cJSON_IsString(_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc))
    {
    goto end; //String
    }
    }

    // inline_response_202_3_config_id_by_config_type_id->_714a918a_7935_4b4f_82c3_afbadcd9e59b
    cJSON *_714a918a_7935_4b4f_82c3_afbadcd9e59b = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "714a918a-7935-4b4f-82c3-afbadcd9e59b");
    if (_714a918a_7935_4b4f_82c3_afbadcd9e59b) { 
    if(!cJSON_IsString(_714a918a_7935_4b4f_82c3_afbadcd9e59b))
    {
    goto end; //String
    }
    }

    // inline_response_202_3_config_id_by_config_type_id->_64a39300_b672_413b_9d8c_42175f7e84dd
    cJSON *_64a39300_b672_413b_9d8c_42175f7e84dd = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "64a39300-b672-413b-9d8c-42175f7e84dd");
    if (!_64a39300_b672_413b_9d8c_42175f7e84dd) {
        goto end;
    }

    
    if(!cJSON_IsString(_64a39300_b672_413b_9d8c_42175f7e84dd))
    {
    goto end; //String
    }

    // inline_response_202_3_config_id_by_config_type_id->ea6e632b_d8e1_420f_bd8f_ad50b067bad6
    cJSON *ea6e632b_d8e1_420f_bd8f_ad50b067bad6 = cJSON_GetObjectItemCaseSensitive(inline_response_202_3_config_id_by_config_type_idJSON, "ea6e632b-d8e1-420f-bd8f-ad50b067bad6");
    if (ea6e632b_d8e1_420f_bd8f_ad50b067bad6) { 
    if(!cJSON_IsString(ea6e632b_d8e1_420f_bd8f_ad50b067bad6))
    {
    goto end; //String
    }
    }


    inline_response_202_3_config_id_by_config_type_id_local_var = inline_response_202_3_config_id_by_config_type_id_create (
        d75e27f0_ebab_4567_8440_c24f02f2eca5 ? strdup(d75e27f0_ebab_4567_8440_c24f02f2eca5->valuestring) : NULL,
        strdup(cf3962b1_a98e_4ade_ae25_cdc388e7feb3->valuestring),
        _7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc ? strdup(_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc->valuestring) : NULL,
        _714a918a_7935_4b4f_82c3_afbadcd9e59b ? strdup(_714a918a_7935_4b4f_82c3_afbadcd9e59b->valuestring) : NULL,
        strdup(_64a39300_b672_413b_9d8c_42175f7e84dd->valuestring),
        ea6e632b_d8e1_420f_bd8f_ad50b067bad6 ? strdup(ea6e632b_d8e1_420f_bd8f_ad50b067bad6->valuestring) : NULL
        );

    return inline_response_202_3_config_id_by_config_type_id_local_var;
end:
    return NULL;

}
