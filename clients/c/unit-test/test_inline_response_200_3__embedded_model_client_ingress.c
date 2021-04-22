#ifndef inline_response_200_3__embedded_model_client_ingress_TEST
#define inline_response_200_3__embedded_model_client_ingress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_3__embedded_model_client_ingress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_3__embedded_model_client_ingress.h"
inline_response_200_3__embedded_model_client_ingress_t* instantiate_inline_response_200_3__embedded_model_client_ingress(int include_optional);



inline_response_200_3__embedded_model_client_ingress_t* instantiate_inline_response_200_3__embedded_model_client_ingress(int include_optional) {
  inline_response_200_3__embedded_model_client_ingress_t* inline_response_200_3__embedded_model_client_ingress = NULL;
  if (include_optional) {
    inline_response_200_3__embedded_model_client_ingress = inline_response_200_3__embedded_model_client_ingress_create(
      list_create(),
      "0",
      list_create(),
      1.337,
      list_create()
    );
  } else {
    inline_response_200_3__embedded_model_client_ingress = inline_response_200_3__embedded_model_client_ingress_create(
      list_create(),
      "0",
      list_create(),
      1.337,
      list_create()
    );
  }

  return inline_response_200_3__embedded_model_client_ingress;
}


#ifdef inline_response_200_3__embedded_model_client_ingress_MAIN

void test_inline_response_200_3__embedded_model_client_ingress(int include_optional) {
    inline_response_200_3__embedded_model_client_ingress_t* inline_response_200_3__embedded_model_client_ingress_1 = instantiate_inline_response_200_3__embedded_model_client_ingress(include_optional);

	cJSON* jsoninline_response_200_3__embedded_model_client_ingress_1 = inline_response_200_3__embedded_model_client_ingress_convertToJSON(inline_response_200_3__embedded_model_client_ingress_1);
	printf("inline_response_200_3__embedded_model_client_ingress :\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_client_ingress_1));
	inline_response_200_3__embedded_model_client_ingress_t* inline_response_200_3__embedded_model_client_ingress_2 = inline_response_200_3__embedded_model_client_ingress_parseFromJSON(jsoninline_response_200_3__embedded_model_client_ingress_1);
	cJSON* jsoninline_response_200_3__embedded_model_client_ingress_2 = inline_response_200_3__embedded_model_client_ingress_convertToJSON(inline_response_200_3__embedded_model_client_ingress_2);
	printf("repeating inline_response_200_3__embedded_model_client_ingress:\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_client_ingress_2));
}

int main() {
  test_inline_response_200_3__embedded_model_client_ingress(1);
  test_inline_response_200_3__embedded_model_client_ingress(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_3__embedded_model_client_ingress_MAIN
#endif // inline_response_200_3__embedded_model_client_ingress_TEST
