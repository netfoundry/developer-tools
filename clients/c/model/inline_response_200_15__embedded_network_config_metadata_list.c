#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_15__embedded_network_config_metadata_list.h"



inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_create(
    double network_controller_volume_size,
    double gateway_volume_size,
    char *name,
    char *gcp_transfer_node_size,
    char *aws_network_controller_size,
    double transfer_node_volume_size,
    char *aws_gateway_size,
    char *ocp_transfer_node_size,
    char *aws_transfer_node_size,
    char *id,
    char *azure_transfer_node_size,
    char *alicloud_transfer_node_size,
    inline_response_200_2__embedded__links_t *_links
    ) {
    inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_local_var = malloc(sizeof(inline_response_200_15__embedded_network_config_metadata_list_t));
    if (!inline_response_200_15__embedded_network_config_metadata_list_local_var) {
        return NULL;
    }
    inline_response_200_15__embedded_network_config_metadata_list_local_var->network_controller_volume_size = network_controller_volume_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->gateway_volume_size = gateway_volume_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->name = name;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->gcp_transfer_node_size = gcp_transfer_node_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->aws_network_controller_size = aws_network_controller_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->transfer_node_volume_size = transfer_node_volume_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->aws_gateway_size = aws_gateway_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->ocp_transfer_node_size = ocp_transfer_node_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->aws_transfer_node_size = aws_transfer_node_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->id = id;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->azure_transfer_node_size = azure_transfer_node_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->alicloud_transfer_node_size = alicloud_transfer_node_size;
    inline_response_200_15__embedded_network_config_metadata_list_local_var->_links = _links;

    return inline_response_200_15__embedded_network_config_metadata_list_local_var;
}


void inline_response_200_15__embedded_network_config_metadata_list_free(inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list) {
    if(NULL == inline_response_200_15__embedded_network_config_metadata_list){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200_15__embedded_network_config_metadata_list->name);
    free(inline_response_200_15__embedded_network_config_metadata_list->gcp_transfer_node_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->aws_network_controller_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->aws_gateway_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->ocp_transfer_node_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->aws_transfer_node_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->id);
    free(inline_response_200_15__embedded_network_config_metadata_list->azure_transfer_node_size);
    free(inline_response_200_15__embedded_network_config_metadata_list->alicloud_transfer_node_size);
    inline_response_200_2__embedded__links_free(inline_response_200_15__embedded_network_config_metadata_list->_links);
    free(inline_response_200_15__embedded_network_config_metadata_list);
}

cJSON *inline_response_200_15__embedded_network_config_metadata_list_convertToJSON(inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_15__embedded_network_config_metadata_list->network_controller_volume_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->network_controller_volume_size) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "networkControllerVolumeSize", inline_response_200_15__embedded_network_config_metadata_list->network_controller_volume_size) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_15__embedded_network_config_metadata_list->gateway_volume_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->gateway_volume_size) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "gatewayVolumeSize", inline_response_200_15__embedded_network_config_metadata_list->gateway_volume_size) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_15__embedded_network_config_metadata_list->name
    if (!inline_response_200_15__embedded_network_config_metadata_list->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", inline_response_200_15__embedded_network_config_metadata_list->name) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->gcp_transfer_node_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->gcp_transfer_node_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "gcpTransferNodeSize", inline_response_200_15__embedded_network_config_metadata_list->gcp_transfer_node_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->aws_network_controller_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->aws_network_controller_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "awsNetworkControllerSize", inline_response_200_15__embedded_network_config_metadata_list->aws_network_controller_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->transfer_node_volume_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->transfer_node_volume_size) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "transferNodeVolumeSize", inline_response_200_15__embedded_network_config_metadata_list->transfer_node_volume_size) == NULL) {
    goto fail; //Numeric
    }


    // inline_response_200_15__embedded_network_config_metadata_list->aws_gateway_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->aws_gateway_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "awsGatewaySize", inline_response_200_15__embedded_network_config_metadata_list->aws_gateway_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->ocp_transfer_node_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->ocp_transfer_node_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ocpTransferNodeSize", inline_response_200_15__embedded_network_config_metadata_list->ocp_transfer_node_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->aws_transfer_node_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->aws_transfer_node_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "awsTransferNodeSize", inline_response_200_15__embedded_network_config_metadata_list->aws_transfer_node_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->id
    if (!inline_response_200_15__embedded_network_config_metadata_list->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", inline_response_200_15__embedded_network_config_metadata_list->id) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->azure_transfer_node_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->azure_transfer_node_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "azureTransferNodeSize", inline_response_200_15__embedded_network_config_metadata_list->azure_transfer_node_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->alicloud_transfer_node_size
    if (!inline_response_200_15__embedded_network_config_metadata_list->alicloud_transfer_node_size) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "alicloudTransferNodeSize", inline_response_200_15__embedded_network_config_metadata_list->alicloud_transfer_node_size) == NULL) {
    goto fail; //String
    }


    // inline_response_200_15__embedded_network_config_metadata_list->_links
    if (!inline_response_200_15__embedded_network_config_metadata_list->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_2__embedded__links_convertToJSON(inline_response_200_15__embedded_network_config_metadata_list->_links);
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

inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_parseFromJSON(cJSON *inline_response_200_15__embedded_network_config_metadata_listJSON){

    inline_response_200_15__embedded_network_config_metadata_list_t *inline_response_200_15__embedded_network_config_metadata_list_local_var = NULL;

    // inline_response_200_15__embedded_network_config_metadata_list->network_controller_volume_size
    cJSON *network_controller_volume_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "networkControllerVolumeSize");
    if (!network_controller_volume_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(network_controller_volume_size))
    {
    goto end; //Numeric
    }

    // inline_response_200_15__embedded_network_config_metadata_list->gateway_volume_size
    cJSON *gateway_volume_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "gatewayVolumeSize");
    if (!gateway_volume_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(gateway_volume_size))
    {
    goto end; //Numeric
    }

    // inline_response_200_15__embedded_network_config_metadata_list->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->gcp_transfer_node_size
    cJSON *gcp_transfer_node_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "gcpTransferNodeSize");
    if (!gcp_transfer_node_size) {
        goto end;
    }

    
    if(!cJSON_IsString(gcp_transfer_node_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->aws_network_controller_size
    cJSON *aws_network_controller_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "awsNetworkControllerSize");
    if (!aws_network_controller_size) {
        goto end;
    }

    
    if(!cJSON_IsString(aws_network_controller_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->transfer_node_volume_size
    cJSON *transfer_node_volume_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "transferNodeVolumeSize");
    if (!transfer_node_volume_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(transfer_node_volume_size))
    {
    goto end; //Numeric
    }

    // inline_response_200_15__embedded_network_config_metadata_list->aws_gateway_size
    cJSON *aws_gateway_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "awsGatewaySize");
    if (!aws_gateway_size) {
        goto end;
    }

    
    if(!cJSON_IsString(aws_gateway_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->ocp_transfer_node_size
    cJSON *ocp_transfer_node_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "ocpTransferNodeSize");
    if (!ocp_transfer_node_size) {
        goto end;
    }

    
    if(!cJSON_IsString(ocp_transfer_node_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->aws_transfer_node_size
    cJSON *aws_transfer_node_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "awsTransferNodeSize");
    if (!aws_transfer_node_size) {
        goto end;
    }

    
    if(!cJSON_IsString(aws_transfer_node_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->azure_transfer_node_size
    cJSON *azure_transfer_node_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "azureTransferNodeSize");
    if (!azure_transfer_node_size) {
        goto end;
    }

    
    if(!cJSON_IsString(azure_transfer_node_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->alicloud_transfer_node_size
    cJSON *alicloud_transfer_node_size = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "alicloudTransferNodeSize");
    if (!alicloud_transfer_node_size) {
        goto end;
    }

    
    if(!cJSON_IsString(alicloud_transfer_node_size))
    {
    goto end; //String
    }

    // inline_response_200_15__embedded_network_config_metadata_list->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embedded_network_config_metadata_listJSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_2__embedded__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_2__embedded__links_parseFromJSON(_links); //nonprimitive


    inline_response_200_15__embedded_network_config_metadata_list_local_var = inline_response_200_15__embedded_network_config_metadata_list_create (
        network_controller_volume_size->valuedouble,
        gateway_volume_size->valuedouble,
        strdup(name->valuestring),
        strdup(gcp_transfer_node_size->valuestring),
        strdup(aws_network_controller_size->valuestring),
        transfer_node_volume_size->valuedouble,
        strdup(aws_gateway_size->valuestring),
        strdup(ocp_transfer_node_size->valuestring),
        strdup(aws_transfer_node_size->valuestring),
        strdup(id->valuestring),
        strdup(azure_transfer_node_size->valuestring),
        strdup(alicloud_transfer_node_size->valuestring),
        _links_local_nonprim
        );

    return inline_response_200_15__embedded_network_config_metadata_list_local_var;
end:
    return NULL;

}
