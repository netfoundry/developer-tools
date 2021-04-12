#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object_5.h"



inline_object_5_t *inline_object_5_create(
    list_t *attributes,
    _core_v2_endpoints_enrollment_method_t *enrollment_method,
    char *name,
    char *network_id
    ) {
    inline_object_5_t *inline_object_5_local_var = malloc(sizeof(inline_object_5_t));
    if (!inline_object_5_local_var) {
        return NULL;
    }
    inline_object_5_local_var->attributes = attributes;
    inline_object_5_local_var->enrollment_method = enrollment_method;
    inline_object_5_local_var->name = name;
    inline_object_5_local_var->network_id = network_id;

    return inline_object_5_local_var;
}


void inline_object_5_free(inline_object_5_t *inline_object_5) {
    if(NULL == inline_object_5){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_object_5->attributes) {
        free(listEntry->data);
    }
    list_free(inline_object_5->attributes);
    _core_v2_endpoints_enrollment_method_free(inline_object_5->enrollment_method);
    free(inline_object_5->name);
    free(inline_object_5->network_id);
    free(inline_object_5);
}

cJSON *inline_object_5_convertToJSON(inline_object_5_t *inline_object_5) {
    cJSON *item = cJSON_CreateObject();

    // inline_object_5->attributes
    if (!inline_object_5->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_object_5->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_object_5->enrollment_method
    if (!inline_object_5->enrollment_method) {
        goto fail;
    }
    
    cJSON *enrollment_method_local_JSON = _core_v2_endpoints_enrollment_method_convertToJSON(inline_object_5->enrollment_method);
    if(enrollment_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollmentMethod", enrollment_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_object_5->name
    if (!inline_object_5->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object_5->name) == NULL) {
    goto fail; //String
    }


    // inline_object_5->network_id
    if (!inline_object_5->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_object_5->network_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_5_t *inline_object_5_parseFromJSON(cJSON *inline_object_5JSON){

    inline_object_5_t *inline_object_5_local_var = NULL;

    // inline_object_5->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_object_5JSON, "attributes");
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

    // inline_object_5->enrollment_method
    cJSON *enrollment_method = cJSON_GetObjectItemCaseSensitive(inline_object_5JSON, "enrollmentMethod");
    if (!enrollment_method) {
        goto end;
    }

    _core_v2_endpoints_enrollment_method_t *enrollment_method_local_nonprim = NULL;
    
    enrollment_method_local_nonprim = _core_v2_endpoints_enrollment_method_parseFromJSON(enrollment_method); //nonprimitive

    // inline_object_5->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_object_5JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object_5->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_object_5JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }


    inline_object_5_local_var = inline_object_5_create (
        attributesList,
        enrollment_method_local_nonprim,
        strdup(name->valuestring),
        strdup(network_id->valuestring)
        );

    return inline_object_5_local_var;
end:
    return NULL;

}
