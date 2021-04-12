#ifndef inline_response_200_11_TEST
#define inline_response_200_11_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_11_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_11.h"
inline_response_200_11_t* instantiate_inline_response_200_11(int include_optional);

#include "test_inline_response_200_11__links.c"


inline_response_200_11_t* instantiate_inline_response_200_11(int include_optional) {
  inline_response_200_11_t* inline_response_200_11 = NULL;
  if (include_optional) {
    inline_response_200_11 = inline_response_200_11_create(
      "0",
      "0",
      "0",
      1,
      null,
      null,
      null,
      "0",
      1,
      "0",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_inline_response_200_11__links(0)
    );
  } else {
    inline_response_200_11 = inline_response_200_11_create(
      "0",
      "0",
      "0",
      1,
      null,
      null,
      null,
      "0",
      1,
      "0",
      1,
      1,
      NULL
    );
  }

  return inline_response_200_11;
}


#ifdef inline_response_200_11_MAIN

void test_inline_response_200_11(int include_optional) {
    inline_response_200_11_t* inline_response_200_11_1 = instantiate_inline_response_200_11(include_optional);

	cJSON* jsoninline_response_200_11_1 = inline_response_200_11_convertToJSON(inline_response_200_11_1);
	printf("inline_response_200_11 :\n%s\n", cJSON_Print(jsoninline_response_200_11_1));
	inline_response_200_11_t* inline_response_200_11_2 = inline_response_200_11_parseFromJSON(jsoninline_response_200_11_1);
	cJSON* jsoninline_response_200_11_2 = inline_response_200_11_convertToJSON(inline_response_200_11_2);
	printf("repeating inline_response_200_11:\n%s\n", cJSON_Print(jsoninline_response_200_11_2));
}

int main() {
  test_inline_response_200_11(1);
  test_inline_response_200_11(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_11_MAIN
#endif // inline_response_200_11_TEST
