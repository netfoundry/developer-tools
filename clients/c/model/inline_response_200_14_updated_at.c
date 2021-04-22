#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_14_updated_at.h"



inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_create(
    double epoch_second,
    double nano
    ) {
    inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_local_var = malloc(sizeof(inline_response_200_14_updated_at_t));
    if (!inline_response_200_14_updated_at_local_var) {
        return NULL;
    }
    inline_response_200_14_updated_at_local_var->epoch_second = epoch_second;
    inline_response_200_14_updated_at_local_var->nano = nano;

    return inline_response_200_14_updated_at_local_var;
}


void inline_response_200_14_updated_at_free(inline_response_200_14_updated_at_t *inline_response_200_14_updated_at) {
    if(NULL == inline_response_200_14_updated_at){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_14_updated_at);
}

cJSON *inline_response_200_14_updated_at_convertToJSON(inline_response_200_14_updated_at_t *inline_response_200_14_updated_at) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_14_updated_at->epoch_second
    if (!inline_response_200_14_updated_at->epoch_second) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "epochSecond", inline_response_200_14_updated_at->epoch_second) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_14_updated_at->nano
    if (!inline_response_200_14_updated_at->nano) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "nano", inline_response_200_14_updated_at->nano) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_parseFromJSON(cJSON *inline_response_200_14_updated_atJSON){

    inline_response_200_14_updated_at_t *inline_response_200_14_updated_at_local_var = NULL;

    // inline_response_200_14_updated_at->epoch_second
    cJSON *epoch_second = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_updated_atJSON, "epochSecond");
    if (!epoch_second) {
        goto end;
    }

    
    if(!cJSON_IsNumber(epoch_second))
    {
    goto end; //Numeric
    }

    // inline_response_200_14_updated_at->nano
    cJSON *nano = cJSON_GetObjectItemCaseSensitive(inline_response_200_14_updated_atJSON, "nano");
    if (!nano) {
        goto end;
    }

    
    if(!cJSON_IsNumber(nano))
    {
    goto end; //Numeric
    }


    inline_response_200_14_updated_at_local_var = inline_response_200_14_updated_at_create (
        epoch_second->valuedouble,
        nano->valuedouble
        );

    return inline_response_200_14_updated_at_local_var;
end:
    return NULL;

}
