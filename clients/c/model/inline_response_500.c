#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_500.h"



inline_response_500_t *inline_response_500_create(
    char *error,
    char *message,
    double status,
    char *timestamp
    ) {
    inline_response_500_t *inline_response_500_local_var = malloc(sizeof(inline_response_500_t));
    if (!inline_response_500_local_var) {
        return NULL;
    }
    inline_response_500_local_var->error = error;
    inline_response_500_local_var->message = message;
    inline_response_500_local_var->status = status;
    inline_response_500_local_var->timestamp = timestamp;

    return inline_response_500_local_var;
}


void inline_response_500_free(inline_response_500_t *inline_response_500) {
    if(NULL == inline_response_500){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_500->error);
    free(inline_response_500->message);
    free(inline_response_500->timestamp);
    free(inline_response_500);
}

cJSON *inline_response_500_convertToJSON(inline_response_500_t *inline_response_500) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_500->error
    if (!inline_response_500->error) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "error", inline_response_500->error) == NULL) {
    goto fail; //String
    }


    // inline_response_500->message
    if (!inline_response_500->message) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "message", inline_response_500->message) == NULL) {
    goto fail; //String
    }


    // inline_response_500->status
    if (!inline_response_500->status) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "status", inline_response_500->status) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_500->timestamp
    if (!inline_response_500->timestamp) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "timestamp", inline_response_500->timestamp) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_500_t *inline_response_500_parseFromJSON(cJSON *inline_response_500JSON){

    inline_response_500_t *inline_response_500_local_var = NULL;

    // inline_response_500->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(inline_response_500JSON, "error");
    if (!error) {
        goto end;
    }

    
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }

    // inline_response_500->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(inline_response_500JSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // inline_response_500->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_500JSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsNumber(status))
    {
    goto end; //Numeric
    }

    // inline_response_500->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(inline_response_500JSON, "timestamp");
    if (!timestamp) {
        goto end;
    }

    
    if(!cJSON_IsString(timestamp))
    {
    goto end; //String
    }


    inline_response_500_local_var = inline_response_500_create (
        strdup(error->valuestring),
        strdup(message->valuestring),
        status->valuedouble,
        strdup(timestamp->valuestring)
        );

    return inline_response_500_local_var;
end:
    return NULL;

}
