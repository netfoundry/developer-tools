#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200__links_network.h"



inline_response_200__links_network_t *inline_response_200__links_network_create(
    char *href,
    char *profile
    ) {
    inline_response_200__links_network_t *inline_response_200__links_network_local_var = malloc(sizeof(inline_response_200__links_network_t));
    if (!inline_response_200__links_network_local_var) {
        return NULL;
    }
    inline_response_200__links_network_local_var->href = href;
    inline_response_200__links_network_local_var->profile = profile;

    return inline_response_200__links_network_local_var;
}


void inline_response_200__links_network_free(inline_response_200__links_network_t *inline_response_200__links_network) {
    if(NULL == inline_response_200__links_network){
        return ;
    }
    listEntry_t *listEntry;
    free(inline_response_200__links_network->href);
    free(inline_response_200__links_network->profile);
    free(inline_response_200__links_network);
}

cJSON *inline_response_200__links_network_convertToJSON(inline_response_200__links_network_t *inline_response_200__links_network) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200__links_network->href
    if (!inline_response_200__links_network->href) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "href", inline_response_200__links_network->href) == NULL) {
    goto fail; //String
    }


    // inline_response_200__links_network->profile
    if (!inline_response_200__links_network->profile) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "profile", inline_response_200__links_network->profile) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inline_response_200__links_network_t *inline_response_200__links_network_parseFromJSON(cJSON *inline_response_200__links_networkJSON){

    inline_response_200__links_network_t *inline_response_200__links_network_local_var = NULL;

    // inline_response_200__links_network->href
    cJSON *href = cJSON_GetObjectItemCaseSensitive(inline_response_200__links_networkJSON, "href");
    if (!href) {
        goto end;
    }

    
    if(!cJSON_IsString(href))
    {
    goto end; //String
    }

    // inline_response_200__links_network->profile
    cJSON *profile = cJSON_GetObjectItemCaseSensitive(inline_response_200__links_networkJSON, "profile");
    if (!profile) {
        goto end;
    }

    
    if(!cJSON_IsString(profile))
    {
    goto end; //String
    }


    inline_response_200__links_network_local_var = inline_response_200__links_network_create (
        strdup(href->valuestring),
        strdup(profile->valuestring)
        );

    return inline_response_200__links_network_local_var;
end:
    return NULL;

}
