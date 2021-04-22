#ifndef inline_response_200_13_TEST
#define inline_response_200_13_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_13_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_13.h"
inline_response_200_13_t* instantiate_inline_response_200_13(int include_optional);

#include "test_inline_response_200_1__embedded__links.c"


inline_response_200_13_t* instantiate_inline_response_200_13(int include_optional) {
  inline_response_200_13_t* inline_response_200_13 = NULL;
  if (include_optional) {
    inline_response_200_13 = inline_response_200_13_create(
      null,
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
      null,
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_1__embedded__links(0)
    );
  } else {
    inline_response_200_13 = inline_response_200_13_create(
      null,
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
      null,
      null,
      "0",
      NULL
    );
  }

  return inline_response_200_13;
}


#ifdef inline_response_200_13_MAIN

void test_inline_response_200_13(int include_optional) {
    inline_response_200_13_t* inline_response_200_13_1 = instantiate_inline_response_200_13(include_optional);

	cJSON* jsoninline_response_200_13_1 = inline_response_200_13_convertToJSON(inline_response_200_13_1);
	printf("inline_response_200_13 :\n%s\n", cJSON_Print(jsoninline_response_200_13_1));
	inline_response_200_13_t* inline_response_200_13_2 = inline_response_200_13_parseFromJSON(jsoninline_response_200_13_1);
	cJSON* jsoninline_response_200_13_2 = inline_response_200_13_convertToJSON(inline_response_200_13_2);
	printf("repeating inline_response_200_13:\n%s\n", cJSON_Print(jsoninline_response_200_13_2));
}

int main() {
  test_inline_response_200_13(1);
  test_inline_response_200_13(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_13_MAIN
#endif // inline_response_200_13_TEST
