#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_4_network_controller.h"



inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_create(
    char *network_id,
    char *name,
    char *updated_at,
    char *provider,
    char *domain_name,
    char *provider_id,
    char *id,
    double port,
    char *ip_address,
    char *status,
    char *host_id,
    char *created_at,
    char *location_metadata_id,
    char *data_center_id
    ) {
    inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_local_var = malloc(sizeof(inline_response_202_4_network_controller_t));
    if (!inline_response_202_4_network_controller_local_var) {
        return NULL;
    }
    inline_response_202_4_network_controller_local_var->deleted_at = deleted_at;
    inline_response_202_4_network_controller_local_var->network_id = network_id;
    inline_response_202_4_network_controller_local_var->name = name;
    inline_response_202_4_network_controller_local_var->updated_at = updated_at;
    inline_response_202_4_network_controller_local_var->provider = provider;
    inline_response_202_4_network_controller_local_var->user_data = user_data;
    inline_response_202_4_network_controller_local_var->owner_identity_id = owner_identity_id;
    inline_response_202_4_network_controller_local_var->domain_name = domain_name;
    inline_response_202_4_network_controller_local_var->provider_id = provider_id;
    inline_response_202_4_network_controller_local_var->id = id;
    inline_response_202_4_network_controller_local_var->port = port;
    inline_response_202_4_network_controller_local_var->ip_address = ip_address;
    inline_response_202_4_network_controller_local_var->status = status;
    inline_response_202_4_network_controller_local_var->host_id = host_id;
    inline_response_202_4_network_controller_local_var->created_at = created_at;
    inline_response_202_4_network_controller_local_var->deleted_by = deleted_by;
    inline_response_202_4_network_controller_local_var->location_metadata_id = location_metadata_id;
    inline_response_202_4_network_controller_local_var->data_center_id = data_center_id;

    return inline_response_202_4_network_controller_local_var;
}


void inline_response_202_4_network_controller_free(inline_response_202_4_network_controller_t *inline_response_202_4_network_controller) {
    if(NULL == inline_response_202_4_network_controller){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_202_4_network_controller->network_id);
    free(inline_response_202_4_network_controller->name);
    free(inline_response_202_4_network_controller->updated_at);
    free(inline_response_202_4_network_controller->provider);
    free(inline_response_202_4_network_controller->domain_name);
    free(inline_response_202_4_network_controller->provider_id);
    free(inline_response_202_4_network_controller->id);
    free(inline_response_202_4_network_controller->ip_address);
    free(inline_response_202_4_network_controller->status);
    free(inline_response_202_4_network_controller->host_id);
    free(inline_response_202_4_network_controller->created_at);
    free(inline_response_202_4_network_controller->location_metadata_id);
    free(inline_response_202_4_network_controller->data_center_id);
    free(inline_response_202_4_network_controller);
}

cJSON *inline_response_202_4_network_controller_convertToJSON(inline_response_202_4_network_controller_t *inline_response_202_4_network_controller) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_4_network_controller->deleted_at
    if (!inline_response_202_4_network_controller->deleted_at) {
        goto fail;
    }
    


    // inline_response_202_4_network_controller->network_id
    if (!inline_response_202_4_network_controller->network_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "networkId", inline_response_202_4_network_controller->network_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->name
    if (!inline_response_202_4_network_controller->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_202_4_network_controller->name) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->updated_at
    if (!inline_response_202_4_network_controller->updated_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "updatedAt", inline_response_202_4_network_controller->updated_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->provider
    if (!inline_response_202_4_network_controller->provider) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "provider", inline_response_202_4_network_controller->provider) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->user_data
    if (!inline_response_202_4_network_controller->user_data) {
        goto fail;
    }
    


    // inline_response_202_4_network_controller->owner_identity_id
    if (!inline_response_202_4_network_controller->owner_identity_id) {
        goto fail;
    }
    


    // inline_response_202_4_network_controller->domain_name
    if (!inline_response_202_4_network_controller->domain_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "domainName", inline_response_202_4_network_controller->domain_name) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->provider_id
    if (!inline_response_202_4_network_controller->provider_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "providerId", inline_response_202_4_network_controller->provider_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->id
    if (!inline_response_202_4_network_controller->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_202_4_network_controller->id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->port
    if (!inline_response_202_4_network_controller->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "port", inline_response_202_4_network_controller->port) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_202_4_network_controller->ip_address
    if (!inline_response_202_4_network_controller->ip_address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ipAddress", inline_response_202_4_network_controller->ip_address) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->status
    if (!inline_response_202_4_network_controller->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", inline_response_202_4_network_controller->status) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->host_id
    if (!inline_response_202_4_network_controller->host_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "hostId", inline_response_202_4_network_controller->host_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->created_at
    if (!inline_response_202_4_network_controller->created_at) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "createdAt", inline_response_202_4_network_controller->created_at) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->deleted_by
    if (!inline_response_202_4_network_controller->deleted_by) {
        goto fail;
    }
    


    // inline_response_202_4_network_controller->location_metadata_id
    if (!inline_response_202_4_network_controller->location_metadata_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "locationMetadataId", inline_response_202_4_network_controller->location_metadata_id) == NULL) {
    goto fail; //String
    }


    // inline_response_202_4_network_controller->data_center_id
    if (!inline_response_202_4_network_controller->data_center_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dataCenterId", inline_response_202_4_network_controller->data_center_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_parseFromJSON(cJSON *inline_response_202_4_network_controllerJSON){

    inline_response_202_4_network_controller_t *inline_response_202_4_network_controller_local_var = NULL;

    // inline_response_202_4_network_controller->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "deletedAt");
    if (!deleted_at) {
        goto end;
    }


    // inline_response_202_4_network_controller->network_id
    cJSON *network_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "networkId");
    if (!network_id) {
        goto end;
    }

    
    if(!cJSON_IsString(network_id))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "updatedAt");
    if (!updated_at) {
        goto end;
    }

    
    if(!cJSON_IsString(updated_at))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->provider
    cJSON *provider = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "provider");
    if (!provider) {
        goto end;
    }

    
    if(!cJSON_IsString(provider))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->user_data
    cJSON *user_data = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "userData");
    if (!user_data) {
        goto end;
    }


    // inline_response_202_4_network_controller->owner_identity_id
    cJSON *owner_identity_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "ownerIdentityId");
    if (!owner_identity_id) {
        goto end;
    }


    // inline_response_202_4_network_controller->domain_name
    cJSON *domain_name = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "domainName");
    if (!domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(domain_name))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->provider_id
    cJSON *provider_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "providerId");
    if (!provider_id) {
        goto end;
    }

    
    if(!cJSON_IsString(provider_id))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }

    // inline_response_202_4_network_controller->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "ipAddress");
    if (!ip_address) {
        goto end;
    }

    
    if(!cJSON_IsString(ip_address))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->host_id
    cJSON *host_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "hostId");
    if (!host_id) {
        goto end;
    }

    
    if(!cJSON_IsString(host_id))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "createdAt");
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->deleted_by
    cJSON *deleted_by = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "deletedBy");
    if (!deleted_by) {
        goto end;
    }


    // inline_response_202_4_network_controller->location_metadata_id
    cJSON *location_metadata_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "locationMetadataId");
    if (!location_metadata_id) {
        goto end;
    }

    
    if(!cJSON_IsString(location_metadata_id))
    {
    goto end; //String
    }

    // inline_response_202_4_network_controller->data_center_id
    cJSON *data_center_id = cJSON_GetObjectItemCaseSensitive(inline_response_202_4_network_controllerJSON, "dataCenterId");
    if (!data_center_id) {
        goto end;
    }

    
    if(!cJSON_IsString(data_center_id))
    {
    goto end; //String
    }


    inline_response_202_4_network_controller_local_var = inline_response_202_4_network_controller_create (
        strdup(network_id->valuestring),
        strdup(name->valuestring),
        strdup(updated_at->valuestring),
        strdup(provider->valuestring),
        strdup(domain_name->valuestring),
        strdup(provider_id->valuestring),
        strdup(id->valuestring),
        port->valuedouble,
        strdup(ip_address->valuestring),
        strdup(status->valuestring),
        strdup(host_id->valuestring),
        strdup(created_at->valuestring),
        strdup(location_metadata_id->valuestring),
        strdup(data_center_id->valuestring)
        );

    return inline_response_202_4_network_controller_local_var;
end:
    return NULL;

}
