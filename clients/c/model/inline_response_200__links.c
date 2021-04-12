#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200__links.h"



inline_response_200__links_t *inline_response_200__links_create(
    inline_response_200__links_network_t *network,
    inline_response_200__links_self_t *self
    ) {
    inline_response_200__links_t *inline_response_200__links_local_var = malloc(sizeof(inline_response_200__links_t));
    if (!inline_response_200__links_local_var) {
        return NULL;
    }
    inline_response_200__links_local_var->network = network;
    inline_response_200__links_local_var->self = self;

    return inline_response_200__links_local_var;
}


void inline_response_200__links_free(inline_response_200__links_t *inline_response_200__links) {
    if(NULL == inline_response_200__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200__links_network_free(inline_response_200__links->network);
    inline_response_200__links_self_free(inline_response_200__links->self);
    free(inline_response_200__links);
}

cJSON *inline_response_200__links_convertToJSON(inline_response_200__links_t *inline_response_200__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200__links->network
    if (!inline_response_200__links->network) {
        goto fail;
    }
    
    cJSON *network_local_JSON = inline_response_200__links_network_convertToJSON(inline_response_200__links->network);
    if(network_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "network", network_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200__links->self
    if (!inline_response_200__links->self) {
        goto fail;
    }
    
    cJSON *self_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200__links->self);
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

inline_response_200__links_t *inline_response_200__links_parseFromJSON(cJSON *inline_response_200__linksJSON){

    inline_response_200__links_t *inline_response_200__links_local_var = NULL;

    // inline_response_200__links->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(inline_response_200__linksJSON, "network");
    if (!network) {
        goto end;
    }

    inline_response_200__links_network_t *network_local_nonprim = NULL;
    
    network_local_nonprim = inline_response_200__links_network_parseFromJSON(network); //nonprimitive

    // inline_response_200__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(inline_response_200__linksJSON, "self");
    if (!self) {
        goto end;
    }

    inline_response_200__links_self_t *self_local_nonprim = NULL;
    
    self_local_nonprim = inline_response_200__links_self_parseFromJSON(self); //nonprimitive


    inline_response_200__links_local_var = inline_response_200__links_create (
        network_local_nonprim,
        self_local_nonprim
        );

    return inline_response_200__links_local_var;
end:
    return NULL;

}
