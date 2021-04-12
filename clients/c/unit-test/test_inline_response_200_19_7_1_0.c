#ifndef inline_response_200_19_7_1_0_TEST
#define inline_response_200_19_7_1_0_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_19_7_1_0_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_19_7_1_0.h"
inline_response_200_19_7_1_0_t* instantiate_inline_response_200_19_7_1_0(int include_optional);



inline_response_200_19_7_1_0_t* instantiate_inline_response_200_19_7_1_0(int include_optional) {
  inline_response_200_19_7_1_0_t* inline_response_200_19_7_1_0 = NULL;
  if (include_optional) {
    inline_response_200_19_7_1_0 = inline_response_200_19_7_1_0_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    inline_response_200_19_7_1_0 = inline_response_200_19_7_1_0_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return inline_response_200_19_7_1_0;
}


#ifdef inline_response_200_19_7_1_0_MAIN

void test_inline_response_200_19_7_1_0(int include_optional) {
    inline_response_200_19_7_1_0_t* inline_response_200_19_7_1_0_1 = instantiate_inline_response_200_19_7_1_0(include_optional);

	cJSON* jsoninline_response_200_19_7_1_0_1 = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19_7_1_0_1);
	printf("inline_response_200_19_7_1_0 :\n%s\n", cJSON_Print(jsoninline_response_200_19_7_1_0_1));
	inline_response_200_19_7_1_0_t* inline_response_200_19_7_1_0_2 = inline_response_200_19_7_1_0_parseFromJSON(jsoninline_response_200_19_7_1_0_1);
	cJSON* jsoninline_response_200_19_7_1_0_2 = inline_response_200_19_7_1_0_convertToJSON(inline_response_200_19_7_1_0_2);
	printf("repeating inline_response_200_19_7_1_0:\n%s\n", cJSON_Print(jsoninline_response_200_19_7_1_0_2));
}

int main() {
  test_inline_response_200_19_7_1_0(1);
  test_inline_response_200_19_7_1_0(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_19_7_1_0_MAIN
#endif // inline_response_200_19_7_1_0_TEST
