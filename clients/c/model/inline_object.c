#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_object.h"



inline_object_t *inline_object_create(
    char *name,
    char *size,
    char *location_code,
    char *product_version,
    char *network_group_id
    ) {
    inline_object_t *inline_object_local_var = malloc(sizeof(inline_object_t));
    if (!inline_object_local_var) {
        return NULL;
    }
    inline_object_local_var->name = name;
    inline_object_local_var->size = size;
    inline_object_local_var->location_code = location_code;
    inline_object_local_var->product_version = product_version;
    inline_object_local_var->network_group_id = network_group_id;

    return inline_object_local_var;
}


void inline_object_free(inline_object_t *inline_object) {
    if(NULL == inline_object){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_object->name);
    free(inline_object->size);
    free(inline_object->location_code);
    free(inline_object->product_version);
    free(inline_object->network_group_id);
    free(inline_object);
}

cJSON *inline_object_convertToJSON(inline_object_t *inline_object) {
    cJSON *item = cJSON_CreateObject();

    // inline_object->name
    if (!inline_object->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_object->name) == NULL) {
    goto fail; //String
    }


    // inline_object->size
    if (!inline_object->size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "size", inline_object->size) == NULL) {
    goto fail; //String
    }


    // inline_object->location_code
    if (!inline_object->location_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "locationCode", inline_object->location_code) == NULL) {
    goto fail; //String
    }


    // inline_object->product_version
    if (!inline_object->product_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "productVersion", inline_object->product_version) == NULL) {
    goto fail; //String
    }


    // inline_object->network_group_id
    if (!inline_object->network_group_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkGroupId", inline_object->network_group_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_object_t *inline_object_parseFromJSON(cJSON *inline_objectJSON){

    inline_object_t *inline_object_local_var = NULL;

    // inline_object->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_object->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "size");
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsString(size))
    {
    goto end; //String
    }

    // inline_object->location_code
    cJSON *location_code = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "locationCode");
    if (!location_code) {
        goto end;
    }

    
    if(!cJSON_IsString(location_code))
    {
    goto end; //String
    }

    // inline_object->product_version
    cJSON *product_version = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "productVersion");
    if (!product_version) {
        goto end;
    }

    
    if(!cJSON_IsString(product_version))
    {
    goto end; //String
    }

    // inline_object->network_group_id
    cJSON *network_group_id = cJSON_GetObjectItemCaseSensitive(inline_objectJSON, "networkGroupId");
    if (!network_group_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_group_id))
    {
    goto end; //String
    }


    inline_object_local_var = inline_object_create (
        strdup(name->valuestring),
        strdup(size->valuestring),
        strdup(location_code->valuestring),
        strdup(product_version->valuestring),
        strdup(network_group_id->valuestring)
        );

    return inline_object_local_var;
end:
    return NULL;

}
