#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services_model_server_egress.h"



_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_create(
    char *host,
    char *protocol
    ) {
    _core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_local_var = malloc(sizeof(_core_v2_services_model_server_egress_t));
    if (!_core_v2_services_model_server_egress_local_var) {
        return NULL;
    }
    _core_v2_services_model_server_egress_local_var->host = host;
    _core_v2_services_model_server_egress_local_var->port = port;
    _core_v2_services_model_server_egress_local_var->protocol = protocol;

    return _core_v2_services_model_server_egress_local_var;
}


void _core_v2_services_model_server_egress_free(_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress) {
    if(NULL == _core_v2_services_model_server_egress){
        return ;
    }
    listEntry_t *listEntry;
    free(_core_v2_services_model_server_egress->host);
    free(_core_v2_services_model_server_egress->protocol);
    free(_core_v2_services_model_server_egress);
}

cJSON *_core_v2_services_model_server_egress_convertToJSON(_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services_model_server_egress->host
    if (!_core_v2_services_model_server_egress->host) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "host", _core_v2_services_model_server_egress->host) == NULL) {
    goto fail; //String
    }


    // _core_v2_services_model_server_egress->port
    if (!_core_v2_services_model_server_egress->port) {
        goto fail;
    }
    


    // _core_v2_services_model_server_egress->protocol
    if (!_core_v2_services_model_server_egress->protocol) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "protocol", _core_v2_services_model_server_egress->protocol) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_parseFromJSON(cJSON *_core_v2_services_model_server_egressJSON){

    _core_v2_services_model_server_egress_t *_core_v2_services_model_server_egress_local_var = NULL;

    // _core_v2_services_model_server_egress->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_server_egressJSON, "host");
    if (!host) {
        goto end;
    }

    
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }

    // _core_v2_services_model_server_egress->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_server_egressJSON, "port");
    if (!port) {
        goto end;
    }


    // _core_v2_services_model_server_egress->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_server_egressJSON, "protocol");
    if (!protocol) {
        goto end;
    }

    
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }


    _core_v2_services_model_server_egress_local_var = _core_v2_services_model_server_egress_create (
        strdup(host->valuestring),
        strdup(protocol->valuestring)
        );

    return _core_v2_services_model_server_egress_local_var;
end:
    return NULL;

}
