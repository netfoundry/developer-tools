#ifndef inline_response_200__links_network_TEST
#define inline_response_200__links_network_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200__links_network_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200__links_network.h"
inline_response_200__links_network_t* instantiate_inline_response_200__links_network(int include_optional);



inline_response_200__links_network_t* instantiate_inline_response_200__links_network(int include_optional) {
  inline_response_200__links_network_t* inline_response_200__links_network = NULL;
  if (include_optional) {
    inline_response_200__links_network = inline_response_200__links_network_create(
      "0",
      "0"
    );
  } else {
    inline_response_200__links_network = inline_response_200__links_network_create(
      "0",
      "0"
    );
  }

  return inline_response_200__links_network;
}


#ifdef inline_response_200__links_network_MAIN

void test_inline_response_200__links_network(int include_optional) {
    inline_response_200__links_network_t* inline_response_200__links_network_1 = instantiate_inline_response_200__links_network(include_optional);

	cJSON* jsoninline_response_200__links_network_1 = inline_response_200__links_network_convertToJSON(inline_response_200__links_network_1);
	printf("inline_response_200__links_network :\n%s\n", cJSON_Print(jsoninline_response_200__links_network_1));
	inline_response_200__links_network_t* inline_response_200__links_network_2 = inline_response_200__links_network_parseFromJSON(jsoninline_response_200__links_network_1);
	cJSON* jsoninline_response_200__links_network_2 = inline_response_200__links_network_convertToJSON(inline_response_200__links_network_2);
	printf("repeating inline_response_200__links_network:\n%s\n", cJSON_Print(jsoninline_response_200__links_network_2));
}

int main() {
  test_inline_response_200__links_network(1);
  test_inline_response_200__links_network(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200__links_network_MAIN
#endif // inline_response_200__links_network_TEST
