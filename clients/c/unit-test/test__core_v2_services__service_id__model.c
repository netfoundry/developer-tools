#ifndef _core_v2_services__service_id__model_TEST
#define _core_v2_services__service_id__model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services__service_id__model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services__service_id__model.h"
_core_v2_services__service_id__model_t* instantiate__core_v2_services__service_id__model(int include_optional);

#include "test__core_v2_services__service_id__model_client_ingress.c"
#include "test__core_v2_services__service_id__model_server_egress.c"


_core_v2_services__service_id__model_t* instantiate__core_v2_services__service_id__model(int include_optional) {
  _core_v2_services__service_id__model_t* _core_v2_services__service_id__model = NULL;
  if (include_optional) {
    _core_v2_services__service_id__model = _core_v2_services__service_id__model_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate__core_v2_services__service_id__model_client_ingress(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate__core_v2_services__service_id__model_server_egress(0)
    );
  } else {
    _core_v2_services__service_id__model = _core_v2_services__service_id__model_create(
      list_create(),
      NULL,
      list_create(),
      NULL
    );
  }

  return _core_v2_services__service_id__model;
}


#ifdef _core_v2_services__service_id__model_MAIN

void test__core_v2_services__service_id__model(int include_optional) {
    _core_v2_services__service_id__model_t* _core_v2_services__service_id__model_1 = instantiate__core_v2_services__service_id__model(include_optional);

	cJSON* json_core_v2_services__service_id__model_1 = _core_v2_services__service_id__model_convertToJSON(_core_v2_services__service_id__model_1);
	printf("_core_v2_services__service_id__model :\n%s\n", cJSON_Print(json_core_v2_services__service_id__model_1));
	_core_v2_services__service_id__model_t* _core_v2_services__service_id__model_2 = _core_v2_services__service_id__model_parseFromJSON(json_core_v2_services__service_id__model_1);
	cJSON* json_core_v2_services__service_id__model_2 = _core_v2_services__service_id__model_convertToJSON(_core_v2_services__service_id__model_2);
	printf("repeating _core_v2_services__service_id__model:\n%s\n", cJSON_Print(json_core_v2_services__service_id__model_2));
}

int main() {
  test__core_v2_services__service_id__model(1);
  test__core_v2_services__service_id__model(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services__service_id__model_MAIN
#endif // _core_v2_services__service_id__model_TEST
