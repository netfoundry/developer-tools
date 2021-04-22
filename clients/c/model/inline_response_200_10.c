#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_10.h"



inline_response_200_10_t *inline_response_200_10_create(
    inline_response_200_2__embedded__links_t *_links,
    inline_response_200_1_page_t *page
    ) {
    inline_response_200_10_t *inline_response_200_10_local_var = malloc(sizeof(inline_response_200_10_t));
    if (!inline_response_200_10_local_var) {
        return NULL;
    }
    inline_response_200_10_local_var->_links = _links;
    inline_response_200_10_local_var->page = page;

    return inline_response_200_10_local_var;
}


void inline_response_200_10_free(inline_response_200_10_t *inline_response_200_10) {
    if(NULL == inline_response_200_10){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200_2__embedded__links_free(inline_response_200_10->_links);
    inline_response_200_1_page_free(inline_response_200_10->page);
    free(inline_response_200_10);
}

cJSON *inline_response_200_10_convertToJSON(inline_response_200_10_t *inline_response_200_10) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_10->_links
    if (!inline_response_200_10->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_2__embedded__links_convertToJSON(inline_response_200_10->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_10->page
    if (!inline_response_200_10->page) {
        goto fail;
    }
    
    cJSON *page_local_JSON = inline_response_200_1_page_convertToJSON(inline_response_200_10->page);
    if(page_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "page", page_local_JSON);
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

inline_response_200_10_t *inline_response_200_10_parseFromJSON(cJSON *inline_response_200_10JSON){

    inline_response_200_10_t *inline_response_200_10_local_var = NULL;

    // inline_response_200_10->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_10JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_2__embedded__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_2__embedded__links_parseFromJSON(_links); //nonprimitive

    // inline_response_200_10->page
    cJSON *page = cJSON_GetObjectItemCaseSensitive(inline_response_200_10JSON, "page");
    if (!page) {
        goto end;
    }

    inline_response_200_1_page_t *page_local_nonprim = NULL;
    
    page_local_nonprim = inline_response_200_1_page_parseFromJSON(page); //nonprimitive


    inline_response_200_10_local_var = inline_response_200_10_create (
        _links_local_nonprim,
        page_local_nonprim
        );

    return inline_response_200_10_local_var;
end:
    return NULL;

}
