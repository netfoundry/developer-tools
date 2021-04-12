#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_4__embedded_edge_router_policy_list.h"



inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_create(
    char *network_id,
    char *name,
    list_t *edge_router_attributes,
    char *updated_at,
    char *ziti_id,
    char *owner_identity_id,
    char *id,
    char *created_at,
    char *created_by,
    list_t *endpoint_attributes,
    inline_response_200__links_t *_links
    ) {
    inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_local_var = malloc(sizeof(inline_response_200_4__embedded_edge_router_policy_list_t));
    if (!inline_response_200_4__embedded_edge_router_policy_list_local_var) {
        return NULL;
    }
    inline_response_200_4__embedded_edge_router_policy_list_local_var->deleted_at = deleted_at;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->network_id = network_id;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->name = name;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->edge_router_attributes = edge_router_attributes;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->updated_at = updated_at;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->ziti_id = ziti_id;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->owner_identity_id = owner_identity_id;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->id = id;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->created_at = created_at;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->created_by = created_by;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->deleted_by = deleted_by;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->endpoint_attributes = endpoint_attributes;
    inline_response_200_4__embedded_edge_router_policy_list_local_var->_links = _links;

    return inline_response_200_4__embedded_edge_router_policy_list_local_var;
}


void inline_response_200_4__embedded_edge_router_policy_list_free(inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list) {
    if(NULL == inline_response_200_4__embedded_edge_router_policy_list){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_4__embedded_edge_router_policy_list->network_id);
    free(inline_response_200_4__embedded_edge_router_policy_list->name);
    list_ForEach(listEntry, inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes);
    free(inline_response_200_4__embedded_edge_router_policy_list->updated_at);
    free(inline_response_200_4__embedded_edge_router_policy_list->ziti_id);
    free(inline_response_200_4__embedded_edge_router_policy_list->owner_identity_id);
    free(inline_response_200_4__embedded_edge_router_policy_list->id);
    free(inline_response_200_4__embedded_edge_router_policy_list->created_at);
    free(inline_response_200_4__embedded_edge_router_policy_list->created_by);
    list_ForEach(listEntry, inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes) {
        free(listEntry->data);
    }
    list_free(inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes);
    inline_response_200__links_free(inline_response_200_4__embedded_edge_router_policy_list->_links);
    free(inline_response_200_4__embedded_edge_router_policy_list);
}

cJSON *inline_response_200_4__embedded_edge_router_policy_list_convertToJSON(inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_4__embedded_edge_router_policy_list->deleted_at
    if (!inline_response_200_4__embedded_edge_router_policy_list->deleted_at) {
        goto fail;
    }
    


    // inline_response_200_4__embedded_edge_router_policy_list->network_id
    if (!inline_response_200_4__embedded_edge_router_policy_list->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_200_4__embedded_edge_router_policy_list->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->name
    if (!inline_response_200_4__embedded_edge_router_policy_list->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_4__embedded_edge_router_policy_list->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes
    if (!inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes) {
        goto fail;
    }
    
    cJSON *edge_router_attributes = cJSON_AddArrayToObject(item, "edgeRouterAttributes");
    if(edge_router_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *edge_router_attributesListEntry;
    list_ForEach(edge_router_attributesListEntry, inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes) {
    if(cJSON_AddStringToObject(edge_router_attributes, "", (char*)edge_router_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200_4__embedded_edge_router_policy_list->updated_at
    if (!inline_response_200_4__embedded_edge_router_policy_list->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_200_4__embedded_edge_router_policy_list->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->ziti_id
    if (!inline_response_200_4__embedded_edge_router_policy_list->ziti_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "zitiId", inline_response_200_4__embedded_edge_router_policy_list->ziti_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->owner_identity_id
    if (!inline_response_200_4__embedded_edge_router_policy_list->owner_identity_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ownerIdentityId", inline_response_200_4__embedded_edge_router_policy_list->owner_identity_id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->id
    if (!inline_response_200_4__embedded_edge_router_policy_list->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_4__embedded_edge_router_policy_list->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->created_at
    if (!inline_response_200_4__embedded_edge_router_policy_list->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_200_4__embedded_edge_router_policy_list->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->created_by
    if (!inline_response_200_4__embedded_edge_router_policy_list->created_by) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdBy", inline_response_200_4__embedded_edge_router_policy_list->created_by) == NULL) {
    goto fail; //String
    }


    // inline_response_200_4__embedded_edge_router_policy_list->deleted_by
    if (!inline_response_200_4__embedded_edge_router_policy_list->deleted_by) {
        goto fail;
    }
    


    // inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes
    if (!inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes) {
        goto fail;
    }
    
    cJSON *endpoint_attributes = cJSON_AddArrayToObject(item, "endpointAttributes");
    if(endpoint_attributes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *endpoint_attributesListEntry;
    list_ForEach(endpoint_attributesListEntry, inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes) {
    if(cJSON_AddStringToObject(endpoint_attributes, "", (char*)endpoint_attributesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // inline_response_200_4__embedded_edge_router_policy_list->_links
    if (!inline_response_200_4__embedded_edge_router_policy_list->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200__links_convertToJSON(inline_response_200_4__embedded_edge_router_policy_list->_links);
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

inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_parseFromJSON(cJSON *inline_response_200_4__embedded_edge_router_policy_listJSON){

    inline_response_200_4__embedded_edge_router_policy_list_t *inline_response_200_4__embedded_edge_router_policy_list_local_var = NULL;

    // inline_response_200_4__embedded_edge_router_policy_list->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_200_4__embedded_edge_router_policy_list->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->edge_router_attributes
    cJSON *edge_router_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "edgeRouterAttributes");
    if (!edge_router_attributes) {
        goto end;
    }

    list_t *edge_router_attributesList;
    
    cJSON *edge_router_attributes_local;
    if(!cJSON_IsArray(edge_router_attributes)) {
        goto end;//primitive container
    }
    edge_router_attributesList = list_create();

    cJSON_ArrayForEach(edge_router_attributes_local, edge_router_attributes)
    {
        if(!cJSON_IsString(edge_router_attributes_local))
        {
            goto end;
        }
        list_addElement(edge_router_attributesList , strdup(edge_router_attributes_local->valuestring));
    }

    // inline_response_200_4__embedded_edge_router_policy_list->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->ziti_id
    cJSON *ziti_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "zitiId");
    if (!ziti_id) {
        goto end;
    }

    
    if(!cJSON_IsString(ziti_id))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }

    
    if(!cJSON_IsString(owner_identity_id))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->created_by
    cJSON *created_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "createdBy");
    if (!created_by) {
        goto end;
    }

    
    if(!cJSON_IsString(created_by))
    {
    goto end; //String
    }

    // inline_response_200_4__embedded_edge_router_policy_list->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_200_4__embedded_edge_router_policy_list->endpoint_attributes
    cJSON *endpoint_attributes = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "endpointAttributes");
    if (!endpoint_attributes) {
        goto end;
    }

    list_t *endpoint_attributesList;
    
    cJSON *endpoint_attributes_local;
    if(!cJSON_IsArray(endpoint_attributes)) {
        goto end;//primitive container
    }
    endpoint_attributesList = list_create();

    cJSON_ArrayForEach(endpoint_attributes_local, endpoint_attributes)
    {
        if(!cJSON_IsString(endpoint_attributes_local))
        {
            goto end;
        }
        list_addElement(endpoint_attributesList , strdup(endpoint_attributes_local->valuestring));
    }

    // inline_response_200_4__embedded_edge_router_policy_list->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embedded_edge_router_policy_listJSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_4__embedded_edge_router_policy_list_local_var = inline_response_200_4__embedded_edge_router_policy_list_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        edge_router_attributesList,
        strdup(updated_at->valuestring),
        strdup(ziti_id->valuestring),
        strdup(owner_identity_id->valuestring),
        strdup(id->valuestring),
        strdup(created_at->valuestring),
        strdup(created_by->valuestring),
        endpoint_attributesList,
        _links_local_nonprim
        );

    return inline_response_200_4__embedded_edge_router_policy_list_local_var;
end:
    return NULL;

}
