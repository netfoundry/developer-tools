#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_500_1.h"



inline_response_500_1_t *inline_response_500_1_create(
    list_t *errors,
    inline_response_500_1_status_t *status,
    char *trace_id
    ) {
    inline_response_500_1_t *inline_response_500_1_local_var = malloc(sizeof(inline_response_500_1_t));
    if (!inline_response_500_1_local_var) {
        return NULL;
    }
    inline_response_500_1_local_var->errors = errors;
    inline_response_500_1_local_var->status = status;
    inline_response_500_1_local_var->trace_id = trace_id;

    return inline_response_500_1_local_var;
}


void inline_response_500_1_free(inline_response_500_1_t *inline_response_500_1) {
    if(NULL == inline_response_500_1){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_500_1->errors) {
        free(listEntry->data);
    }
    list_free(inline_response_500_1->errors);
    inline_response_500_1_status_free(inline_response_500_1->status);
    free(inline_response_500_1->trace_id);
    free(inline_response_500_1);
}

cJSON *inline_response_500_1_convertToJSON(inline_response_500_1_t *inline_response_500_1) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_500_1->errors
    if (!inline_response_500_1->errors) {
        goto fail;
    }
    
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, inline_response_500_1->errors) {
    if(cJSON_AddStringToObject(errors, "", (char*)errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_500_1->status
    if (!inline_response_500_1->status) {
        goto fail;
    }
    
    cJSON *status_local_JSON = inline_response_500_1_status_convertToJSON(inline_response_500_1->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_500_1->trace_id
    if (!inline_response_500_1->trace_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "traceId", inline_response_500_1->trace_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_500_1_t *inline_response_500_1_parseFromJSON(cJSON *inline_response_500_1JSON){

    inline_response_500_1_t *inline_response_500_1_local_var = NULL;

    // inline_response_500_1->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(inline_response_500_1JSON, "errors");
    if (!errors) {
        goto end;
    }

    list_t *errorsList;
    
    cJSON *errors_local;
    if(!cJSON_IsArray(errors)) {
        goto end;//primitive container
    }
    errorsList = list_create();

    cJSON_ArrayForEach(errors_local, errors)
    {
        if(!cJSON_IsString(errors_local))
        {
            goto end;
        }
        list_addElement(errorsList , strdup(errors_local->valuestring));
    }

    // inline_response_500_1->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_500_1JSON, "status");
    if (!status) {
        goto end;
    }

    inline_response_500_1_status_t *status_local_nonprim = NULL;
    
    status_local_nonprim = inline_response_500_1_status_parseFromJSON(status); //nonprimitive

    // inline_response_500_1->trace_id
    cJSON *trace_id = cJSON_GetObjectItemCaseSensitive(inline_response_500_1JSON, "traceId");
    if (!trace_id) {
        goto end;
    }

    
    if(!cJSON_IsString(trace_id))
    {
    goto end; //String
    }


    inline_response_500_1_local_var = inline_response_500_1_create (
        errorsList,
        status_local_nonprim,
        strdup(trace_id->valuestring)
        );

    return inline_response_500_1_local_var;
end:
    return NULL;

}
