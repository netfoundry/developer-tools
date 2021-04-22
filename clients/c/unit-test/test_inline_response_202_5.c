#ifndef inline_response_202_5_TEST
#define inline_response_202_5_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_202_5_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_202_5.h"
inline_response_202_5_t* instantiate_inline_response_202_5(int include_optional);

#include "test_inline_response_202_1__links.c"


inline_response_202_5_t* instantiate_inline_response_202_5(int include_optional) {
  inline_response_202_5_t* inline_response_202_5 = NULL;
  if (include_optional) {
    inline_response_202_5 = inline_response_202_5_create(
      null,
      "0",
      "0",
      "0",
      null,
      1,
      null,
      null,
      "0",
      list_create(),
      null,
      null,
      "0",
      null,
      "0",
      null,
      "0",
      "0",
      null,
      null,
      1,
      null,
      1,
       // false, not to have infinite recursion
      instantiate_inline_response_202_1__links(0)
    );
  } else {
    inline_response_202_5 = inline_response_202_5_create(
      null,
      "0",
      "0",
      "0",
      null,
      1,
      null,
      null,
      "0",
      list_create(),
      null,
      null,
      "0",
      null,
      "0",
      null,
      "0",
      "0",
      null,
      null,
      1,
      null,
      1,
      NULL
    );
  }

  return inline_response_202_5;
}


#ifdef inline_response_202_5_MAIN

void test_inline_response_202_5(int include_optional) {
    inline_response_202_5_t* inline_response_202_5_1 = instantiate_inline_response_202_5(include_optional);

	cJSON* jsoninline_response_202_5_1 = inline_response_202_5_convertToJSON(inline_response_202_5_1);
	printf("inline_response_202_5 :\n%s\n", cJSON_Print(jsoninline_response_202_5_1));
	inline_response_202_5_t* inline_response_202_5_2 = inline_response_202_5_parseFromJSON(jsoninline_response_202_5_1);
	cJSON* jsoninline_response_202_5_2 = inline_response_202_5_convertToJSON(inline_response_202_5_2);
	printf("repeating inline_response_202_5:\n%s\n", cJSON_Print(jsoninline_response_202_5_2));
}

int main() {
  test_inline_response_202_5(1);
  test_inline_response_202_5(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_202_5_MAIN
#endif // inline_response_202_5_TEST
