/*
 * _core_v2_endpoints_enrollment_method.h
 *
 * 
 */

#ifndef __core_v2_endpoints_enrollment_method_H_
#define __core_v2_endpoints_enrollment_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct _core_v2_endpoints_enrollment_method_t _core_v2_endpoints_enrollment_method_t;




typedef struct _core_v2_endpoints_enrollment_method_t {
    int ott; //boolean

} _core_v2_endpoints_enrollment_method_t;

_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_create(
    int ott
);

void _core_v2_endpoints_enrollment_method_free(_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method);

_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method_parseFromJSON(cJSON *_core_v2_endpoints_enrollment_methodJSON);

cJSON *_core_v2_endpoints_enrollment_method_convertToJSON(_core_v2_endpoints_enrollment_method_t *_core_v2_endpoints_enrollment_method);

#endif /* __core_v2_endpoints_enrollment_method_H_ */

