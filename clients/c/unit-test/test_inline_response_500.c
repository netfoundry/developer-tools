#ifndef inline_response_500_TEST
#define inline_response_500_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_500_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_500.h"
inline_response_500_t* instantiate_inline_response_500(int include_optional);



inline_response_500_t* instantiate_inline_response_500(int include_optional) {
  inline_response_500_t* inline_response_500 = NULL;
  if (include_optional) {
    inline_response_500 = inline_response_500_create(
      "0",
      "0",
      1.337,
      "0"
    );
  } else {
    inline_response_500 = inline_response_500_create(
      "0",
      "0",
      1.337,
      "0"
    );
  }

  return inline_response_500;
}


#ifdef inline_response_500_MAIN

void test_inline_response_500(int include_optional) {
    inline_response_500_t* inline_response_500_1 = instantiate_inline_response_500(include_optional);

	cJSON* jsoninline_response_500_1 = inline_response_500_convertToJSON(inline_response_500_1);
	printf("inline_response_500 :\n%s\n", cJSON_Print(jsoninline_response_500_1));
	inline_response_500_t* inline_response_500_2 = inline_response_500_parseFromJSON(jsoninline_response_500_1);
	cJSON* jsoninline_response_500_2 = inline_response_500_convertToJSON(inline_response_500_2);
	printf("repeating inline_response_500:\n%s\n", cJSON_Print(jsoninline_response_500_2));
}

int main() {
  test_inline_response_500(1);
  test_inline_response_500(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_500_MAIN
#endif // inline_response_500_TEST
