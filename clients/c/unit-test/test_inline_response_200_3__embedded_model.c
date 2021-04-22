#ifndef inline_response_200_3__embedded_model_TEST
#define inline_response_200_3__embedded_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_3__embedded_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_3__embedded_model.h"
inline_response_200_3__embedded_model_t* instantiate_inline_response_200_3__embedded_model(int include_optional);

#include "test_inline_response_200_3__embedded_model_server_egress.c"
#include "test_inline_response_200_3__embedded_model_client_ingress.c"


inline_response_200_3__embedded_model_t* instantiate_inline_response_200_3__embedded_model(int include_optional) {
  inline_response_200_3__embedded_model_t* inline_response_200_3__embedded_model = NULL;
  if (include_optional) {
    inline_response_200_3__embedded_model = inline_response_200_3__embedded_model_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_inline_response_200_3__embedded_model_server_egress(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_inline_response_200_3__embedded_model_client_ingress(0),
      list_create()
    );
  } else {
    inline_response_200_3__embedded_model = inline_response_200_3__embedded_model_create(
      list_create(),
      NULL,
      list_create(),
      NULL,
      list_create()
    );
  }

  return inline_response_200_3__embedded_model;
}


#ifdef inline_response_200_3__embedded_model_MAIN

void test_inline_response_200_3__embedded_model(int include_optional) {
    inline_response_200_3__embedded_model_t* inline_response_200_3__embedded_model_1 = instantiate_inline_response_200_3__embedded_model(include_optional);

	cJSON* jsoninline_response_200_3__embedded_model_1 = inline_response_200_3__embedded_model_convertToJSON(inline_response_200_3__embedded_model_1);
	printf("inline_response_200_3__embedded_model :\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_1));
	inline_response_200_3__embedded_model_t* inline_response_200_3__embedded_model_2 = inline_response_200_3__embedded_model_parseFromJSON(jsoninline_response_200_3__embedded_model_1);
	cJSON* jsoninline_response_200_3__embedded_model_2 = inline_response_200_3__embedded_model_convertToJSON(inline_response_200_3__embedded_model_2);
	printf("repeating inline_response_200_3__embedded_model:\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_2));
}

int main() {
  test_inline_response_200_3__embedded_model(1);
  test_inline_response_200_3__embedded_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_3__embedded_model_MAIN
#endif // inline_response_200_3__embedded_model_TEST
