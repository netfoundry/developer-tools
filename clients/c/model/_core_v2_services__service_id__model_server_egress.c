#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services__service_id__model_server_egress.h"



_core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress_create(
    double port,
    int dial_intercept_protocol,
    char *address,
    ) {
    _core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress_local_var = malloc(sizeof(_core_v2_services__service_id__model_server_egress_t));
    if (!_core_v2_services__service_id__model_server_egress_local_var) {
        return NULL;
    }
    _core_v2_services__service_id__model_server_egress_local_var->dial_intercept_address = dial_intercept_address;
    _core_v2_services__service_id__model_server_egress_local_var->dial_intercept_port = dial_intercept_port;
    _core_v2_services__service_id__model_server_egress_local_var->port = port;
    _core_v2_services__service_id__model_server_egress_local_var->dial_intercept_protocol = dial_intercept_protocol;
    _core_v2_services__service_id__model_server_egress_local_var->address = address;
    _core_v2_services__service_id__model_server_egress_local_var->protocol = protocol;

    return _core_v2_services__service_id__model_server_egress_local_var;
}


void _core_v2_services__service_id__model_server_egress_free(_core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress) {
    if(NULL == _core_v2_services__service_id__model_server_egress){
        return ;
    }
    listEntry_t *listEntry;
    free(_core_v2_services__service_id__model_server_egress->address);
    free(_core_v2_services__service_id__model_server_egress);
}

cJSON *_core_v2_services__service_id__model_server_egress_convertToJSON(_core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services__service_id__model_server_egress->dial_intercept_address
    if (!_core_v2_services__service_id__model_server_egress->dial_intercept_address) {
        goto fail;
    }
    


    // _core_v2_services__service_id__model_server_egress->dial_intercept_port
    if (!_core_v2_services__service_id__model_server_egress->dial_intercept_port) {
        goto fail;
    }
    


    // _core_v2_services__service_id__model_server_egress->port
    if (!_core_v2_services__service_id__model_server_egress->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "port", _core_v2_services__service_id__model_server_egress->port) == NULL) {
    goto fail; //Numeric
    }


    // _core_v2_services__service_id__model_server_egress->dial_intercept_protocol
    if (!_core_v2_services__service_id__model_server_egress->dial_intercept_protocol) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "dialInterceptProtocol", _core_v2_services__service_id__model_server_egress->dial_intercept_protocol) == NULL) {
    goto fail; //Bool
    }


    // _core_v2_services__service_id__model_server_egress->address
    if (!_core_v2_services__service_id__model_server_egress->address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "address", _core_v2_services__service_id__model_server_egress->address) == NULL) {
    goto fail; //String
    }


    // _core_v2_services__service_id__model_server_egress->protocol
    if (!_core_v2_services__service_id__model_server_egress->protocol) {
        goto fail;
    }
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress_parseFromJSON(cJSON *_core_v2_services__service_id__model_server_egressJSON){

    _core_v2_services__service_id__model_server_egress_t *_core_v2_services__service_id__model_server_egress_local_var = NULL;

    // _core_v2_services__service_id__model_server_egress->dial_intercept_address
    cJSON *dial_intercept_address = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "dialInterceptAddress");
    if (!dial_intercept_address) {
        goto end;
    }


    // _core_v2_services__service_id__model_server_egress->dial_intercept_port
    cJSON *dial_intercept_port = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "dialInterceptPort");
    if (!dial_intercept_port) {
        goto end;
    }


    // _core_v2_services__service_id__model_server_egress->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }

    // _core_v2_services__service_id__model_server_egress->dial_intercept_protocol
    cJSON *dial_intercept_protocol = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "dialInterceptProtocol");
    if (!dial_intercept_protocol) {
        goto end;
    }

    
    if(!cJSON_IsBool(dial_intercept_protocol))
    {
    goto end; //Bool
    }

    // _core_v2_services__service_id__model_server_egress->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "address");
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }

    // _core_v2_services__service_id__model_server_egress->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(_core_v2_services__service_id__model_server_egressJSON, "protocol");
    if (!protocol) {
        goto end;
    }



    _core_v2_services__service_id__model_server_egress_local_var = _core_v2_services__service_id__model_server_egress_create (
        port->valuedouble,
        dial_intercept_protocol->valueint,
        strdup(address->valuestring),
        );

    return _core_v2_services__service_id__model_server_egress_local_var;
end:
    return NULL;

}
