#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_202_1__links.h"



inline_response_202_1__links_t *inline_response_202_1__links_create(
    inline_response_200__links_network_t *network,
    inline_response_200__links_network_t *process,
    inline_response_200__links_self_t *self
    ) {
    inline_response_202_1__links_t *inline_response_202_1__links_local_var = malloc(sizeof(inline_response_202_1__links_t));
    if (!inline_response_202_1__links_local_var) {
        return NULL;
    }
    inline_response_202_1__links_local_var->network = network;
    inline_response_202_1__links_local_var->process = process;
    inline_response_202_1__links_local_var->self = self;

    return inline_response_202_1__links_local_var;
}


void inline_response_202_1__links_free(inline_response_202_1__links_t *inline_response_202_1__links) {
    if(NULL == inline_response_202_1__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200__links_network_free(inline_response_202_1__links->network);
    inline_response_200__links_network_free(inline_response_202_1__links->process);
    inline_response_200__links_self_free(inline_response_202_1__links->self);
    free(inline_response_202_1__links);
}

cJSON *inline_response_202_1__links_convertToJSON(inline_response_202_1__links_t *inline_response_202_1__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_202_1__links->network
    if (!inline_response_202_1__links->network) {
        goto fail;
    }
    
    cJSON *network_local_JSON = inline_response_200__links_network_convertToJSON(inline_response_202_1__links->network);
    if(network_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "network", network_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_202_1__links->process
    if (!inline_response_202_1__links->process) {
        goto fail;
    }
    
    cJSON *process_local_JSON = inline_response_200__links_network_convertToJSON(inline_response_202_1__links->process);
    if(process_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "process", process_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_202_1__links->self
    if (!inline_response_202_1__links->self) {
        goto fail;
    }
    
    cJSON *self_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_202_1__links->self);
    if(self_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "self", self_local_JSON);
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

inline_response_202_1__links_t *inline_response_202_1__links_parseFromJSON(cJSON *inline_response_202_1__linksJSON){

    inline_response_202_1__links_t *inline_response_202_1__links_local_var = NULL;

    // inline_response_202_1__links->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(inline_response_202_1__linksJSON, "network");
    if (!network) {
        goto end;
    }

    inline_response_200__links_network_t *network_local_nonprim = NULL;
    
    network_local_nonprim = inline_response_200__links_network_parseFromJSON(network); //nonprimitive

    // inline_response_202_1__links->process
    cJSON *process = cJSON_GetObjectItemCaseSensitive(inline_response_202_1__linksJSON, "process");
    if (!process) {
        goto end;
    }

    inline_response_200__links_network_t *process_local_nonprim = NULL;
    
    process_local_nonprim = inline_response_200__links_network_parseFromJSON(process); //nonprimitive

    // inline_response_202_1__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(inline_response_202_1__linksJSON, "self");
    if (!self) {
        goto end;
    }

    inline_response_200__links_self_t *self_local_nonprim = NULL;
    
    self_local_nonprim = inline_response_200__links_self_parseFromJSON(self); //nonprimitive


    inline_response_202_1__links_local_var = inline_response_202_1__links_create (
        network_local_nonprim,
        process_local_nonprim,
        self_local_nonprim
        );

    return inline_response_202_1__links_local_var;
end:
    return NULL;

}
