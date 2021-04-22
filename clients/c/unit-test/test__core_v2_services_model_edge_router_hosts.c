#ifndef _core_v2_services_model_edge_router_hosts_TEST
#define _core_v2_services_model_edge_router_hosts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _core_v2_services_model_edge_router_hosts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_core_v2_services_model_edge_router_hosts.h"
_core_v2_services_model_edge_router_hosts_t* instantiate__core_v2_services_model_edge_router_hosts(int include_optional);

#include "test__core_v2_services_model_server_egress.c"


_core_v2_services_model_edge_router_hosts_t* instantiate__core_v2_services_model_edge_router_hosts(int include_optional) {
  _core_v2_services_model_edge_router_hosts_t* _core_v2_services_model_edge_router_hosts = NULL;
  if (include_optional) {
    _core_v2_services_model_edge_router_hosts = _core_v2_services_model_edge_router_hosts_create(
      "0",
       // false, not to have infinite recursion
      instantiate__core_v2_services_model_server_egress(0)
    );
  } else {
    _core_v2_services_model_edge_router_hosts = _core_v2_services_model_edge_router_hosts_create(
      "0",
      NULL
    );
  }

  return _core_v2_services_model_edge_router_hosts;
}


#ifdef _core_v2_services_model_edge_router_hosts_MAIN

void test__core_v2_services_model_edge_router_hosts(int include_optional) {
    _core_v2_services_model_edge_router_hosts_t* _core_v2_services_model_edge_router_hosts_1 = instantiate__core_v2_services_model_edge_router_hosts(include_optional);

	cJSON* json_core_v2_services_model_edge_router_hosts_1 = _core_v2_services_model_edge_router_hosts_convertToJSON(_core_v2_services_model_edge_router_hosts_1);
	printf("_core_v2_services_model_edge_router_hosts :\n%s\n", cJSON_Print(json_core_v2_services_model_edge_router_hosts_1));
	_core_v2_services_model_edge_router_hosts_t* _core_v2_services_model_edge_router_hosts_2 = _core_v2_services_model_edge_router_hosts_parseFromJSON(json_core_v2_services_model_edge_router_hosts_1);
	cJSON* json_core_v2_services_model_edge_router_hosts_2 = _core_v2_services_model_edge_router_hosts_convertToJSON(_core_v2_services_model_edge_router_hosts_2);
	printf("repeating _core_v2_services_model_edge_router_hosts:\n%s\n", cJSON_Print(json_core_v2_services_model_edge_router_hosts_2));
}

int main() {
  test__core_v2_services_model_edge_router_hosts(1);
  test__core_v2_services_model_edge_router_hosts(0);

  printf("Hello world \n");
  return 0;
}

#endif // _core_v2_services_model_edge_router_hosts_MAIN
#endif // _core_v2_services_model_edge_router_hosts_TEST
