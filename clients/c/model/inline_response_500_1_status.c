#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_500_1_status.h"



inline_response_500_1_status_t *inline_response_500_1_status_create(
    double code,
    char *label
    ) {
    inline_response_500_1_status_t *inline_response_500_1_status_local_var = malloc(sizeof(inline_response_500_1_status_t));
    if (!inline_response_500_1_status_local_var) {
        return NULL;
    }
    inline_response_500_1_status_local_var->code = code;
    inline_response_500_1_status_local_var->label = label;

    return inline_response_500_1_status_local_var;
}


void inline_response_500_1_status_free(inline_response_500_1_status_t *inline_response_500_1_status) {
    if(NULL == inline_response_500_1_status){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_500_1_status->label);
    free(inline_response_500_1_status);
}

cJSON *inline_response_500_1_status_convertToJSON(inline_response_500_1_status_t *inline_response_500_1_status) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_500_1_status->code
    if (!inline_response_500_1_status->code) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "code", inline_response_500_1_status->code) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_500_1_status->label
    if (!inline_response_500_1_status->label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "label", inline_response_500_1_status->label) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_500_1_status_t *inline_response_500_1_status_parseFromJSON(cJSON *inline_response_500_1_statusJSON){

    inline_response_500_1_status_t *inline_response_500_1_status_local_var = NULL;

    // inline_response_500_1_status->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(inline_response_500_1_statusJSON, "code");
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }

    // inline_response_500_1_status->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(inline_response_500_1_statusJSON, "label");
    if (!label) {
        goto end;
    }

    
    if(!cJSON_IsString(label))
    {
    goto end; //String
    }


    inline_response_500_1_status_local_var = inline_response_500_1_status_create (
        code->valuedouble,
        strdup(label->valuestring)
        );

    return inline_response_500_1_status_local_var;
end:
    return NULL;

}
