#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services_model_client_ingress_ports.h"



_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_create(
    char *high,
    char *low
    ) {
    _core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_local_var = malloc(sizeof(_core_v2_services_model_client_ingress_ports_t));
    if (!_core_v2_services_model_client_ingress_ports_local_var) {
        return NULL;
    }
    _core_v2_services_model_client_ingress_ports_local_var->high = high;
    _core_v2_services_model_client_ingress_ports_local_var->low = low;

    return _core_v2_services_model_client_ingress_ports_local_var;
}


void _core_v2_services_model_client_ingress_ports_free(_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports) {
    if(NULL == _core_v2_services_model_client_ingress_ports){
        return ;
    }
    listEntry_t *listEntry;
    free(_core_v2_services_model_client_ingress_ports->high);
    free(_core_v2_services_model_client_ingress_ports->low);
    free(_core_v2_services_model_client_ingress_ports);
}

cJSON *_core_v2_services_model_client_ingress_ports_convertToJSON(_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services_model_client_ingress_ports->high
    if (!_core_v2_services_model_client_ingress_ports->high) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "high", _core_v2_services_model_client_ingress_ports->high) == NULL) {
    goto fail; //String
    }


    // _core_v2_services_model_client_ingress_ports->low
    if (!_core_v2_services_model_client_ingress_ports->low) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "low", _core_v2_services_model_client_ingress_ports->low) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_parseFromJSON(cJSON *_core_v2_services_model_client_ingress_portsJSON){

    _core_v2_services_model_client_ingress_ports_t *_core_v2_services_model_client_ingress_ports_local_var = NULL;

    // _core_v2_services_model_client_ingress_ports->high
    cJSON *high = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingress_portsJSON, "high");
    if (!high) {
        goto end;
    }

    
    if(!cJSON_IsString(high))
    {
    goto end; //String
    }

    // _core_v2_services_model_client_ingress_ports->low
    cJSON *low = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingress_portsJSON, "low");
    if (!low) {
        goto end;
    }

    
    if(!cJSON_IsString(low))
    {
    goto end; //String
    }


    _core_v2_services_model_client_ingress_ports_local_var = _core_v2_services_model_client_ingress_ports_create (
        strdup(high->valuestring),
        strdup(low->valuestring)
        );

    return _core_v2_services_model_client_ingress_ports_local_var;
end:
    return NULL;

}
