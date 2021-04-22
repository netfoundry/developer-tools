#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_4__embedded.h"



inline_response_200_4__embedded_t *inline_response_200_4__embedded_create(
    list_t *edge_router_policy_list
    ) {
    inline_response_200_4__embedded_t *inline_response_200_4__embedded_local_var = malloc(sizeof(inline_response_200_4__embedded_t));
    if (!inline_response_200_4__embedded_local_var) {
        return NULL;
    }
    inline_response_200_4__embedded_local_var->edge_router_policy_list = edge_router_policy_list;

    return inline_response_200_4__embedded_local_var;
}


void inline_response_200_4__embedded_free(inline_response_200_4__embedded_t *inline_response_200_4__embedded) {
    if(NULL == inline_response_200_4__embedded){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, inline_response_200_4__embedded->edge_router_policy_list) {
        inline_response_200_4__embedded_edge_router_policy_list_free(listEntry->data);
    }
    list_free(inline_response_200_4__embedded->edge_router_policy_list);
    free(inline_response_200_4__embedded);
}

cJSON *inline_response_200_4__embedded_convertToJSON(inline_response_200_4__embedded_t *inline_response_200_4__embedded) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_4__embedded->edge_router_policy_list
    if (!inline_response_200_4__embedded->edge_router_policy_list) {
        goto fail;
    }
    
    cJSON *edge_router_policy_list = cJSON_AddArrayToObject(item, "edgeRouterPolicyList");
    if(edge_router_policy_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *edge_router_policy_listListEntry;
    if (inline_response_200_4__embedded->edge_router_policy_list) {
    list_ForEach(edge_router_policy_listListEntry, inline_response_200_4__embedded->edge_router_policy_list) {
    cJSON *itemLocal = inline_response_200_4__embedded_edge_router_policy_list_convertToJSON(edge_router_policy_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(edge_router_policy_list, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200_4__embedded_t *inline_response_200_4__embedded_parseFromJSON(cJSON *inline_response_200_4__embeddedJSON){

    inline_response_200_4__embedded_t *inline_response_200_4__embedded_local_var = NULL;

    // inline_response_200_4__embedded->edge_router_policy_list
    cJSON *edge_router_policy_list = cJSON_GetObjectItemCaseSensitive(inline_response_200_4__embeddedJSON, "edgeRouterPolicyList");
    if (!edge_router_policy_list) {
        goto end;
    }

    list_t *edge_router_policy_listList;
    
    cJSON *edge_router_policy_list_local_nonprimitive;
    if(!cJSON_IsArray(edge_router_policy_list)){
        goto end; //nonprimitive container
    }

    edge_router_policy_listList = list_create();

    cJSON_ArrayForEach(edge_router_policy_list_local_nonprimitive,edge_router_policy_list )
    {
        if(!cJSON_IsObject(edge_router_policy_list_local_nonprimitive)){
            goto end;
        }
        inline_response_200_4__embedded_edge_router_policy_list_t *edge_router_policy_listItem = inline_response_200_4__embedded_edge_router_policy_list_parseFromJSON(edge_router_policy_list_local_nonprimitive);

        list_addElement(edge_router_policy_listList, edge_router_policy_listItem);
    }


    inline_response_200_4__embedded_local_var = inline_response_200_4__embedded_create (
        edge_router_policy_listList
        );

    return inline_response_200_4__embedded_local_var;
end:
    return NULL;

}
