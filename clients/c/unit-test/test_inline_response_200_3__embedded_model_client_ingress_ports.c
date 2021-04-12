#ifndef inline_response_200_3__embedded_model_client_ingress_ports_TEST
#define inline_response_200_3__embedded_model_client_ingress_ports_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_3__embedded_model_client_ingress_ports_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_3__embedded_model_client_ingress_ports.h"
inline_response_200_3__embedded_model_client_ingress_ports_t* instantiate_inline_response_200_3__embedded_model_client_ingress_ports(int include_optional);



inline_response_200_3__embedded_model_client_ingress_ports_t* instantiate_inline_response_200_3__embedded_model_client_ingress_ports(int include_optional) {
  inline_response_200_3__embedded_model_client_ingress_ports_t* inline_response_200_3__embedded_model_client_ingress_ports = NULL;
  if (include_optional) {
    inline_response_200_3__embedded_model_client_ingress_ports = inline_response_200_3__embedded_model_client_ingress_ports_create(
      1.337,
      1.337
    );
  } else {
    inline_response_200_3__embedded_model_client_ingress_ports = inline_response_200_3__embedded_model_client_ingress_ports_create(
      1.337,
      1.337
    );
  }

  return inline_response_200_3__embedded_model_client_ingress_ports;
}


#ifdef inline_response_200_3__embedded_model_client_ingress_ports_MAIN

void test_inline_response_200_3__embedded_model_client_ingress_ports(int include_optional) {
    inline_response_200_3__embedded_model_client_ingress_ports_t* inline_response_200_3__embedded_model_client_ingress_ports_1 = instantiate_inline_response_200_3__embedded_model_client_ingress_ports(include_optional);

	cJSON* jsoninline_response_200_3__embedded_model_client_ingress_ports_1 = inline_response_200_3__embedded_model_client_ingress_ports_convertToJSON(inline_response_200_3__embedded_model_client_ingress_ports_1);
	printf("inline_response_200_3__embedded_model_client_ingress_ports :\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_client_ingress_ports_1));
	inline_response_200_3__embedded_model_client_ingress_ports_t* inline_response_200_3__embedded_model_client_ingress_ports_2 = inline_response_200_3__embedded_model_client_ingress_ports_parseFromJSON(jsoninline_response_200_3__embedded_model_client_ingress_ports_1);
	cJSON* jsoninline_response_200_3__embedded_model_client_ingress_ports_2 = inline_response_200_3__embedded_model_client_ingress_ports_convertToJSON(inline_response_200_3__embedded_model_client_ingress_ports_2);
	printf("repeating inline_response_200_3__embedded_model_client_ingress_ports:\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_client_ingress_ports_2));
}

int main() {
  test_inline_response_200_3__embedded_model_client_ingress_ports(1);
  test_inline_response_200_3__embedded_model_client_ingress_ports(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_3__embedded_model_client_ingress_ports_MAIN
#endif // inline_response_200_3__embedded_model_client_ingress_ports_TEST
