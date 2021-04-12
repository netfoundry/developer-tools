#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_1_config_id_by_config_type_id.h"



inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_create(
    char *_6fa5c2bc_b7f7_47f8_9229_e927722adb27,
    char *b1582680_ab7b_45d0_ac36_b00f82df8e79
    ) {
    inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_local_var = malloc(sizeof(inline_response_202_1_config_id_by_config_type_id_t));
    if (!inline_response_202_1_config_id_by_config_type_id_local_var) {
        return NULL;
    }
    inline_response_202_1_config_id_by_config_type_id_local_var->_6fa5c2bc_b7f7_47f8_9229_e927722adb27 = _6fa5c2bc_b7f7_47f8_9229_e927722adb27;
    inline_response_202_1_config_id_by_config_type_id_local_var->b1582680_ab7b_45d0_ac36_b00f82df8e79 = b1582680_ab7b_45d0_ac36_b00f82df8e79;

    return inline_response_202_1_config_id_by_config_type_id_local_var;
}


void inline_response_202_1_config_id_by_config_type_id_free(inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id) {
    if(NULL == inline_response_202_1_config_id_by_config_type_id){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_1_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27);
    free(inline_response_202_1_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79);
    free(inline_response_202_1_config_id_by_config_type_id);
}

cJSON *inline_response_202_1_config_id_by_config_type_id_convertToJSON(inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_1_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27
    if(inline_response_202_1_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27) { 
    if(cJSON_AddStringToObject(item, "6fa5c2bc-b7f7-47f8-9229-e927722adb27", inline_response_202_1_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27) == NULL) {
    goto fail; //String
    }
     } 


    // inline_response_202_1_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79
    if(inline_response_202_1_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79) { 
    if(cJSON_AddStringToObject(item, "b1582680-ab7b-45d0-ac36-b00f82df8e79", inline_response_202_1_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79) == NULL) {
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

inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_parseFromJSON(cJSON *inline_response_202_1_config_id_by_config_type_idJSON){

    inline_response_202_1_config_id_by_config_type_id_t *inline_response_202_1_config_id_by_config_type_id_local_var = NULL;

    // inline_response_202_1_config_id_by_config_type_id->_6fa5c2bc_b7f7_47f8_9229_e927722adb27
    cJSON *_6fa5c2bc_b7f7_47f8_9229_e927722adb27 = cJSON_GetObjectItemCaseSensitive(inline_response_202_1_config_id_by_config_type_idJSON, "6fa5c2bc-b7f7-47f8-9229-e927722adb27");
    if (_6fa5c2bc_b7f7_47f8_9229_e927722adb27) { 
    if(!cJSON_IsString(_6fa5c2bc_b7f7_47f8_9229_e927722adb27))
    {
    goto end; //String
    }
    }

    // inline_response_202_1_config_id_by_config_type_id->b1582680_ab7b_45d0_ac36_b00f82df8e79
    cJSON *b1582680_ab7b_45d0_ac36_b00f82df8e79 = cJSON_GetObjectItemCaseSensitive(inline_response_202_1_config_id_by_config_type_idJSON, "b1582680-ab7b-45d0-ac36-b00f82df8e79");
    if (b1582680_ab7b_45d0_ac36_b00f82df8e79) { 
    if(!cJSON_IsString(b1582680_ab7b_45d0_ac36_b00f82df8e79))
    {
    goto end; //String
    }
    }


    inline_response_202_1_config_id_by_config_type_id_local_var = inline_response_202_1_config_id_by_config_type_id_create (
        _6fa5c2bc_b7f7_47f8_9229_e927722adb27 ? strdup(_6fa5c2bc_b7f7_47f8_9229_e927722adb27->valuestring) : NULL,
        b1582680_ab7b_45d0_ac36_b00f82df8e79 ? strdup(b1582680_ab7b_45d0_ac36_b00f82df8e79->valuestring) : NULL
        );

    return inline_response_202_1_config_id_by_config_type_id_local_var;
end:
    return NULL;

}
