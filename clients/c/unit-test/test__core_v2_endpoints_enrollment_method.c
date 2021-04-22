#ifndef _core_v2_endpoints_enrollment_method_TEST
#define _core_v2_endpoints_enrollment_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_endpoints_enrollment_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_endpoints_enrollment_method.h"
_core_v2_endpoints_enrollment_method_t* instantiate__core_v2_endpoints_enrollment_method(int include_optional);



_core_v2_endpoints_enrollment_method_t* instantiate__core_v2_endpoints_enrollment_method(int include_optional) {
  _core_v2_endpoints_enrollment_method_t* _core_v2_endpoints_enrollment_method = NULL;
  if (include_optional) {
    _core_v2_endpoints_enrollment_method = _core_v2_endpoints_enrollment_method_create(
      1
    );
  } else {
    _core_v2_endpoints_enrollment_method = _core_v2_endpoints_enrollment_method_create(
      1
    );
  }

  return _core_v2_endpoints_enrollment_method;
}


#ifdef _core_v2_endpoints_enrollment_method_MAIN

void test__core_v2_endpoints_enrollment_method(int include_optional) {
    _core_v2_endpoints_enrollment_method_t* _core_v2_endpoints_enrollment_method_1 = instantiate__core_v2_endpoints_enrollment_method(include_optional);

	cJSON* json_core_v2_endpoints_enrollment_method_1 = _core_v2_endpoints_enrollment_method_convertToJSON(_core_v2_endpoints_enrollment_method_1);
	printf("_core_v2_endpoints_enrollment_method :\n%s\n", cJSON_Print(json_core_v2_endpoints_enrollment_method_1));
	_core_v2_endpoints_enrollment_method_t* _core_v2_endpoints_enrollment_method_2 = _core_v2_endpoints_enrollment_method_parseFromJSON(json_core_v2_endpoints_enrollment_method_1);
	cJSON* json_core_v2_endpoints_enrollment_method_2 = _core_v2_endpoints_enrollment_method_convertToJSON(_core_v2_endpoints_enrollment_method_2);
	printf("repeating _core_v2_endpoints_enrollment_method:\n%s\n", cJSON_Print(json_core_v2_endpoints_enrollment_method_2));
}

int main() {
  test__core_v2_endpoints_enrollment_method(1);
  test__core_v2_endpoints_enrollment_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_endpoints_enrollment_method_MAIN
#endif // _core_v2_endpoints_enrollment_method_TEST
