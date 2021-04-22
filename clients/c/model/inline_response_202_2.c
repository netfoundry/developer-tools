#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_2.h"



inline_response_202_2_t *inline_response_202_2_create(
    char *deleted_at,
    char *network_id,
    char *name,
    char *updated_at,
    char *owner_identity_id,
    char *model_type,
    char *id,
    inline_response_202_2_config_id_by_config_type_id_t *config_id_by_config_type_id,
    char *created_at,
    char *created_by,
    char *deleted_by,
    int encryption_required,
    inline_response_202_1__links_t *_links
    ) {
    inline_response_202_2_t *inline_response_202_2_local_var = malloc(sizeof(inline_response_202_2_t));
    if (!inline_response_202_2_local_var) {
        return NULL;
    }
    inline_response_202_2_local_var->deleted_at = deleted_at;
    inline_response_202_2_local_var->network_id = network_id;
    inline_response_202_2_local_var->name = name;
    inline_response_202_2_local_var->updated_at = updated_at;
    inline_response_202_2_local_var->model = model;
    inline_response_202_2_local_var->ziti_id = ziti_id;
    inline_response_202_2_local_var->owner_identity_id = owner_identity_id;
    inline_response_202_2_local_var->attributes = attributes;
    inline_response_202_2_local_var->model_type = model_type;
    inline_response_202_2_local_var->id = id;
    inline_response_202_2_local_var->config_id_by_config_type_id = config_id_by_config_type_id;
    inline_response_202_2_local_var->created_at = created_at;
    inline_response_202_2_local_var->created_by = created_by;
    inline_response_202_2_local_var->deleted_by = deleted_by;
    inline_response_202_2_local_var->encryption_required = encryption_required;
    inline_response_202_2_local_var->authority = authority;
    inline_response_202_2_local_var->_links = _links;

    return inline_response_202_2_local_var;
}


void inline_response_202_2_free(inline_response_202_2_t *inline_response_202_2) {
    if(NULL == inline_response_202_2){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_2->deleted_at);
    free(inline_response_202_2->network_id);
    free(inline_response_202_2->name);
    free(inline_response_202_2->updated_at);
    free(inline_response_202_2->owner_identity_id);
    free(inline_response_202_2->model_type);
    free(inline_response_202_2->id);
    inline_response_202_2_config_id_by_config_type_id_free(inline_response_202_2->config_id_by_config_type_id);
    free(inline_response_202_2->created_at);
    free(inline_response_202_2->created_by);
    free(inline_response_202_2->deleted_by);
    inline_response_202_1__links_free(inline_response_202_2->_links);
    free(inline_response_202_2);
}

cJSON *inline_response_202_2_convertToJSON(inline_response_202_2_t *inline_response_202_2) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_2->deleted_at
    if (!inline_response_202_2->deleted_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "deletedAt", inline_response_202_2->deleted_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->network_id
    if (!inline_response_202_2->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_202_2->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->name
    if (!inline_response_202_2->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_202_2->name) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->updated_at
    if (!inline_response_202_2->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_202_2->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->model
    if (!inline_response_202_2->model) {
        goto fail;
    }
    


    // inline_response_202_2->ziti_id
    if (!inline_response_202_2->ziti_id) {
        goto fail;
    }
    


    // inline_response_202_2->owner_identity_id
    if (!inline_response_202_2->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_202_2->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->attributes
    if (!inline_response_202_2->attributes) {
        goto fail;
    }
    


    // inline_response_202_2->model_type
    if (!inline_response_202_2->model_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "modelType", inline_response_202_2->model_type) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->id
    if (!inline_response_202_2->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_202_2->id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->config_id_by_config_type_id
    if (!inline_response_202_2->config_id_by_config_type_id) {
        goto fail;
    }
    
    cJSON *config_id_by_config_type_id_local_JSON = inline_response_202_2_config_id_by_config_type_id_convertToJSON(inline_response_202_2->config_id_by_config_type_id);
    if(config_id_by_config_type_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configIdByConfigTypeId", config_id_by_config_type_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_202_2->created_at
    if (!inline_response_202_2->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_202_2->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->created_by
    if (!inline_response_202_2->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_202_2->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->deleted_by
    if (!inline_response_202_2->deleted_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "deletedBy", inline_response_202_2->deleted_by) == NULL) {
    goto fail; //String
    }


    // inline_response_202_2->encryption_required
    if (!inline_response_202_2->encryption_required) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "encryptionRequired", inline_response_202_2->encryption_required) == NULL) {
    goto fail; //Bool
    }


    // inline_response_202_2->authority
    if (!inline_response_202_2->authority) {
        goto fail;
    }
    


    // inline_response_202_2->_links
    if (!inline_response_202_2->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_202_1__links_convertToJSON(inline_response_202_2->_links);
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

inline_response_202_2_t *inline_response_202_2_parseFromJSON(cJSON *inline_response_202_2JSON){

    inline_response_202_2_t *inline_response_202_2_local_var = NULL;

    // inline_response_202_2->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }

    
    if(!cJSON_IsString(deleted_at))
    {
    goto end; //String
    }

    // inline_response_202_2->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_202_2->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_202_2->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_202_2->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "model");
    if (!model) {
        goto end;
    }


    // inline_response_202_2->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }


    // inline_response_202_2->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_202_2->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "attributes");
    if (!attributes) {
        goto end;
    }


    // inline_response_202_2->model_type
    cJSON *model_type = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "modelType");
    if (!model_type) {
        goto end;
    }

    
    if(!cJSON_IsString(model_type))
    {
    goto end; //String
    }

    // inline_response_202_2->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_202_2->config_id_by_config_type_id
    cJSON *config_id_by_config_type_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "configIdByConfigTypeId");
    if (!config_id_by_config_type_id) {
        goto end;
    }

    inline_response_202_2_config_id_by_config_type_id_t *config_id_by_config_type_id_local_nonprim = NULL;
    
    config_id_by_config_type_id_local_nonprim = inline_response_202_2_config_id_by_config_type_id_parseFromJSON(config_id_by_config_type_id); //nonprimitive

    // inline_response_202_2->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_202_2->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_202_2->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }

    
    if(!cJSON_IsString(deleted_by))
    {
    goto end; //String
    }

    // inline_response_202_2->encryption_required
    cJSON *encryption_required = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "encryptionRequired");
    if (!encryption_required) {
        goto end;
    }

    
    if(!cJSON_IsBool(encryption_required))
    {
    goto end; //Bool
    }

    // inline_response_202_2->authority
    cJSON *authority = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "authority");
    if (!authority) {
        goto end;
    }


    // inline_response_202_2->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_202_2JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_202_1__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_202_1__links_parseFromJSON(_links); //nonprimitive


    inline_response_202_2_local_var = inline_response_202_2_create (
        strdup(deleted_at->valuestring),
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        strdup(owner_identity_id->valuestring),
        strdup(model_type->valuestring),
        strdup(id->valuestring),
        config_id_by_config_type_id_local_nonprim,
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        strdup(deleted_by->valuestring),
        encryption_required->valueint,
        _links_local_nonprim
        );

    return inline_response_202_2_local_var;
end:
    return NULL;

}
