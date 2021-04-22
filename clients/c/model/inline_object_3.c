#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_3.h"



inline_object_3_t *inline_object_3_create(
    _core_v2_services__service_id__model_t *model,
    char *model_type,
    char *name
    ) {
    inline_object_3_t *inline_object_3_local_var = malloc(sizeof(inline_object_3_t));
    if (!inline_object_3_local_var) {
        return NULL;
    }
    inline_object_3_local_var->model = model;
    inline_object_3_local_var->model_type = model_type;
    inline_object_3_local_var->name = name;

    return inline_object_3_local_var;
}


void inline_object_3_free(inline_object_3_t *inline_object_3) {
    if(NULL == inline_object_3){
        return ;
    }
    listEntry_t *listEntry;
    _core_v2_services__service_id__model_free(inline_object_3->model);
    free(inline_object_3->model_type);
    free(inline_object_3->name);
    free(inline_object_3);
}

cJSON *inline_object_3_convertToJSON(inline_object_3_t *inline_object_3) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_3->model
    if (!inline_object_3->model) {
        goto fail;
    }
    
    cJSON *model_local_JSON = _core_v2_services__service_id__model_convertToJSON(inline_object_3->model);
    if(model_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "model", model_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_object_3->model_type
    if (!inline_object_3->model_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "modelType", inline_object_3->model_type) == NULL) {
    goto fail; //String
    }


    // inline_object_3->name
    if (!inline_object_3->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_3->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_3_t *inline_object_3_parseFromJSON(cJSON *inline_object_3JSON){

    inline_object_3_t *inline_object_3_local_var = NULL;

    // inline_object_3->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(inline_object_3JSON, "model");
    if (!model) {
        goto end;
    }

    _core_v2_services__service_id__model_t *model_local_nonprim = NULL;
    
    model_local_nonprim = _core_v2_services__service_id__model_parseFromJSON(model); //nonprimitive

    // inline_object_3->model_type
    cJSON *model_type = cJSON_GetObjectItemCaseSensitive(inline_object_3JSON, "modelType");
    if (!model_type) {
        goto end;
    }

    
    if(!cJSON_IsString(model_type))
    {
    goto end; //String
    }

    // inline_object_3->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_3JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    inline_object_3_local_var = inline_object_3_create (
        model_local_nonprim,
        strdup(model_type->valuestring),
        strdup(name->valuestring)
        );

    return inline_object_3_local_var;
end:
    return NULL;

}
