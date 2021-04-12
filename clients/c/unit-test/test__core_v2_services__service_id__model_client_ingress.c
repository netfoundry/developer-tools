#ifndef _core_v2_services__service_id__model_client_ingress_TEST
#define _core_v2_services__service_id__model_client_ingress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services__service_id__model_client_ingress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services__service_id__model_client_ingress.h"
_core_v2_services__service_id__model_client_ingress_t* instantiate__core_v2_services__service_id__model_client_ingress(int include_optional);



_core_v2_services__service_id__model_client_ingress_t* instantiate__core_v2_services__service_id__model_client_ingress(int include_optional) {
  _core_v2_services__service_id__model_client_ingress_t* _core_v2_services__service_id__model_client_ingress = NULL;
  if (include_optional) {
    _core_v2_services__service_id__model_client_ingress = _core_v2_services__service_id__model_client_ingress_create(
      list_create(),
      list_create(),
      list_create()
    );
  } else {
    _core_v2_services__service_id__model_client_ingress = _core_v2_services__service_id__model_client_ingress_create(
      list_create(),
      list_create(),
      list_create()
    );
  }

  return _core_v2_services__service_id__model_client_ingress;
}


#ifdef _core_v2_services__service_id__model_client_ingress_MAIN

void test__core_v2_services__service_id__model_client_ingress(int include_optional) {
    _core_v2_services__service_id__model_client_ingress_t* _core_v2_services__service_id__model_client_ingress_1 = instantiate__core_v2_services__service_id__model_client_ingress(include_optional);

	cJSON* json_core_v2_services__service_id__model_client_ingress_1 = _core_v2_services__service_id__model_client_ingress_convertToJSON(_core_v2_services__service_id__model_client_ingress_1);
	printf("_core_v2_services__service_id__model_client_ingress :\n%s\n", cJSON_Print(json_core_v2_services__service_id__model_client_ingress_1));
	_core_v2_services__service_id__model_client_ingress_t* _core_v2_services__service_id__model_client_ingress_2 = _core_v2_services__service_id__model_client_ingress_parseFromJSON(json_core_v2_services__service_id__model_client_ingress_1);
	cJSON* json_core_v2_services__service_id__model_client_ingress_2 = _core_v2_services__service_id__model_client_ingress_convertToJSON(_core_v2_services__service_id__model_client_ingress_2);
	printf("repeating _core_v2_services__service_id__model_client_ingress:\n%s\n", cJSON_Print(json_core_v2_services__service_id__model_client_ingress_2));
}

int main() {
  test__core_v2_services__service_id__model_client_ingress(1);
  test__core_v2_services__service_id__model_client_ingress(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services__service_id__model_client_ingress_MAIN
#endif // _core_v2_services__service_id__model_client_ingress_TEST
