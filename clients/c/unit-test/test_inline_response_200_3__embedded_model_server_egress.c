#ifndef inline_response_200_3__embedded_model_server_egress_TEST
#define inline_response_200_3__embedded_model_server_egress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_3__embedded_model_server_egress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_3__embedded_model_server_egress.h"
inline_response_200_3__embedded_model_server_egress_t* instantiate_inline_response_200_3__embedded_model_server_egress(int include_optional);



inline_response_200_3__embedded_model_server_egress_t* instantiate_inline_response_200_3__embedded_model_server_egress(int include_optional) {
  inline_response_200_3__embedded_model_server_egress_t* inline_response_200_3__embedded_model_server_egress = NULL;
  if (include_optional) {
    inline_response_200_3__embedded_model_server_egress = inline_response_200_3__embedded_model_server_egress_create(
      "0",
      null,
      null,
      1.337,
      1,
      "0",
      null
    );
  } else {
    inline_response_200_3__embedded_model_server_egress = inline_response_200_3__embedded_model_server_egress_create(
      "0",
      null,
      null,
      1.337,
      1,
      "0",
      null
    );
  }

  return inline_response_200_3__embedded_model_server_egress;
}


#ifdef inline_response_200_3__embedded_model_server_egress_MAIN

void test_inline_response_200_3__embedded_model_server_egress(int include_optional) {
    inline_response_200_3__embedded_model_server_egress_t* inline_response_200_3__embedded_model_server_egress_1 = instantiate_inline_response_200_3__embedded_model_server_egress(include_optional);

	cJSON* jsoninline_response_200_3__embedded_model_server_egress_1 = inline_response_200_3__embedded_model_server_egress_convertToJSON(inline_response_200_3__embedded_model_server_egress_1);
	printf("inline_response_200_3__embedded_model_server_egress :\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_server_egress_1));
	inline_response_200_3__embedded_model_server_egress_t* inline_response_200_3__embedded_model_server_egress_2 = inline_response_200_3__embedded_model_server_egress_parseFromJSON(jsoninline_response_200_3__embedded_model_server_egress_1);
	cJSON* jsoninline_response_200_3__embedded_model_server_egress_2 = inline_response_200_3__embedded_model_server_egress_convertToJSON(inline_response_200_3__embedded_model_server_egress_2);
	printf("repeating inline_response_200_3__embedded_model_server_egress:\n%s\n", cJSON_Print(jsoninline_response_200_3__embedded_model_server_egress_2));
}

int main() {
  test_inline_response_200_3__embedded_model_server_egress(1);
  test_inline_response_200_3__embedded_model_server_egress(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_3__embedded_model_server_egress_MAIN
#endif // inline_response_200_3__embedded_model_server_egress_TEST
