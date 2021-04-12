#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_services_model_client_ingress.h"



_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_create(
    list_t *protocols,
    char *host,
    list_t *ports,
    list_t *addresses
    ) {
    _core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_local_var = malloc(sizeof(_core_v2_services_model_client_ingress_t));
    if (!_core_v2_services_model_client_ingress_local_var) {
        return NULL;
    }
    _core_v2_services_model_client_ingress_local_var->protocols = protocols;
    _core_v2_services_model_client_ingress_local_var->host = host;
    _core_v2_services_model_client_ingress_local_var->ports = ports;
    _core_v2_services_model_client_ingress_local_var->port = port;
    _core_v2_services_model_client_ingress_local_var->addresses = addresses;

    return _core_v2_services_model_client_ingress_local_var;
}


void _core_v2_services_model_client_ingress_free(_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress) {
    if(NULL == _core_v2_services_model_client_ingress){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, _core_v2_services_model_client_ingress->protocols) {
        free(listEntry->data);
    }
    list_free(_core_v2_services_model_client_ingress->protocols);
    free(_core_v2_services_model_client_ingress->host);
    list_ForEach(listEntry, _core_v2_services_model_client_ingress->ports) {
        _core_v2_services_model_client_ingress_ports_free(listEntry->data);
    }
    list_free(_core_v2_services_model_client_ingress->ports);
    list_ForEach(listEntry, _core_v2_services_model_client_ingress->addresses) {
        free(listEntry->data);
    }
    list_free(_core_v2_services_model_client_ingress->addresses);
    free(_core_v2_services_model_client_ingress);
}

cJSON *_core_v2_services_model_client_ingress_convertToJSON(_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_services_model_client_ingress->protocols
    if(_core_v2_services_model_client_ingress->protocols) { 
    cJSON *protocols = cJSON_AddArrayToObject(item, "protocols");
    if(protocols == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *protocolsListEntry;
    list_ForEach(protocolsListEntry, _core_v2_services_model_client_ingress->protocols) {
    if(cJSON_AddStringToObject(protocols, "", (char*)protocolsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // _core_v2_services_model_client_ingress->host
    if(_core_v2_services_model_client_ingress->host) { 
    if(cJSON_AddStringToObject(item, "host", _core_v2_services_model_client_ingress->host) == NULL) {
    goto fail; //String
    }
     } 


    // _core_v2_services_model_client_ingress->ports
    if(_core_v2_services_model_client_ingress->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (_core_v2_services_model_client_ingress->ports) {
    list_ForEach(portsListEntry, _core_v2_services_model_client_ingress->ports) {
    cJSON *itemLocal = _core_v2_services_model_client_ingress_ports_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
    }
    }
     } 


    // _core_v2_services_model_client_ingress->port
    if(_core_v2_services_model_client_ingress->port) { 
     } 


    // _core_v2_services_model_client_ingress->addresses
    if(_core_v2_services_model_client_ingress->addresses) { 
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressesListEntry;
    list_ForEach(addressesListEntry, _core_v2_services_model_client_ingress->addresses) {
    if(cJSON_AddStringToObject(addresses, "", (char*)addressesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_parseFromJSON(cJSON *_core_v2_services_model_client_ingressJSON){

    _core_v2_services_model_client_ingress_t *_core_v2_services_model_client_ingress_local_var = NULL;

    // _core_v2_services_model_client_ingress->protocols
    cJSON *protocols = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingressJSON, "protocols");
    list_t *protocolsList;
    if (protocols) { 
    cJSON *protocols_local;
    if(!cJSON_IsArray(protocols)) {
        goto end;//primitive container
    }
    protocolsList = list_create();

    cJSON_ArrayForEach(protocols_local, protocols)
    {
        if(!cJSON_IsString(protocols_local))
        {
            goto end;
        }
        list_addElement(protocolsList , strdup(protocols_local->valuestring));
    }
    }

    // _core_v2_services_model_client_ingress->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingressJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }

    // _core_v2_services_model_client_ingress->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingressJSON, "ports");
    list_t *portsList;
    if (ports) { 
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        _core_v2_services_model_client_ingress_ports_t *portsItem = _core_v2_services_model_client_ingress_ports_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }

    // _core_v2_services_model_client_ingress->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingressJSON, "port");
    }

    // _core_v2_services_model_client_ingress->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(_core_v2_services_model_client_ingressJSON, "addresses");
    list_t *addressesList;
    if (addresses) { 
    cJSON *addresses_local;
    if(!cJSON_IsArray(addresses)) {
        goto end;//primitive container
    }
    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local, addresses)
    {
        if(!cJSON_IsString(addresses_local))
        {
            goto end;
        }
        list_addElement(addressesList , strdup(addresses_local->valuestring));
    }
    }


    _core_v2_services_model_client_ingress_local_var = _core_v2_services_model_client_ingress_create (
        protocols ? protocolsList : NULL,
        host ? strdup(host->valuestring) : NULL,
        ports ? portsList : NULL,
        addresses ? addressesList : NULL
        );

    return _core_v2_services_model_client_ingress_local_var;
end:
    return NULL;

}
