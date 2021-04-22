#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_19.h"



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
    ) {
    inline_response_200_19_t *inline_response_200_19_local_var = malloc(sizeof(inline_response_200_19_t));
    if (!inline_response_200_19_local_var) {
        return NULL;
    }
    inline_response_200_19_local_var->_7_3_4 = _7_3_4;
    inline_response_200_19_local_var->_7_3_11 = _7_3_11;
    inline_response_200_19_local_var->_7_3_16 = _7_3_16;
    inline_response_200_19_local_var->_7_1_0 = _7_1_0;
    inline_response_200_19_local_var->_7_3_22 = _7_3_22;
    inline_response_200_19_local_var->_7_3_23 = _7_3_23;
    inline_response_200_19_local_var->_7_3_8 = _7_3_8;
    inline_response_200_19_local_var->_7_3_12 = _7_3_12;
    inline_response_200_19_local_var->_7_2_1 = _7_2_1;
    inline_response_200_19_local_var->_7_3_13 = _7_3_13;
    inline_response_200_19_local_var->_7_0_0 = _7_0_0;
    inline_response_200_19_local_var->_7_3_17 = _7_3_17;
    inline_response_200_19_local_var->_7_3_5 = _7_3_5;
    inline_response_200_19_local_var->_7_3_20 = _7_3_20;
    inline_response_200_19_local_var->_7_3_2 = _7_3_2;
    inline_response_200_19_local_var->_7_3_9 = _7_3_9;
    inline_response_200_19_local_var->_7_3_24 = _7_3_24;
    inline_response_200_19_local_var->_7_2_0 = _7_2_0;
    inline_response_200_19_local_var->_7_3_0 = _7_3_0;
    inline_response_200_19_local_var->_7_3_14 = _7_3_14;
    inline_response_200_19_local_var->_7_3_6 = _7_3_6;
    inline_response_200_19_local_var->_7_3_1 = _7_3_1;
    inline_response_200_19_local_var->_7_3_19 = _7_3_19;
    inline_response_200_19_local_var->_7_3_15 = _7_3_15;
    inline_response_200_19_local_var->_7_3_10 = _7_3_10;
    inline_response_200_19_local_var->_7_3_7 = _7_3_7;
    inline_response_200_19_local_var->_7_3_21 = _7_3_21;
    inline_response_200_19_local_var->_7_3_3 = _7_3_3;
    inline_response_200_19_local_var->_7_3_18 = _7_3_18;

    return inline_response_200_19_local_var;
}


void inline_response_200_19_free(inline_response_200_19_t *inline_response_200_19) {
    if(NULL == inline_response_200_19){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_4);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_11);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_16);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_1_0);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_22);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_23);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_8);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_12);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_2_1);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_13);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_0_0);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_17);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_5);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_20);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_3_2);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_9);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_24);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_2_0);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_3_0);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_14);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_6);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_3_1);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_19);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_15);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_10);
    inline_response_200_19_7_3_4_free(inline_response_200_19->_7_3_7);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_21);
    inline_response_200_19_7_1_0_free(inline_response_200_19->_7_3_3);
    inline_response_200_19_7_3_16_free(inline_response_200_19->_7_3_18);
    free(inline_response_200_19);
}

cJSON *inline_response_200_19_convertToJSON(inline_response_200_19_t *inline_response_200_19) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_19->_7_3_4
    if (!inline_response_200_19->_7_3_4) {
        goto fail;
    }
    
    cJSON *_7_3_4_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_4);
    if(_7_3_4_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.4", _7_3_4_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_11
    if (!inline_response_200_19->_7_3_11) {
        goto fail;
    }
    
    cJSON *_7_3_11_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_11);
    if(_7_3_11_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.11", _7_3_11_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_16
    if (!inline_response_200_19->_7_3_16) {
        goto fail;
    }
    
    cJSON *_7_3_16_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_16);
    if(_7_3_16_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.16", _7_3_16_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_1_0
    if (!inline_response_200_19->_7_1_0) {
        goto fail;
    }
    
    cJSON *_7_1_0_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_1_0);
    if(_7_1_0_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.1.0", _7_1_0_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_22
    if (!inline_response_200_19->_7_3_22) {
        goto fail;
    }
    
    cJSON *_7_3_22_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_22);
    if(_7_3_22_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.22", _7_3_22_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_23
    if (!inline_response_200_19->_7_3_23) {
        goto fail;
    }
    
    cJSON *_7_3_23_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_23);
    if(_7_3_23_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.23", _7_3_23_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_8
    if (!inline_response_200_19->_7_3_8) {
        goto fail;
    }
    
    cJSON *_7_3_8_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_8);
    if(_7_3_8_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.8", _7_3_8_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_12
    if (!inline_response_200_19->_7_3_12) {
        goto fail;
    }
    
    cJSON *_7_3_12_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_12);
    if(_7_3_12_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.12", _7_3_12_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_2_1
    if (!inline_response_200_19->_7_2_1) {
        goto fail;
    }
    
    cJSON *_7_2_1_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_2_1);
    if(_7_2_1_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.2.1", _7_2_1_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_13
    if (!inline_response_200_19->_7_3_13) {
        goto fail;
    }
    
    cJSON *_7_3_13_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_13);
    if(_7_3_13_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.13", _7_3_13_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_0_0
    if (!inline_response_200_19->_7_0_0) {
        goto fail;
    }
    
    cJSON *_7_0_0_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_0_0);
    if(_7_0_0_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.0.0", _7_0_0_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_17
    if (!inline_response_200_19->_7_3_17) {
        goto fail;
    }
    
    cJSON *_7_3_17_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_17);
    if(_7_3_17_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.17", _7_3_17_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_5
    if (!inline_response_200_19->_7_3_5) {
        goto fail;
    }
    
    cJSON *_7_3_5_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_5);
    if(_7_3_5_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.5", _7_3_5_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_20
    if (!inline_response_200_19->_7_3_20) {
        goto fail;
    }
    
    cJSON *_7_3_20_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_20);
    if(_7_3_20_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.20", _7_3_20_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_2
    if (!inline_response_200_19->_7_3_2) {
        goto fail;
    }
    
    cJSON *_7_3_2_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_3_2);
    if(_7_3_2_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.2", _7_3_2_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_9
    if (!inline_response_200_19->_7_3_9) {
        goto fail;
    }
    
    cJSON *_7_3_9_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_9);
    if(_7_3_9_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.9", _7_3_9_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_24
    if (!inline_response_200_19->_7_3_24) {
        goto fail;
    }
    
    cJSON *_7_3_24_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_24);
    if(_7_3_24_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.24", _7_3_24_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_2_0
    if (!inline_response_200_19->_7_2_0) {
        goto fail;
    }
    
    cJSON *_7_2_0_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_2_0);
    if(_7_2_0_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.2.0", _7_2_0_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_0
    if (!inline_response_200_19->_7_3_0) {
        goto fail;
    }
    
    cJSON *_7_3_0_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_3_0);
    if(_7_3_0_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.0", _7_3_0_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_14
    if (!inline_response_200_19->_7_3_14) {
        goto fail;
    }
    
    cJSON *_7_3_14_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_14);
    if(_7_3_14_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.14", _7_3_14_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_6
    if (!inline_response_200_19->_7_3_6) {
        goto fail;
    }
    
    cJSON *_7_3_6_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_6);
    if(_7_3_6_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.6", _7_3_6_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_1
    if (!inline_response_200_19->_7_3_1) {
        goto fail;
    }
    
    cJSON *_7_3_1_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_3_1);
    if(_7_3_1_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.1", _7_3_1_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_19
    if (!inline_response_200_19->_7_3_19) {
        goto fail;
    }
    
    cJSON *_7_3_19_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_19);
    if(_7_3_19_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.19", _7_3_19_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_15
    if (!inline_response_200_19->_7_3_15) {
        goto fail;
    }
    
    cJSON *_7_3_15_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_15);
    if(_7_3_15_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.15", _7_3_15_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_10
    if (!inline_response_200_19->_7_3_10) {
        goto fail;
    }
    
    cJSON *_7_3_10_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_10);
    if(_7_3_10_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.10", _7_3_10_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_7
    if (!inline_response_200_19->_7_3_7) {
        goto fail;
    }
    
    cJSON *_7_3_7_local_JSON = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19->_7_3_7);
    if(_7_3_7_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.7", _7_3_7_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_21
    if (!inline_response_200_19->_7_3_21) {
        goto fail;
    }
    
    cJSON *_7_3_21_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_21);
    if(_7_3_21_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.21", _7_3_21_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_3
    if (!inline_response_200_19->_7_3_3) {
        goto fail;
    }
    
    cJSON *_7_3_3_local_JSON = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19->_7_3_3);
    if(_7_3_3_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.3", _7_3_3_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_19->_7_3_18
    if (!inline_response_200_19->_7_3_18) {
        goto fail;
    }
    
    cJSON *_7_3_18_local_JSON = inline_response_200_19_7_3_16_convertToJSON(inline_response_200_19->_7_3_18);
    if(_7_3_18_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "7.3.18", _7_3_18_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_19_t *inline_response_200_19_parseFromJSON(cJSON *inline_response_200_19JSON){

    inline_response_200_19_t *inline_response_200_19_local_var = NULL;

    // inline_response_200_19->_7_3_4
    cJSON *_7_3_4 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.4");
    if (!_7_3_4) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_4_local_nonprim = NULL;
    
    _7_3_4_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_4); //nonprimitive

    // inline_response_200_19->_7_3_11
    cJSON *_7_3_11 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.11");
    if (!_7_3_11) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_11_local_nonprim = NULL;
    
    _7_3_11_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_11); //nonprimitive

    // inline_response_200_19->_7_3_16
    cJSON *_7_3_16 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.16");
    if (!_7_3_16) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_16_local_nonprim = NULL;
    
    _7_3_16_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_16); //nonprimitive

    // inline_response_200_19->_7_1_0
    cJSON *_7_1_0 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.1.0");
    if (!_7_1_0) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_1_0_local_nonprim = NULL;
    
    _7_1_0_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_1_0); //nonprimitive

    // inline_response_200_19->_7_3_22
    cJSON *_7_3_22 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.22");
    if (!_7_3_22) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_22_local_nonprim = NULL;
    
    _7_3_22_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_22); //nonprimitive

    // inline_response_200_19->_7_3_23
    cJSON *_7_3_23 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.23");
    if (!_7_3_23) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_23_local_nonprim = NULL;
    
    _7_3_23_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_23); //nonprimitive

    // inline_response_200_19->_7_3_8
    cJSON *_7_3_8 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.8");
    if (!_7_3_8) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_8_local_nonprim = NULL;
    
    _7_3_8_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_8); //nonprimitive

    // inline_response_200_19->_7_3_12
    cJSON *_7_3_12 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.12");
    if (!_7_3_12) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_12_local_nonprim = NULL;
    
    _7_3_12_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_12); //nonprimitive

    // inline_response_200_19->_7_2_1
    cJSON *_7_2_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.2.1");
    if (!_7_2_1) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_2_1_local_nonprim = NULL;
    
    _7_2_1_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_2_1); //nonprimitive

    // inline_response_200_19->_7_3_13
    cJSON *_7_3_13 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.13");
    if (!_7_3_13) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_13_local_nonprim = NULL;
    
    _7_3_13_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_13); //nonprimitive

    // inline_response_200_19->_7_0_0
    cJSON *_7_0_0 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.0.0");
    if (!_7_0_0) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_0_0_local_nonprim = NULL;
    
    _7_0_0_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_0_0); //nonprimitive

    // inline_response_200_19->_7_3_17
    cJSON *_7_3_17 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.17");
    if (!_7_3_17) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_17_local_nonprim = NULL;
    
    _7_3_17_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_17); //nonprimitive

    // inline_response_200_19->_7_3_5
    cJSON *_7_3_5 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.5");
    if (!_7_3_5) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_5_local_nonprim = NULL;
    
    _7_3_5_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_5); //nonprimitive

    // inline_response_200_19->_7_3_20
    cJSON *_7_3_20 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.20");
    if (!_7_3_20) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_20_local_nonprim = NULL;
    
    _7_3_20_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_20); //nonprimitive

    // inline_response_200_19->_7_3_2
    cJSON *_7_3_2 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.2");
    if (!_7_3_2) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_3_2_local_nonprim = NULL;
    
    _7_3_2_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_3_2); //nonprimitive

    // inline_response_200_19->_7_3_9
    cJSON *_7_3_9 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.9");
    if (!_7_3_9) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_9_local_nonprim = NULL;
    
    _7_3_9_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_9); //nonprimitive

    // inline_response_200_19->_7_3_24
    cJSON *_7_3_24 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.24");
    if (!_7_3_24) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_24_local_nonprim = NULL;
    
    _7_3_24_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_24); //nonprimitive

    // inline_response_200_19->_7_2_0
    cJSON *_7_2_0 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.2.0");
    if (!_7_2_0) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_2_0_local_nonprim = NULL;
    
    _7_2_0_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_2_0); //nonprimitive

    // inline_response_200_19->_7_3_0
    cJSON *_7_3_0 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.0");
    if (!_7_3_0) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_3_0_local_nonprim = NULL;
    
    _7_3_0_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_3_0); //nonprimitive

    // inline_response_200_19->_7_3_14
    cJSON *_7_3_14 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.14");
    if (!_7_3_14) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_14_local_nonprim = NULL;
    
    _7_3_14_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_14); //nonprimitive

    // inline_response_200_19->_7_3_6
    cJSON *_7_3_6 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.6");
    if (!_7_3_6) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_6_local_nonprim = NULL;
    
    _7_3_6_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_6); //nonprimitive

    // inline_response_200_19->_7_3_1
    cJSON *_7_3_1 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.1");
    if (!_7_3_1) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_3_1_local_nonprim = NULL;
    
    _7_3_1_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_3_1); //nonprimitive

    // inline_response_200_19->_7_3_19
    cJSON *_7_3_19 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.19");
    if (!_7_3_19) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_19_local_nonprim = NULL;
    
    _7_3_19_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_19); //nonprimitive

    // inline_response_200_19->_7_3_15
    cJSON *_7_3_15 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.15");
    if (!_7_3_15) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_15_local_nonprim = NULL;
    
    _7_3_15_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_15); //nonprimitive

    // inline_response_200_19->_7_3_10
    cJSON *_7_3_10 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.10");
    if (!_7_3_10) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_10_local_nonprim = NULL;
    
    _7_3_10_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_10); //nonprimitive

    // inline_response_200_19->_7_3_7
    cJSON *_7_3_7 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.7");
    if (!_7_3_7) {
        goto end;
    }

    inline_response_200_19_7_3_4_t *_7_3_7_local_nonprim = NULL;
    
    _7_3_7_local_nonprim = inline_response_200_19_7_3_4_parseFromJSON(_7_3_7); //nonprimitive

    // inline_response_200_19->_7_3_21
    cJSON *_7_3_21 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.21");
    if (!_7_3_21) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_21_local_nonprim = NULL;
    
    _7_3_21_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_21); //nonprimitive

    // inline_response_200_19->_7_3_3
    cJSON *_7_3_3 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.3");
    if (!_7_3_3) {
        goto end;
    }

    inline_response_200_19_7_1_0_t *_7_3_3_local_nonprim = NULL;
    
    _7_3_3_local_nonprim = inline_response_200_19_7_1_0_parseFromJSON(_7_3_3); //nonprimitive

    // inline_response_200_19->_7_3_18
    cJSON *_7_3_18 = cJSON_GetObjectItemCaseSensitive(inline_response_200_19JSON, "7.3.18");
    if (!_7_3_18) {
        goto end;
    }

    inline_response_200_19_7_3_16_t *_7_3_18_local_nonprim = NULL;
    
    _7_3_18_local_nonprim = inline_response_200_19_7_3_16_parseFromJSON(_7_3_18); //nonprimitive


    inline_response_200_19_local_var = inline_response_200_19_create (
        _7_3_4_local_nonprim,
        _7_3_11_local_nonprim,
        _7_3_16_local_nonprim,
        _7_1_0_local_nonprim,
        _7_3_22_local_nonprim,
        _7_3_23_local_nonprim,
        _7_3_8_local_nonprim,
        _7_3_12_local_nonprim,
        _7_2_1_local_nonprim,
        _7_3_13_local_nonprim,
        _7_0_0_local_nonprim,
        _7_3_17_local_nonprim,
        _7_3_5_local_nonprim,
        _7_3_20_local_nonprim,
        _7_3_2_local_nonprim,
        _7_3_9_local_nonprim,
        _7_3_24_local_nonprim,
        _7_2_0_local_nonprim,
        _7_3_0_local_nonprim,
        _7_3_14_local_nonprim,
        _7_3_6_local_nonprim,
        _7_3_1_local_nonprim,
        _7_3_19_local_nonprim,
        _7_3_15_local_nonprim,
        _7_3_10_local_nonprim,
        _7_3_7_local_nonprim,
        _7_3_21_local_nonprim,
        _7_3_3_local_nonprim,
        _7_3_18_local_nonprim
        );

    return inline_response_200_19_local_var;
end:
    return NULL;

}
