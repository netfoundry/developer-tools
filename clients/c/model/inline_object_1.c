#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_1.h"



inline_object_1_t *inline_object_1_create(
    char *network_id,
    char *name,
    _core_v2_services_model_t *model,
    list_t *attributes,
    char *model_type,
    int encryption_required
    ) {
    inline_object_1_t *inline_object_1_local_var = malloc(sizeof(inline_object_1_t));
    if (!inline_object_1_local_var) {
        return NULL;
    }
    inline_object_1_local_var->network_id = network_id;
    inline_object_1_local_var->name = name;
    inline_object_1_local_var->model = model;
    inline_object_1_local_var->attributes = attributes;
    inline_object_1_local_var->model_type = model_type;
    inline_object_1_local_var->encryption_required = encryption_required;

    return inline_object_1_local_var;
}


void inline_object_1_free(inline_object_1_t *inline_object_1) {
    if(NULL == inline_object_1){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_object_1->network_id);
    free(inline_object_1->name);
    _core_v2_services_model_free(inline_object_1->model);
    list_ForEach(listEntry, inline_object_1->attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_1->attributes);
    free(inline_object_1->model_type);
    free(inline_object_1);
}

cJSON *inline_object_1_convertToJSON(inline_object_1_t *inline_object_1) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_1->network_id
    if (!inline_object_1->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_object_1->network_id) == NULL) {
    goto fail; //String
    }


    // inline_object_1->name
    if (!inline_object_1->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_1->name) == NULL) {
    goto fail; //String
    }


    // inline_object_1->model
    if (!inline_object_1->model) {
        goto fail;
    }
    
    cJSON *model_local_JSON = _core_v2_services_model_convertToJSON(inline_object_1->model);
    if(model_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "model", model_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_object_1->attributes
    if (!inline_object_1->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_object_1->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_1->model_type
    if (!inline_object_1->model_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "modelType", inline_object_1->model_type) == NULL) {
    goto fail; //String
    }


    // inline_object_1->encryption_required
    if (!inline_object_1->encryption_required) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "encryptionRequired", inline_object_1->encryption_required) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_1_t *inline_object_1_parseFromJSON(cJSON *inline_object_1JSON){

    inline_object_1_t *inline_object_1_local_var = NULL;

    // inline_object_1->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_object_1->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object_1->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "model");
    if (!model) {
        goto end;
    }

    _core_v2_services_model_t *model_local_nonprim = NULL;
    
    model_local_nonprim = _core_v2_services_model_parseFromJSON(model); //nonprimitive

    // inline_object_1->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "attributes");
    if (!attributes) {
        goto end;
    }

    list_t *attributesList;
    
    cJSON *attributes_local;
    if(!cJSON_IsArray(attributes)) {
        goto end;//primitive container
    }
    attributesList = list_create();

    cJSON_ArrayForEach(attributes_local, attributes)
    {
        if(!cJSON_IsString(attributes_local))
        {
            goto end;
        }
        list_addElement(attributesList , strdup(attributes_local->valuestring));
    }

    // inline_object_1->model_type
    cJSON *model_type = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "modelType");
    if (!model_type) {
        goto end;
    }

    
    if(!cJSON_IsString(model_type))
    {
    goto end; //String
    }

    // inline_object_1->encryption_required
    cJSON *encryption_required = cJSON_GetObjectItemCaseSensitive(inline_object_1JSON, "encryptionRequired");
    if (!encryption_required) {
        goto end;
    }

    
    if(!cJSON_IsBool(encryption_required))
    {
    goto end; //Bool
    }


    inline_object_1_local_var = inline_object_1_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        model_local_nonprim,
        attributesList,
        strdup(model_type->valuestring),
        encryption_required->valueint
        );

    return inline_object_1_local_var;
end:
    return NULL;

}
