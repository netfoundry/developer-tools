#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_2_config_id_by_config_type_id.h"



inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_create(
    char *aca7f705_9f00_4ff6_8b86_63a4d44bde8a,
    char *_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f,
    char *d28725c0_9771_47d7_a9da_e408bd0adf4e,
    char *_888d6565_4359_4d91_b38d_0a24124e4456,
    char *feb075cd_dd2b_47c5_922c_86ef3b06fb16
    ) {
    inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_local_var = malloc(sizeof(inline_response_202_2_config_id_by_config_type_id_t));
    if (!inline_response_202_2_config_id_by_config_type_id_local_var) {
        return NULL;
    }
    inline_response_202_2_config_id_by_config_type_id_local_var->aca7f705_9f00_4ff6_8b86_63a4d44bde8a = aca7f705_9f00_4ff6_8b86_63a4d44bde8a;
    inline_response_202_2_config_id_by_config_type_id_local_var->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f = _6cd51ae0_cfe4_499d_88d8_d02a9e18b25f;
    inline_response_202_2_config_id_by_config_type_id_local_var->d28725c0_9771_47d7_a9da_e408bd0adf4e = d28725c0_9771_47d7_a9da_e408bd0adf4e;
    inline_response_202_2_config_id_by_config_type_id_local_var->_888d6565_4359_4d91_b38d_0a24124e4456 = _888d6565_4359_4d91_b38d_0a24124e4456;
    inline_response_202_2_config_id_by_config_type_id_local_var->feb075cd_dd2b_47c5_922c_86ef3b06fb16 = feb075cd_dd2b_47c5_922c_86ef3b06fb16;

    return inline_response_202_2_config_id_by_config_type_id_local_var;
}


void inline_response_202_2_config_id_by_config_type_id_free(inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id) {
    if(NULL == inline_response_202_2_config_id_by_config_type_id){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_2_config_id_by_config_type_id->aca7f705_9f00_4ff6_8b86_63a4d44bde8a);
    free(inline_response_202_2_config_id_by_config_type_id->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f);
    free(inline_response_202_2_config_id_by_config_type_id->d28725c0_9771_47d7_a9da_e408bd0adf4e);
    free(inline_response_202_2_config_id_by_config_type_id->_888d6565_4359_4d91_b38d_0a24124e4456);
    free(inline_response_202_2_config_id_by_config_type_id->feb075cd_dd2b_47c5_922c_86ef3b06fb16);
    free(inline_response_202_2_config_id_by_config_type_id);
}

cJSON *inline_response_202_2_config_id_by_config_type_id_convertToJSON(inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_2_config_id_by_config_type_id->aca7f705_9f00_4ff6_8b86_63a4d44bde8a
    if(inline_response_202_2_config_id_by_config_type_id->aca7f705_9f00_4ff6_8b86_63a4d44bde8a) { 
    if(cJSON_AddStringToObject(item, "aca7f705-9f00-4ff6-8b86-63a4d44bde8a", inline_response_202_2_config_id_by_config_type_id->aca7f705_9f00_4ff6_8b86_63a4d44bde8a) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_2_config_id_by_config_type_id->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f
    if(inline_response_202_2_config_id_by_config_type_id->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f) { 
    if(cJSON_AddStringToObject(item, "6cd51ae0-cfe4-499d-88d8-d02a9e18b25f", inline_response_202_2_config_id_by_config_type_id->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_2_config_id_by_config_type_id->d28725c0_9771_47d7_a9da_e408bd0adf4e
    if(inline_response_202_2_config_id_by_config_type_id->d28725c0_9771_47d7_a9da_e408bd0adf4e) { 
    if(cJSON_AddStringToObject(item, "d28725c0-9771-47d7-a9da-e408bd0adf4e", inline_response_202_2_config_id_by_config_type_id->d28725c0_9771_47d7_a9da_e408bd0adf4e) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_2_config_id_by_config_type_id->_888d6565_4359_4d91_b38d_0a24124e4456
    if(inline_response_202_2_config_id_by_config_type_id->_888d6565_4359_4d91_b38d_0a24124e4456) { 
    if(cJSON_AddStringToObject(item, "888d6565-4359-4d91-b38d-0a24124e4456", inline_response_202_2_config_id_by_config_type_id->_888d6565_4359_4d91_b38d_0a24124e4456) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_2_config_id_by_config_type_id->feb075cd_dd2b_47c5_922c_86ef3b06fb16
    if(inline_response_202_2_config_id_by_config_type_id->feb075cd_dd2b_47c5_922c_86ef3b06fb16) { 
    if(cJSON_AddStringToObject(item, "feb075cd-dd2b-47c5-922c-86ef3b06fb16", inline_response_202_2_config_id_by_config_type_id->feb075cd_dd2b_47c5_922c_86ef3b06fb16) == NULL) {
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

inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_2_config_id_by_config_type_idJSON){

    inline_response_202_2_config_id_by_config_type_id_t *inline_response_202_2_config_id_by_config_type_id_local_var = NULL;

    // inline_response_202_2_config_id_by_config_type_id->aca7f705_9f00_4ff6_8b86_63a4d44bde8a
    cJSON *aca7f705_9f00_4ff6_8b86_63a4d44bde8a = cJSON_GetObjectItemCaseSensitive(inline_response_202_2_config_id_by_config_type_idJSON, "aca7f705-9f00-4ff6-8b86-63a4d44bde8a");
    if (aca7f705_9f00_4ff6_8b86_63a4d44bde8a) { 
    if(!cJSON_IsString(aca7f705_9f00_4ff6_8b86_63a4d44bde8a))
    {
    goto end; //String
    }
    }

    // inline_response_202_2_config_id_by_config_type_id->_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f
    cJSON *_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f = cJSON_GetObjectItemCaseSensitive(inline_response_202_2_config_id_by_config_type_idJSON, "6cd51ae0-cfe4-499d-88d8-d02a9e18b25f");
    if (_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f) { 
    if(!cJSON_IsString(_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f))
    {
    goto end; //String
    }
    }

    // inline_response_202_2_config_id_by_config_type_id->d28725c0_9771_47d7_a9da_e408bd0adf4e
    cJSON *d28725c0_9771_47d7_a9da_e408bd0adf4e = cJSON_GetObjectItemCaseSensitive(inline_response_202_2_config_id_by_config_type_idJSON, "d28725c0-9771-47d7-a9da-e408bd0adf4e");
    if (d28725c0_9771_47d7_a9da_e408bd0adf4e) { 
    if(!cJSON_IsString(d28725c0_9771_47d7_a9da_e408bd0adf4e))
    {
    goto end; //String
    }
    }

    // inline_response_202_2_config_id_by_config_type_id->_888d6565_4359_4d91_b38d_0a24124e4456
    cJSON *_888d6565_4359_4d91_b38d_0a24124e4456 = cJSON_GetObjectItemCaseSensitive(inline_response_202_2_config_id_by_config_type_idJSON, "888d6565-4359-4d91-b38d-0a24124e4456");
    if (_888d6565_4359_4d91_b38d_0a24124e4456) { 
    if(!cJSON_IsString(_888d6565_4359_4d91_b38d_0a24124e4456))
    {
    goto end; //String
    }
    }

    // inline_response_202_2_config_id_by_config_type_id->feb075cd_dd2b_47c5_922c_86ef3b06fb16
    cJSON *feb075cd_dd2b_47c5_922c_86ef3b06fb16 = cJSON_GetObjectItemCaseSensitive(inline_response_202_2_config_id_by_config_type_idJSON, "feb075cd-dd2b-47c5-922c-86ef3b06fb16");
    if (feb075cd_dd2b_47c5_922c_86ef3b06fb16) { 
    if(!cJSON_IsString(feb075cd_dd2b_47c5_922c_86ef3b06fb16))
    {
    goto end; //String
    }
    }


    inline_response_202_2_config_id_by_config_type_id_local_var = inline_response_202_2_config_id_by_config_type_id_create (
        aca7f705_9f00_4ff6_8b86_63a4d44bde8a ? strdup(aca7f705_9f00_4ff6_8b86_63a4d44bde8a->valuestring) : NULL,
        _6cd51ae0_cfe4_499d_88d8_d02a9e18b25f ? strdup(_6cd51ae0_cfe4_499d_88d8_d02a9e18b25f->valuestring) : NULL,
        d28725c0_9771_47d7_a9da_e408bd0adf4e ? strdup(d28725c0_9771_47d7_a9da_e408bd0adf4e->valuestring) : NULL,
        _888d6565_4359_4d91_b38d_0a24124e4456 ? strdup(_888d6565_4359_4d91_b38d_0a24124e4456->valuestring) : NULL,
        feb075cd_dd2b_47c5_922c_86ef3b06fb16 ? strdup(feb075cd_dd2b_47c5_922c_86ef3b06fb16->valuestring) : NULL
        );

    return inline_response_202_2_config_id_by_config_type_id_local_var;
end:
    return NULL;

}
