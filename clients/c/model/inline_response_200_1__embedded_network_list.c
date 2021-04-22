#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_1__embedded_network_list.h"



inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list_create(
    char *name,
    char *updated_at,
    char *size,
    char *owner_identity_id,
    char *product_version,
    char *network_group_id,
    char *id,
    char *status,
    char *created_at,
    char *created_by,
    char *o365_breakout_category,
    inline_response_200_1__embedded__links_t *_links
    ) {
    inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list_local_var = malloc(sizeof(inline_response_200_1__embedded_network_list_t));
    if (!inline_response_200_1__embedded_network_list_local_var) {
        return NULL;
    }
    inline_response_200_1__embedded_network_list_local_var->deleted_at = deleted_at;
    inline_response_200_1__embedded_network_list_local_var->name = name;
    inline_response_200_1__embedded_network_list_local_var->updated_at = updated_at;
    inline_response_200_1__embedded_network_list_local_var->size = size;
    inline_response_200_1__embedded_network_list_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_1__embedded_network_list_local_var->product_version = product_version;
    inline_response_200_1__embedded_network_list_local_var->network_group_id = network_group_id;
    inline_response_200_1__embedded_network_list_local_var->id = id;
    inline_response_200_1__embedded_network_list_local_var->status = status;
    inline_response_200_1__embedded_network_list_local_var->created_at = created_at;
    inline_response_200_1__embedded_network_list_local_var->created_by = created_by;
    inline_response_200_1__embedded_network_list_local_var->deleted_by = deleted_by;
    inline_response_200_1__embedded_network_list_local_var->network_controller = network_controller;
    inline_response_200_1__embedded_network_list_local_var->o365_breakout_category = o365_breakout_category;
    inline_response_200_1__embedded_network_list_local_var->_links = _links;

    return inline_response_200_1__embedded_network_list_local_var;
}


void inline_response_200_1__embedded_network_list_free(inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list) {
    if(NULL == inline_response_200_1__embedded_network_list){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_1__embedded_network_list->name);
    free(inline_response_200_1__embedded_network_list->updated_at);
    free(inline_response_200_1__embedded_network_list->size);
    free(inline_response_200_1__embedded_network_list->owner_identity_id);
    free(inline_response_200_1__embedded_network_list->product_version);
    free(inline_response_200_1__embedded_network_list->network_group_id);
    free(inline_response_200_1__embedded_network_list->id);
    free(inline_response_200_1__embedded_network_list->status);
    free(inline_response_200_1__embedded_network_list->created_at);
    free(inline_response_200_1__embedded_network_list->created_by);
    free(inline_response_200_1__embedded_network_list->o365_breakout_category);
    inline_response_200_1__embedded__links_free(inline_response_200_1__embedded_network_list->_links);
    free(inline_response_200_1__embedded_network_list);
}

cJSON *inline_response_200_1__embedded_network_list_convertToJSON(inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_1__embedded_network_list->deleted_at
    if (!inline_response_200_1__embedded_network_list->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_1__embedded_network_list->name
    if (!inline_response_200_1__embedded_network_list->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_1__embedded_network_list->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->updated_at
    if (!inline_response_200_1__embedded_network_list->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_1__embedded_network_list->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->size
    if (!inline_response_200_1__embedded_network_list->size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "size", inline_response_200_1__embedded_network_list->size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->owner_identity_id
    if (!inline_response_200_1__embedded_network_list->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200_1__embedded_network_list->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->product_version
    if (!inline_response_200_1__embedded_network_list->product_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "productVersion", inline_response_200_1__embedded_network_list->product_version) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->network_group_id
    if (!inline_response_200_1__embedded_network_list->network_group_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkGroupId", inline_response_200_1__embedded_network_list->network_group_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->id
    if (!inline_response_200_1__embedded_network_list->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_1__embedded_network_list->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->status
    if (!inline_response_200_1__embedded_network_list->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", inline_response_200_1__embedded_network_list->status) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->created_at
    if (!inline_response_200_1__embedded_network_list->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_1__embedded_network_list->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->created_by
    if (!inline_response_200_1__embedded_network_list->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200_1__embedded_network_list->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->deleted_by
    if (!inline_response_200_1__embedded_network_list->deleted_by) {
        goto fail;
    }
    


    // inline_response_200_1__embedded_network_list->network_controller
    if(inline_response_200_1__embedded_network_list->network_controller) { 
     } 


    // inline_response_200_1__embedded_network_list->o365_breakout_category
    if (!inline_response_200_1__embedded_network_list->o365_breakout_category) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "o365BreakoutCategory", inline_response_200_1__embedded_network_list->o365_breakout_category) == NULL) {
    goto fail; //String
    }


    // inline_response_200_1__embedded_network_list->_links
    if (!inline_response_200_1__embedded_network_list->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_1__embedded__links_convertToJSON(inline_response_200_1__embedded_network_list->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
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

inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list_parseFromJSON(cJSON *inline_response_200_1__embedded_network_listJSON){

    inline_response_200_1__embedded_network_list_t *inline_response_200_1__embedded_network_list_local_var = NULL;

    // inline_response_200_1__embedded_network_list->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_1__embedded_network_list->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "size");
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsString(size))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->product_version
    cJSON *product_version = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "productVersion");
    if (!product_version) {
        goto end;
    }

    
    if(!cJSON_IsString(product_version))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->network_group_id
    cJSON *network_group_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "networkGroupId");
    if (!network_group_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_group_id))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200_1__embedded_network_list->network_controller
    cJSON *network_controller = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "networkController");
    }

    // inline_response_200_1__embedded_network_list->o365_breakout_category
    cJSON *o365_breakout_category = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "o365BreakoutCategory");
    if (!o365_breakout_category) {
        goto end;
    }

    
    if(!cJSON_IsString(o365_breakout_category))
    {
    goto end; //String
    }

    // inline_response_200_1__embedded_network_list->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embedded_network_listJSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_1__embedded__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_1__embedded__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_1__embedded_network_list_local_var = inline_response_200_1__embedded_network_list_create (
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        strdup(size->valuestring),
        strdup(owner_identity_id->valuestring),
        strdup(product_version->valuestring),
        strdup(network_group_id->valuestring),
        strdup(id->valuestring),
        strdup(status->valuestring),
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        strdup(o365_breakout_category->valuestring),
        _links_local_nonprim
        );

    return inline_response_200_1__embedded_network_list_local_var;
end:
    return NULL;

}
