#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_4.h"



inline_response_202_4_t *inline_response_202_4_create(
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
    inline_response_202_4_network_controller_t *network_controller,
    char *o365_breakout_category,
    inline_response_202_4__links_t *_links
    ) {
    inline_response_202_4_t *inline_response_202_4_local_var = malloc(sizeof(inline_response_202_4_t));
    if (!inline_response_202_4_local_var) {
        return NULL;
    }
    inline_response_202_4_local_var->deleted_at = deleted_at;
    inline_response_202_4_local_var->name = name;
    inline_response_202_4_local_var->updated_at = updated_at;
    inline_response_202_4_local_var->size = size;
    inline_response_202_4_local_var->owner_identity_id = owner_identity_id;
    inline_response_202_4_local_var->product_version = product_version;
    inline_response_202_4_local_var->network_group_id = network_group_id;
    inline_response_202_4_local_var->id = id;
    inline_response_202_4_local_var->status = status;
    inline_response_202_4_local_var->created_at = created_at;
    inline_response_202_4_local_var->created_by = created_by;
    inline_response_202_4_local_var->deleted_by = deleted_by;
    inline_response_202_4_local_var->network_controller = network_controller;
    inline_response_202_4_local_var->o365_breakout_category = o365_breakout_category;
    inline_response_202_4_local_var->_links = _links;

    return inline_response_202_4_local_var;
}


void inline_response_202_4_free(inline_response_202_4_t *inline_response_202_4) {
    if(NULL == inline_response_202_4){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_4->name);
    free(inline_response_202_4->updated_at);
    free(inline_response_202_4->size);
    free(inline_response_202_4->owner_identity_id);
    free(inline_response_202_4->product_version);
    free(inline_response_202_4->network_group_id);
    free(inline_response_202_4->id);
    free(inline_response_202_4->status);
    free(inline_response_202_4->created_at);
    free(inline_response_202_4->created_by);
    inline_response_202_4_network_controller_free(inline_response_202_4->network_controller);
    free(inline_response_202_4->o365_breakout_category);
    inline_response_202_4__links_free(inline_response_202_4->_links);
    free(inline_response_202_4);
}

cJSON *inline_response_202_4_convertToJSON(inline_response_202_4_t *inline_response_202_4) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_4->deleted_at
    if (!inline_response_202_4->deleted_at) {
        goto fail;
    }
    


    // inline_response_202_4->name
    if (!inline_response_202_4->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_202_4->name) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->updated_at
    if (!inline_response_202_4->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_202_4->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->size
    if (!inline_response_202_4->size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "size", inline_response_202_4->size) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->owner_identity_id
    if (!inline_response_202_4->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_202_4->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->product_version
    if (!inline_response_202_4->product_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "productVersion", inline_response_202_4->product_version) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->network_group_id
    if (!inline_response_202_4->network_group_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkGroupId", inline_response_202_4->network_group_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->id
    if (!inline_response_202_4->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_202_4->id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->status
    if (!inline_response_202_4->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", inline_response_202_4->status) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->created_at
    if (!inline_response_202_4->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_202_4->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->created_by
    if (!inline_response_202_4->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_202_4->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->deleted_by
    if (!inline_response_202_4->deleted_by) {
        goto fail;
    }
    


    // inline_response_202_4->network_controller
    if (!inline_response_202_4->network_controller) {
        goto fail;
    }
    
    cJSON *network_controller_local_JSON = inline_response_202_4_network_controller_convertToJSON(inline_response_202_4->network_controller);
    if(network_controller_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "networkController", network_controller_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_202_4->o365_breakout_category
    if (!inline_response_202_4->o365_breakout_category) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "o365BreakoutCategory", inline_response_202_4->o365_breakout_category) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4->_links
    if (!inline_response_202_4->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_202_4__links_convertToJSON(inline_response_202_4->_links);
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

inline_response_202_4_t *inline_response_202_4_parseFromJSON(cJSON *inline_response_202_4JSON){

    inline_response_202_4_t *inline_response_202_4_local_var = NULL;

    // inline_response_202_4->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_202_4->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_202_4->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_202_4->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "size");
    if (!size) {
        goto end;
    }

    
    if(!cJSON_IsString(size))
    {
    goto end; //String
    }

    // inline_response_202_4->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_202_4->product_version
    cJSON *product_version = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "productVersion");
    if (!product_version) {
        goto end;
    }

    
    if(!cJSON_IsString(product_version))
    {
    goto end; //String
    }

    // inline_response_202_4->network_group_id
    cJSON *network_group_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "networkGroupId");
    if (!network_group_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_group_id))
    {
    goto end; //String
    }

    // inline_response_202_4->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_202_4->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // inline_response_202_4->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_202_4->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_202_4->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_202_4->network_controller
    cJSON *network_controller = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "networkController");
    if (!network_controller) {
        goto end;
    }

    inline_response_202_4_network_controller_t *network_controller_local_nonprim = NULL;
    
    network_controller_local_nonprim = inline_response_202_4_network_controller_parseFromJSON(network_controller); //nonprimitive

    // inline_response_202_4->o365_breakout_category
    cJSON *o365_breakout_category = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "o365BreakoutCategory");
    if (!o365_breakout_category) {
        goto end;
    }

    
    if(!cJSON_IsString(o365_breakout_category))
    {
    goto end; //String
    }

    // inline_response_202_4->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_202_4JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_202_4__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_202_4__links_parseFromJSON(_links); //nonprimitive


    inline_response_202_4_local_var = inline_response_202_4_create (
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
        network_controller_local_nonprim,
        strdup(o365_breakout_category->valuestring),
        _links_local_nonprim
        );

    return inline_response_202_4_local_var;
end:
    return NULL;

}
