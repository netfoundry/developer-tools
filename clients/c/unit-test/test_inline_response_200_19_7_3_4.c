#ifndef inline_response_200_19_7_3_4_TEST
#define inline_response_200_19_7_3_4_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_19_7_3_4_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_19_7_3_4.h"
inline_response_200_19_7_3_4_t* instantiate_inline_response_200_19_7_3_4(int include_optional);



inline_response_200_19_7_3_4_t* instantiate_inline_response_200_19_7_3_4(int include_optional) {
  inline_response_200_19_7_3_4_t* inline_response_200_19_7_3_4 = NULL;
  if (include_optional) {
    inline_response_200_19_7_3_4 = inline_response_200_19_7_3_4_create(
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
    inline_response_200_19_7_3_4 = inline_response_200_19_7_3_4_create(
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

  return inline_response_200_19_7_3_4;
}


#ifdef inline_response_200_19_7_3_4_MAIN

void test_inline_response_200_19_7_3_4(int include_optional) {
    inline_response_200_19_7_3_4_t* inline_response_200_19_7_3_4_1 = instantiate_inline_response_200_19_7_3_4(include_optional);

	cJSON* jsoninline_response_200_19_7_3_4_1 = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19_7_3_4_1);
	printf("inline_response_200_19_7_3_4 :\n%s\n", cJSON_Print(jsoninline_response_200_19_7_3_4_1));
	inline_response_200_19_7_3_4_t* inline_response_200_19_7_3_4_2 = inline_response_200_19_7_3_4_parseFromJSON(jsoninline_response_200_19_7_3_4_1);
	cJSON* jsoninline_response_200_19_7_3_4_2 = inline_response_200_19_7_3_4_convertToJSON(inline_response_200_19_7_3_4_2);
	printf("repeating inline_response_200_19_7_3_4:\n%s\n", cJSON_Print(jsoninline_response_200_19_7_3_4_2));
}

int main() {
  test_inline_response_200_19_7_3_4(1);
  test_inline_response_200_19_7_3_4(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_19_7_3_4_MAIN
#endif // inline_response_200_19_7_3_4_TEST
