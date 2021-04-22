#ifndef _core_v2_services_model_client_ingress_ports_TEST
#define _core_v2_services_model_client_ingress_ports_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services_model_client_ingress_ports_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services_model_client_ingress_ports.h"
_core_v2_services_model_client_ingress_ports_t* instantiate__core_v2_services_model_client_ingress_ports(int include_optional);



_core_v2_services_model_client_ingress_ports_t* instantiate__core_v2_services_model_client_ingress_ports(int include_optional) {
  _core_v2_services_model_client_ingress_ports_t* _core_v2_services_model_client_ingress_ports = NULL;
  if (include_optional) {
    _core_v2_services_model_client_ingress_ports = _core_v2_services_model_client_ingress_ports_create(
      "0",
      "0"
    );
  } else {
    _core_v2_services_model_client_ingress_ports = _core_v2_services_model_client_ingress_ports_create(
      "0",
      "0"
    );
  }

  return _core_v2_services_model_client_ingress_ports;
}


#ifdef _core_v2_services_model_client_ingress_ports_MAIN

void test__core_v2_services_model_client_ingress_ports(int include_optional) {
    _core_v2_services_model_client_ingress_ports_t* _core_v2_services_model_client_ingress_ports_1 = instantiate__core_v2_services_model_client_ingress_ports(include_optional);

	cJSON* json_core_v2_services_model_client_ingress_ports_1 = _core_v2_services_model_client_ingress_ports_convertToJSON(_core_v2_services_model_client_ingress_ports_1);
	printf("_core_v2_services_model_client_ingress_ports :\n%s\n", cJSON_Print(json_core_v2_services_model_client_ingress_ports_1));
	_core_v2_services_model_client_ingress_ports_t* _core_v2_services_model_client_ingress_ports_2 = _core_v2_services_model_client_ingress_ports_parseFromJSON(json_core_v2_services_model_client_ingress_ports_1);
	cJSON* json_core_v2_services_model_client_ingress_ports_2 = _core_v2_services_model_client_ingress_ports_convertToJSON(_core_v2_services_model_client_ingress_ports_2);
	printf("repeating _core_v2_services_model_client_ingress_ports:\n%s\n", cJSON_Print(json_core_v2_services_model_client_ingress_ports_2));
}

int main() {
  test__core_v2_services_model_client_ingress_ports(1);
  test__core_v2_services_model_client_ingress_ports(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services_model_client_ingress_ports_MAIN
#endif // _core_v2_services_model_client_ingress_ports_TEST
