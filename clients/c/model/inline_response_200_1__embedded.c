#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_1__embedded.h"



inline_response_200_1__embedded_t *inline_response_200_1__embedded_create(
    list_t *network_list
    ) {
    inline_response_200_1__embedded_t *inline_response_200_1__embedded_local_var = malloc(sizeof(inline_response_200_1__embedded_t));
    if (!inline_response_200_1__embedded_local_var) {
        return NULL;
    }
    inline_response_200_1__embedded_local_var->network_list = network_list;

    return inline_response_200_1__embedded_local_var;
}


void inline_response_200_1__embedded_free(inline_response_200_1__embedded_t *inline_response_200_1__embedded) {
    if(NULL == inline_response_200_1__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_1__embedded->network_list) {
        inline_response_200_1__embedded_network_list_free(listEntry->data);
    }
    list_free(inline_response_200_1__embedded->network_list);
    free(inline_response_200_1__embedded);
}

cJSON *inline_response_200_1__embedded_convertToJSON(inline_response_200_1__embedded_t *inline_response_200_1__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_1__embedded->network_list
    if (!inline_response_200_1__embedded->network_list) {
        goto fail;
    }
    
    cJSON *network_list = cJSON_AddArrayToObject(item, "networkList");
    if(network_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *network_listListEntry;
    if (inline_response_200_1__embedded->network_list) {
    list_ForEach(network_listListEntry, inline_response_200_1__embedded->network_list) {
    cJSON *itemLocal = inline_response_200_1__embedded_network_list_convertToJSON(network_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(network_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_1__embedded_t *inline_response_200_1__embedded_parseFromJSON(cJSON *inline_response_200_1__embeddedJSON){

    inline_response_200_1__embedded_t *inline_response_200_1__embedded_local_var = NULL;

    // inline_response_200_1__embedded->network_list
    cJSON *network_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_1__embeddedJSON, "networkList");
    if (!network_list) {
        goto end;
    }

    list_t *network_listList;
    
    cJSON *network_list_local_nonprimitive;
    if(!cJSON_IsArray(network_list)){
        goto end; //nonprimitive container
    }

    network_listList = list_create();

    cJSON_ArrayForEach(network_list_local_nonprimitive,network_list )
    {
        if(!cJSON_IsObject(network_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_1__embedded_network_list_t *network_listItem = inline_response_200_1__embedded_network_list_parseFromJSON(network_list_local_nonprimitive);

        list_addElement(network_listList, network_listItem);
    }


    inline_response_200_1__embedded_local_var = inline_response_200_1__embedded_create (
        network_listList
        );

    return inline_response_200_1__embedded_local_var;
end:
    return NULL;

}
