#ifndef inline_response_200_14_updated_at_TEST
#define inline_response_200_14_updated_at_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_14_updated_at_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_14_updated_at.h"
inline_response_200_14_updated_at_t* instantiate_inline_response_200_14_updated_at(int include_optional);



inline_response_200_14_updated_at_t* instantiate_inline_response_200_14_updated_at(int include_optional) {
  inline_response_200_14_updated_at_t* inline_response_200_14_updated_at = NULL;
  if (include_optional) {
    inline_response_200_14_updated_at = inline_response_200_14_updated_at_create(
      1.337,
      1.337
    );
  } else {
    inline_response_200_14_updated_at = inline_response_200_14_updated_at_create(
      1.337,
      1.337
    );
  }

  return inline_response_200_14_updated_at;
}


#ifdef inline_response_200_14_updated_at_MAIN

void test_inline_response_200_14_updated_at(int include_optional) {
    inline_response_200_14_updated_at_t* inline_response_200_14_updated_at_1 = instantiate_inline_response_200_14_updated_at(include_optional);

	cJSON* jsoninline_response_200_14_updated_at_1 = inline_response_200_14_updated_at_convertToJSON(inline_response_200_14_updated_at_1);
	printf("inline_response_200_14_updated_at :\n%s\n", cJSON_Print(jsoninline_response_200_14_updated_at_1));
	inline_response_200_14_updated_at_t* inline_response_200_14_updated_at_2 = inline_response_200_14_updated_at_parseFromJSON(jsoninline_response_200_14_updated_at_1);
	cJSON* jsoninline_response_200_14_updated_at_2 = inline_response_200_14_updated_at_convertToJSON(inline_response_200_14_updated_at_2);
	printf("repeating inline_response_200_14_updated_at:\n%s\n", cJSON_Print(jsoninline_response_200_14_updated_at_2));
}

int main() {
  test_inline_response_200_14_updated_at(1);
  test_inline_response_200_14_updated_at(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_14_updated_at_MAIN
#endif // inline_response_200_14_updated_at_TEST
