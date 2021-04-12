#ifndef inline_response_500_1_TEST
#define inline_response_500_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_500_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_500_1.h"
inline_response_500_1_t* instantiate_inline_response_500_1(int include_optional);

#include "test_inline_response_500_1_status.c"


inline_response_500_1_t* instantiate_inline_response_500_1(int include_optional) {
  inline_response_500_1_t* inline_response_500_1 = NULL;
  if (include_optional) {
    inline_response_500_1 = inline_response_500_1_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_inline_response_500_1_status(0),
      "0"
    );
  } else {
    inline_response_500_1 = inline_response_500_1_create(
      list_create(),
      NULL,
      "0"
    );
  }

  return inline_response_500_1;
}


#ifdef inline_response_500_1_MAIN

void test_inline_response_500_1(int include_optional) {
    inline_response_500_1_t* inline_response_500_1_1 = instantiate_inline_response_500_1(include_optional);

	cJSON* jsoninline_response_500_1_1 = inline_response_500_1_convertToJSON(inline_response_500_1_1);
	printf("inline_response_500_1 :\n%s\n", cJSON_Print(jsoninline_response_500_1_1));
	inline_response_500_1_t* inline_response_500_1_2 = inline_response_500_1_parseFromJSON(jsoninline_response_500_1_1);
	cJSON* jsoninline_response_500_1_2 = inline_response_500_1_convertToJSON(inline_response_500_1_2);
	printf("repeating inline_response_500_1:\n%s\n", cJSON_Print(jsoninline_response_500_1_2));
}

int main() {
  test_inline_response_500_1(1);
  test_inline_response_500_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_500_1_MAIN
#endif // inline_response_500_1_TEST
