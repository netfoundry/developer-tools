#ifndef inline_response_200_3__embedded_model_edge_router_hosts_TEST
#define inline_response_200_3__embedded_model_edge_router_hosts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_3__embedded_model_edge_router_hosts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_3__embedded_model_edge_router_hosts.h"
inline_response_200_3__embedded_model_edge_router_hosts_t* instantiate_inline_response_200_3__embedded_model_edge_router_hosts(int include_optional);

#include "test_inline_response_200_3__embedded_model_server_egress_1.c"


inline_response_200_3__embedded_model_edge_router_hosts_t* instantiate_inline_response_200_3__embedded_model_edge_router_hosts(int include_optional) {
  inline_response_200_3__embedded_model_edge_router_hosts_t* inline_response_200_3__embedded_model_edge_router_hosts = NULL;
  if (include_optional) {
    inline_response_200_3__embedded_model_edge_router_hosts = inline_response_200_3__embedded_model_edge_router_hosts_create(
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_3__embedded_model_server_egress_1(0)
    );
  } else {
    inline_response_200_3__embedded_model_edge_router_hosts = inline_response_200_3__embedded_model_edge_router_hosts_create(
      "0",
      NULL
    );
  }

  return inline_response_200_3__embedded_model_edge_router_hosts;
}


#ifdef inline_response_200_3__embedded_model_edge_router_hosts_MAIN

void test_inline_response_200_3__embedded_model_edge_router_hosts(int include_optional) {
    inline_response_200_3__embedded_model_edge_router_hosts_t* inline_response_200_3__embedded_model_edge_router_hosts_1 = instantiate_inline_response_200_3__embedded_model_edge_router_hosts(include_optional);

	cJSON* jsoninline_response_200_3__embedded_model_edge_router_hosts_1 = inline_response_200_3__embedded_model_edge_router_hosts_convertToJSON(inline_response_200_3__embedded_model_edge_router_hosts_1);
	printf("inline_response_200_3__embedded_model_edge_router_hosts :\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_edge_router_hosts_1));
	inline_response_200_3__embedded_model_edge_router_hosts_t* inline_response_200_3__embedded_model_edge_router_hosts_2 = inline_response_200_3__embedded_model_edge_router_hosts_parseFromJSON(jsoninline_response_200_3__embedded_model_edge_router_hosts_1);
	cJSON* jsoninline_response_200_3__embedded_model_edge_router_hosts_2 = inline_response_200_3__embedded_model_edge_router_hosts_convertToJSON(inline_response_200_3__embedded_model_edge_router_hosts_2);
	printf("repeating inline_response_200_3__embedded_model_edge_router_hosts:\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_edge_router_hosts_2));
}

int main() {
  test_inline_response_200_3__embedded_model_edge_router_hosts(1);
  test_inline_response_200_3__embedded_model_edge_router_hosts(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_3__embedded_model_edge_router_hosts_MAIN
#endif // inline_response_200_3__embedded_model_edge_router_hosts_TEST
