#ifndef _core_v2_services_model_TEST
#define _core_v2_services_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services_model.h"
_core_v2_services_model_t* instantiate__core_v2_services_model(int include_optional);

#include "test_inline_response_200_3__embedded_model_server_egress.c"
#include "test__core_v2_services_model_client_ingress.c"


_core_v2_services_model_t* instantiate__core_v2_services_model(int include_optional) {
  _core_v2_services_model_t* _core_v2_services_model = NULL;
  if (include_optional) {
    _core_v2_services_model = _core_v2_services_model_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_inline_response_200_3__embedded_model_server_egress(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate__core_v2_services_model_client_ingress(0),
      list_create()
    );
  } else {
    _core_v2_services_model = _core_v2_services_model_create(
      list_create(),
      NULL,
      list_create(),
      NULL,
      list_create()
    );
  }

  return _core_v2_services_model;
}


#ifdef _core_v2_services_model_MAIN

void test__core_v2_services_model(int include_optional) {
    _core_v2_services_model_t* _core_v2_services_model_1 = instantiate__core_v2_services_model(include_optional);

	cJSON* json_core_v2_services_model_1 = _core_v2_services_model_convertToJSON(_core_v2_services_model_1);
	printf("_core_v2_services_model :\n%s\n", cJSON_Print(json_core_v2_services_model_1));
	_core_v2_services_model_t* _core_v2_services_model_2 = _core_v2_services_model_parseFromJSON(json_core_v2_services_model_1);
	cJSON* json_core_v2_services_model_2 = _core_v2_services_model_convertToJSON(_core_v2_services_model_2);
	printf("repeating _core_v2_services_model:\n%s\n", cJSON_Print(json_core_v2_services_model_2));
}

int main() {
  test__core_v2_services_model(1);
  test__core_v2_services_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services_model_MAIN
#endif // _core_v2_services_model_TEST
