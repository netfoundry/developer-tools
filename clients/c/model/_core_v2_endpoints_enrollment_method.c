#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_core_v2_endpoints_enrollment_method.h"



_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_create(
    int ott
    ) {
    _core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_local_var = malloc(sizeof(_core_v2_endpoints_enrollment_method_t));
    if (!_core_v2_endpoints_enrollment_method_local_var) {
        return NULL;
    }
    _core_v2_endpoints_enrollment_method_local_var->ott = ott;

    return _core_v2_endpoints_enrollment_method_local_var;
}


void _core_v2_endpoints_enrollment_method_free(_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method) {
    if(NULL == _core_v2_endpoints_enrollment_method){
        return ;
    }
    listEntry_t *listEntry;
    free(_core_v2_endpoints_enrollment_method);
}

cJSON *_core_v2_endpoints_enrollment_method_convertToJSON(_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method) {
    cJSON *item = cJSON_CreateObject();

    // _core_v2_endpoints_enrollment_method->ott
    if (!_core_v2_endpoints_enrollment_method->ott) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "ott", _core_v2_endpoints_enrollment_method->ott) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_parseFromJSON(cJSON *_core_v2_endpoints_enrollment_methodJSON){

    _core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_local_var = NULL;

    // _core_v2_endpoints_enrollment_method->ott
    cJSON *ott = cJSON_GetObjectItemCaseSensitive(_core_v2_endpoints_enrollment_methodJSON, "ott");
    if (!ott) {
        goto end;
    }

    
    if(!cJSON_IsBool(ott))
    {
    goto end; //Bool
    }


    _core_v2_endpoints_enrollment_method_local_var = _core_v2_endpoints_enrollment_method_create (
        ott->valueint
        );

    return _core_v2_endpoints_enrollment_method_local_var;
end:
    return NULL;

}
