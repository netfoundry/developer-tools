#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_15__embedded.h"



inline_response_200_15__embedded_t *inline_response_200_15__embedded_create(
    list_t *network_config_metadata_list
    ) {
    inline_response_200_15__embedded_t *inline_response_200_15__embedded_local_var = malloc(sizeof(inline_response_200_15__embedded_t));
    if (!inline_response_200_15__embedded_local_var) {
        return NULL;
    }
    inline_response_200_15__embedded_local_var->network_config_metadata_list = network_config_metadata_list;

    return inline_response_200_15__embedded_local_var;
}


void inline_response_200_15__embedded_free(inline_response_200_15__embedded_t *inline_response_200_15__embedded) {
    if(NULL == inline_response_200_15__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_15__embedded->network_config_metadata_list) {
        inline_response_200_15__embedded_network_config_metadata_list_free(listEntry->data);
    }
    list_free(inline_response_200_15__embedded->network_config_metadata_list);
    free(inline_response_200_15__embedded);
}

cJSON *inline_response_200_15__embedded_convertToJSON(inline_response_200_15__embedded_t *inline_response_200_15__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_15__embedded->network_config_metadata_list
    if (!inline_response_200_15__embedded->network_config_metadata_list) {
        goto fail;
    }
    
    cJSON *network_config_metadata_list = cJSON_AddArrayToObject(item, "networkConfigMetadataList");
    if(network_config_metadata_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *network_config_metadata_listListEntry;
    if (inline_response_200_15__embedded->network_config_metadata_list) {
    list_ForEach(network_config_metadata_listListEntry, inline_response_200_15__embedded->network_config_metadata_list) {
    cJSON *itemLocal = inline_response_200_15__embedded_network_config_metadata_list_convertToJSON(network_config_metadata_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(network_config_metadata_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_15__embedded_t *inline_response_200_15__embedded_parseFromJSON(cJSON *inline_response_200_15__embeddedJSON){

    inline_response_200_15__embedded_t *inline_response_200_15__embedded_local_var = NULL;

    // inline_response_200_15__embedded->network_config_metadata_list
    cJSON *network_config_metadata_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_15__embeddedJSON, "networkConfigMetadataList");
    if (!network_config_metadata_list) {
        goto end;
    }

    list_t *network_config_metadata_listList;
    
    cJSON *network_config_metadata_list_local_nonprimitive;
    if(!cJSON_IsArray(network_config_metadata_list)){
        goto end; //nonprimitive container
    }

    network_config_metadata_listList = list_create();

    cJSON_ArrayForEach(network_config_metadata_list_local_nonprimitive,network_config_metadata_list )
    {
        if(!cJSON_IsObject(network_config_metadata_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_15__embedded_network_config_metadata_list_t *network_config_metadata_listItem = inline_response_200_15__embedded_network_config_metadata_list_parseFromJSON(network_config_metadata_list_local_nonprimitive);

        list_addElement(network_config_metadata_listList, network_config_metadata_listItem);
    }


    inline_response_200_15__embedded_local_var = inline_response_200_15__embedded_create (
        network_config_metadata_listList
        );

    return inline_response_200_15__embedded_local_var;
end:
    return NULL;

}
