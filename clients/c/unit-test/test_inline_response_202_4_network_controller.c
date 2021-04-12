#ifndef inline_response_202_4_network_controller_TEST
#define inline_response_202_4_network_controller_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_202_4_network_controller_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_202_4_network_controller.h"
inline_response_202_4_network_controller_t* instantiate_inline_response_202_4_network_controller(int include_optional);



inline_response_202_4_network_controller_t* instantiate_inline_response_202_4_network_controller(int include_optional) {
  inline_response_202_4_network_controller_t* inline_response_202_4_network_controller = NULL;
  if (include_optional) {
    inline_response_202_4_network_controller = inline_response_202_4_network_controller_create(
      null,
      "0",
      "0",
      "0",
      "0",
      null,
      null,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0"
    );
  } else {
    inline_response_202_4_network_controller = inline_response_202_4_network_controller_create(
      null,
      "0",
      "0",
      "0",
      "0",
      null,
      null,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "0"
    );
  }

  return inline_response_202_4_network_controller;
}


#ifdef inline_response_202_4_network_controller_MAIN

void test_inline_response_202_4_network_controller(int include_optional) {
    inline_response_202_4_network_controller_t* inline_response_202_4_network_controller_1 = instantiate_inline_response_202_4_network_controller(include_optional);

	cJSON* jsoninline_response_202_4_network_controller_1 = inline_response_202_4_network_controller_convertToJSON(inline_response_202_4_network_controller_1);
	printf("inline_response_202_4_network_controller :\n%s\n", cJSON_Print(jsoninline_response_202_4_network_controller_1));
	inline_response_202_4_network_controller_t* inline_response_202_4_network_controller_2 = inline_response_202_4_network_controller_parseFromJSON(jsoninline_response_202_4_network_controller_1);
	cJSON* jsoninline_response_202_4_network_controller_2 = inline_response_202_4_network_controller_convertToJSON(inline_response_202_4_network_controller_2);
	printf("repeating inline_response_202_4_network_controller:\n%s\n", cJSON_Print(jsoninline_response_202_4_network_controller_2));
}

int main() {
  test_inline_response_202_4_network_controller(1);
  test_inline_response_202_4_network_controller(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_202_4_network_controller_MAIN
#endif // inline_response_202_4_network_controller_TEST
