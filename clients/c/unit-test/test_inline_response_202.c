#ifndef inline_response_202_TEST
#define inline_response_202_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_202_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_202.h"
inline_response_202_t* instantiate_inline_response_202(int include_optional);

#include "test_inline_response_202__links.c"


inline_response_202_t* instantiate_inline_response_202(int include_optional) {
  inline_response_202_t* inline_response_202 = NULL;
  if (include_optional) {
    inline_response_202 = inline_response_202_create(
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
      null,
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_202__links(0)
    );
  } else {
    inline_response_202 = inline_response_202_create(
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
      null,
      null,
      "0",
      NULL
    );
  }

  return inline_response_202;
}


#ifdef inline_response_202_MAIN

void test_inline_response_202(int include_optional) {
    inline_response_202_t* inline_response_202_1 = instantiate_inline_response_202(include_optional);

	cJSON* jsoninline_response_202_1 = inline_response_202_convertToJSON(inline_response_202_1);
	printf("inline_response_202 :\n%s\n", cJSON_Print(jsoninline_response_202_1));
	inline_response_202_t* inline_response_202_2 = inline_response_202_parseFromJSON(jsoninline_response_202_1);
	cJSON* jsoninline_response_202_2 = inline_response_202_convertToJSON(inline_response_202_2);
	printf("repeating inline_response_202:\n%s\n", cJSON_Print(jsoninline_response_202_2));
}

int main() {
  test_inline_response_202(1);
  test_inline_response_202(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_202_MAIN
#endif // inline_response_202_TEST
