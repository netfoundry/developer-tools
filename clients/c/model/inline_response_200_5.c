#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_5.h"



inline_response_200_5_t *inline_response_200_5_create(
    char *network_id,
    char *name,
    char *updated_at,
    inline_response_200_3__embedded_model_t *model,
    char *ziti_id,
    char *owner_identity_id,
    list_t *attributes,
    char *model_type,
    char *id,
    inline_response_200_5_config_id_by_config_type_id_t *config_id_by_config_type_id,
    char *created_at,
    char *created_by,
    int encryption_required,
    inline_response_200__links_t *_links
    ) {
    inline_response_200_5_t *inline_response_200_5_local_var = malloc(sizeof(inline_response_200_5_t));
    if (!inline_response_200_5_local_var) {
        return NULL;
    }
    inline_response_200_5_local_var->deleted_at = deleted_at;
    inline_response_200_5_local_var->network_id = network_id;
    inline_response_200_5_local_var->name = name;
    inline_response_200_5_local_var->updated_at = updated_at;
    inline_response_200_5_local_var->model = model;
    inline_response_200_5_local_var->ziti_id = ziti_id;
    inline_response_200_5_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_5_local_var->attributes = attributes;
    inline_response_200_5_local_var->model_type = model_type;
    inline_response_200_5_local_var->id = id;
    inline_response_200_5_local_var->config_id_by_config_type_id = config_id_by_config_type_id;
    inline_response_200_5_local_var->created_at = created_at;
    inline_response_200_5_local_var->created_by = created_by;
    inline_response_200_5_local_var->deleted_by = deleted_by;
    inline_response_200_5_local_var->encryption_required = encryption_required;
    inline_response_200_5_local_var->authority = authority;
    inline_response_200_5_local_var->_links = _links;

    return inline_response_200_5_local_var;
}


void inline_response_200_5_free(inline_response_200_5_t *inline_response_200_5) {
    if(NULL == inline_response_200_5){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_5->network_id);
    free(inline_response_200_5->name);
    free(inline_response_200_5->updated_at);
    inline_response_200_3__embedded_model_free(inline_response_200_5->model);
    free(inline_response_200_5->ziti_id);
    free(inline_response_200_5->owner_identity_id);
    list_ForEach(listEntry, inline_response_200_5->attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200_5->attributes);
    free(inline_response_200_5->model_type);
    free(inline_response_200_5->id);
    inline_response_200_5_config_id_by_config_type_id_free(inline_response_200_5->config_id_by_config_type_id);
    free(inline_response_200_5->created_at);
    free(inline_response_200_5->created_by);
    inline_response_200__links_free(inline_response_200_5->_links);
    free(inline_response_200_5);
}

cJSON *inline_response_200_5_convertToJSON(inline_response_200_5_t *inline_response_200_5) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_5->deleted_at
    if (!inline_response_200_5->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_5->network_id
    if (!inline_response_200_5->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_200_5->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->name
    if (!inline_response_200_5->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_5->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->updated_at
    if (!inline_response_200_5->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_5->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->model
    if (!inline_response_200_5->model) {
        goto fail;
    }
    
    cJSON *model_local_JSON = inline_response_200_3__embedded_model_convertToJSON(inline_response_200_5->model);
    if(model_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "model", model_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_5->ziti_id
    if (!inline_response_200_5->ziti_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiId", inline_response_200_5->ziti_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->owner_identity_id
    if (!inline_response_200_5->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200_5->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->attributes
    if (!inline_response_200_5->attributes) {
        goto fail;
    }
    
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attributesListEntry;
    list_ForEach(attributesListEntry, inline_response_200_5->attributes) {
    if(cJSON_AddStringToObject(attributes, "", (char*)attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200_5->model_type
    if (!inline_response_200_5->model_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "modelType", inline_response_200_5->model_type) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->id
    if (!inline_response_200_5->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_5->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->config_id_by_config_type_id
    if (!inline_response_200_5->config_id_by_config_type_id) {
        goto fail;
    }
    
    cJSON *config_id_by_config_type_id_local_JSON = inline_response_200_5_config_id_by_config_type_id_convertToJSON(inline_response_200_5->config_id_by_config_type_id);
    if(config_id_by_config_type_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configIdByConfigTypeId", config_id_by_config_type_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_5->created_at
    if (!inline_response_200_5->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_5->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->created_by
    if (!inline_response_200_5->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200_5->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200_5->deleted_by
    if (!inline_response_200_5->deleted_by) {
        goto fail;
    }
    


    // inline_response_200_5->encryption_required
    if (!inline_response_200_5->encryption_required) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "encryptionRequired", inline_response_200_5->encryption_required) == NULL) {
    goto fail; //Bool
    }


    // inline_response_200_5->authority
    if (!inline_response_200_5->authority) {
        goto fail;
    }
    


    // inline_response_200_5->_links
    if (!inline_response_200_5->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200__links_convertToJSON(inline_response_200_5->_links);
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

inline_response_200_5_t *inline_response_200_5_parseFromJSON(cJSON *inline_response_200_5JSON){

    inline_response_200_5_t *inline_response_200_5_local_var = NULL;

    // inline_response_200_5->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_5->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_200_5->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_5->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_5->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "model");
    if (!model) {
        goto end;
    }

    inline_response_200_3__embedded_model_t *model_local_nonprim = NULL;
    
    model_local_nonprim = inline_response_200_3__embedded_model_parseFromJSON(model); //nonprimitive

    // inline_response_200_5->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_id))
    {
    goto end; //String
    }

    // inline_response_200_5->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200_5->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "attributes");
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

    // inline_response_200_5->model_type
    cJSON *model_type = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "modelType");
    if (!model_type) {
        goto end;
    }

    
    if(!cJSON_IsString(model_type))
    {
    goto end; //String
    }

    // inline_response_200_5->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_5->config_id_by_config_type_id
    cJSON *config_id_by_config_type_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "configIdByConfigTypeId");
    if (!config_id_by_config_type_id) {
        goto end;
    }

    inline_response_200_5_config_id_by_config_type_id_t *config_id_by_config_type_id_local_nonprim = NULL;
    
    config_id_by_config_type_id_local_nonprim = inline_response_200_5_config_id_by_config_type_id_parseFromJSON(config_id_by_config_type_id); //nonprimitive

    // inline_response_200_5->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_5->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200_5->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200_5->encryption_required
    cJSON *encryption_required = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "encryptionRequired");
    if (!encryption_required) {
        goto end;
    }

    
    if(!cJSON_IsBool(encryption_required))
    {
    goto end; //Bool
    }

    // inline_response_200_5->authority
    cJSON *authority = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "authority");
    if (!authority) {
        goto end;
    }


    // inline_response_200_5->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_5JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_5_local_var = inline_response_200_5_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        model_local_nonprim,
        strdup(ziti_id->valuestring),
        strdup(owner_identity_id->valuestring),
        attributesList,
        strdup(model_type->valuestring),
        strdup(id->valuestring),
        config_id_by_config_type_id_local_nonprim,
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        encryption_required->valueint,
        _links_local_nonprim
        );

    return inline_response_200_5_local_var;
end:
    return NULL;

}
