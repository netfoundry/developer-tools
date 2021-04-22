#ifndef _core_v2_services_model_server_egress_TEST
#define _core_v2_services_model_server_egress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services_model_server_egress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services_model_server_egress.h"
_core_v2_services_model_server_egress_t* instantiate__core_v2_services_model_server_egress(int include_optional);



_core_v2_services_model_server_egress_t* instantiate__core_v2_services_model_server_egress(int include_optional) {
  _core_v2_services_model_server_egress_t* _core_v2_services_model_server_egress = NULL;
  if (include_optional) {
    _core_v2_services_model_server_egress = _core_v2_services_model_server_egress_create(
      "0",
      null,
      "0"
    );
  } else {
    _core_v2_services_model_server_egress = _core_v2_services_model_server_egress_create(
      "0",
      null,
      "0"
    );
  }

  return _core_v2_services_model_server_egress;
}


#ifdef _core_v2_services_model_server_egress_MAIN

void test__core_v2_services_model_server_egress(int include_optional) {
    _core_v2_services_model_server_egress_t* _core_v2_services_model_server_egress_1 = instantiate__core_v2_services_model_server_egress(include_optional);

	cJSON* json_core_v2_services_model_server_egress_1 = _core_v2_services_model_server_egress_convertToJSON(_core_v2_services_model_server_egress_1);
	printf("_core_v2_services_model_server_egress :\n%s\n", cJSON_Print(json_core_v2_services_model_server_egress_1));
	_core_v2_services_model_server_egress_t* _core_v2_services_model_server_egress_2 = _core_v2_services_model_server_egress_parseFromJSON(json_core_v2_services_model_server_egress_1);
	cJSON* json_core_v2_services_model_server_egress_2 = _core_v2_services_model_server_egress_convertToJSON(_core_v2_services_model_server_egress_2);
	printf("repeating _core_v2_services_model_server_egress:\n%s\n", cJSON_Print(json_core_v2_services_model_server_egress_2));
}

int main() {
  test__core_v2_services_model_server_egress(1);
  test__core_v2_services_model_server_egress(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services_model_server_egress_MAIN
#endif // _core_v2_services_model_server_egress_TEST
