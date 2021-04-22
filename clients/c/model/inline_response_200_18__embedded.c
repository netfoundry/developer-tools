#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_18__embedded.h"



inline_response_200_18__embedded_t *inline_response_200_18__embedded_create(
    list_t *edge_router_list
    ) {
    inline_response_200_18__embedded_t *inline_response_200_18__embedded_local_var = malloc(sizeof(inline_response_200_18__embedded_t));
    if (!inline_response_200_18__embedded_local_var) {
        return NULL;
    }
    inline_response_200_18__embedded_local_var->edge_router_list = edge_router_list;

    return inline_response_200_18__embedded_local_var;
}


void inline_response_200_18__embedded_free(inline_response_200_18__embedded_t *inline_response_200_18__embedded) {
    if(NULL == inline_response_200_18__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_18__embedded->edge_router_list) {
        inline_response_200_12_free(listEntry->data);
    }
    list_free(inline_response_200_18__embedded->edge_router_list);
    free(inline_response_200_18__embedded);
}

cJSON *inline_response_200_18__embedded_convertToJSON(inline_response_200_18__embedded_t *inline_response_200_18__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_18__embedded->edge_router_list
    if (!inline_response_200_18__embedded->edge_router_list) {
        goto fail;
    }
    
    cJSON *edge_router_list = cJSON_AddArrayToObject(item, "edgeRouterList");
    if(edge_router_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *edge_router_listListEntry;
    if (inline_response_200_18__embedded->edge_router_list) {
    list_ForEach(edge_router_listListEntry, inline_response_200_18__embedded->edge_router_list) {
    cJSON *itemLocal = inline_response_200_12_convertToJSON(edge_router_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(edge_router_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_18__embedded_t *inline_response_200_18__embedded_parseFromJSON(cJSON *inline_response_200_18__embeddedJSON){

    inline_response_200_18__embedded_t *inline_response_200_18__embedded_local_var = NULL;

    // inline_response_200_18__embedded->edge_router_list
    cJSON *edge_router_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_18__embeddedJSON, "edgeRouterList");
    if (!edge_router_list) {
        goto end;
    }

    list_t *edge_router_listList;
    
    cJSON *edge_router_list_local_nonprimitive;
    if(!cJSON_IsArray(edge_router_list)){
        goto end; //nonprimitive container
    }

    edge_router_listList = list_create();

    cJSON_ArrayForEach(edge_router_list_local_nonprimitive,edge_router_list )
    {
        if(!cJSON_IsObject(edge_router_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_12_t *edge_router_listItem = inline_response_200_12_parseFromJSON(edge_router_list_local_nonprimitive);

        list_addElement(edge_router_listList, edge_router_listItem);
    }


    inline_response_200_18__embedded_local_var = inline_response_200_18__embedded_create (
        edge_router_listList
        );

    return inline_response_200_18__embedded_local_var;
end:
    return NULL;

}
