#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_11__links.h"



inline_response_200_11__links_t *inline_response_200_11__links_create(
    inline_response_200__links_self_t *azure_subscription,
    inline_response_200__links_self_t *networks,
    inline_response_200__links_self_t *self
    ) {
    inline_response_200_11__links_t *inline_response_200_11__links_local_var = malloc(sizeof(inline_response_200_11__links_t));
    if (!inline_response_200_11__links_local_var) {
        return NULL;
    }
    inline_response_200_11__links_local_var->azure_subscription = azure_subscription;
    inline_response_200_11__links_local_var->networks = networks;
    inline_response_200_11__links_local_var->self = self;

    return inline_response_200_11__links_local_var;
}


void inline_response_200_11__links_free(inline_response_200_11__links_t *inline_response_200_11__links) {
    if(NULL == inline_response_200_11__links){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200__links_self_free(inline_response_200_11__links->azure_subscription);
    inline_response_200__links_self_free(inline_response_200_11__links->networks);
    inline_response_200__links_self_free(inline_response_200_11__links->self);
    free(inline_response_200_11__links);
}

cJSON *inline_response_200_11__links_convertToJSON(inline_response_200_11__links_t *inline_response_200_11__links) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_11__links->azure_subscription
    if (!inline_response_200_11__links->azure_subscription) {
        goto fail;
    }
    
    cJSON *azure_subscription_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_11__links->azure_subscription);
    if(azure_subscription_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureSubscription", azure_subscription_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_11__links->networks
    if (!inline_response_200_11__links->networks) {
        goto fail;
    }
    
    cJSON *networks_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_11__links->networks);
    if(networks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "networks", networks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_11__links->self
    if (!inline_response_200_11__links->self) {
        goto fail;
    }
    
    cJSON *self_local_JSON = inline_response_200__links_self_convertToJSON(inline_response_200_11__links->self);
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

inline_response_200_11__links_t *inline_response_200_11__links_parseFromJSON(cJSON *inline_response_200_11__linksJSON){

    inline_response_200_11__links_t *inline_response_200_11__links_local_var = NULL;

    // inline_response_200_11__links->azure_subscription
    cJSON *azure_subscription = cJSON_GetObjectItemCaseSensitive(inline_response_200_11__linksJSON, "azureSubscription");
    if (!azure_subscription) {
        goto end;
    }

    inline_response_200__links_self_t *azure_subscription_local_nonprim = NULL;
    
    azure_subscription_local_nonprim = inline_response_200__links_self_parseFromJSON(azure_subscription); //nonprimitive

    // inline_response_200_11__links->networks
    cJSON *networks = cJSON_GetObjectItemCaseSensitive(inline_response_200_11__linksJSON, "networks");
    if (!networks) {
        goto end;
    }

    inline_response_200__links_self_t *networks_local_nonprim = NULL;
    
    networks_local_nonprim = inline_response_200__links_self_parseFromJSON(networks); //nonprimitive

    // inline_response_200_11__links->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(inline_response_200_11__linksJSON, "self");
    if (!self) {
        goto end;
    }

    inline_response_200__links_self_t *self_local_nonprim = NULL;
    
    self_local_nonprim = inline_response_200__links_self_parseFromJSON(self); //nonprimitive


    inline_response_200_11__links_local_var = inline_response_200_11__links_create (
        azure_subscription_local_nonprim,
        networks_local_nonprim,
        self_local_nonprim
        );

    return inline_response_200_11__links_local_var;
end:
    return NULL;

}
