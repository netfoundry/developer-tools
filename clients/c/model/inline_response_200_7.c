#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inline_response_200_7.h"



inline_response_200_7_t *inline_response_200_7_create(
    inline_response_200_7__embedded_t *_embedded,
    inline_response_200_2__embedded__links_t *_links,
    inline_response_200_1_page_t *page
    ) {
    inline_response_200_7_t *inline_response_200_7_local_var = malloc(sizeof(inline_response_200_7_t));
    if (!inline_response_200_7_local_var) {
        return NULL;
    }
    inline_response_200_7_local_var->_embedded = _embedded;
    inline_response_200_7_local_var->_links = _links;
    inline_response_200_7_local_var->page = page;

    return inline_response_200_7_local_var;
}


void inline_response_200_7_free(inline_response_200_7_t *inline_response_200_7) {
    if(NULL == inline_response_200_7){
        return ;
    }
    listEntry_t *listEntry;
    inline_response_200_7__embedded_free(inline_response_200_7->_embedded);
    inline_response_200_2__embedded__links_free(inline_response_200_7->_links);
    inline_response_200_1_page_free(inline_response_200_7->page);
    free(inline_response_200_7);
}

cJSON *inline_response_200_7_convertToJSON(inline_response_200_7_t *inline_response_200_7) {
    cJSON *item = cJSON_CreateObject();

    // inline_response_200_7->_embedded
    if(inline_response_200_7->_embedded) { 
    cJSON *_embedded_local_JSON = inline_response_200_7__embedded_convertToJSON(inline_response_200_7->_embedded);
    if(_embedded_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_embedded", _embedded_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // inline_response_200_7->_links
    if (!inline_response_200_7->_links) {
        goto fail;
    }
    
    cJSON *_links_local_JSON = inline_response_200_2__embedded__links_convertToJSON(inline_response_200_7->_links);
    if(_links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "_links", _links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inline_response_200_7->page
    if (!inline_response_200_7->page) {
        goto fail;
    }
    
    cJSON *page_local_JSON = inline_response_200_1_page_convertToJSON(inline_response_200_7->page);
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

inline_response_200_7_t *inline_response_200_7_parseFromJSON(cJSON *inline_response_200_7JSON){

    inline_response_200_7_t *inline_response_200_7_local_var = NULL;

    // inline_response_200_7->_embedded
    cJSON *_embedded = cJSON_GetObjectItemCaseSensitive(inline_response_200_7JSON, "_embedded");
    inline_response_200_7__embedded_t *_embedded_local_nonprim = NULL;
    if (_embedded) { 
    _embedded_local_nonprim = inline_response_200_7__embedded_parseFromJSON(_embedded); //nonprimitive
    }

    // inline_response_200_7->_links
    cJSON *_links = cJSON_GetObjectItemCaseSensitive(inline_response_200_7JSON, "_links");
    if (!_links) {
        goto end;
    }

    inline_response_200_2__embedded__links_t *_links_local_nonprim = NULL;
    
    _links_local_nonprim = inline_response_200_2__embedded__links_parseFromJSON(_links); //nonprimitive

    // inline_response_200_7->page
    cJSON *page = cJSON_GetObjectItemCaseSensitive(inline_response_200_7JSON, "page");
    if (!page) {
        goto end;
    }

    inline_response_200_1_page_t *page_local_nonprim = NULL;
    
    page_local_nonprim = inline_response_200_1_page_parseFromJSON(page); //nonprimitive


    inline_response_200_7_local_var = inline_response_200_7_create (
        _embedded ? _embedded_local_nonprim : NULL,
        _links_local_nonprim,
        page_local_nonprim
        );

    return inline_response_200_7_local_var;
end:
    return NULL;

}
