#ifndef inline_response_200__links_self_TEST
#define inline_response_200__links_self_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200__links_self_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200__links_self.h"
inline_response_200__links_self_t* instantiate_inline_response_200__links_self(int include_optional);



inline_response_200__links_self_t* instantiate_inline_response_200__links_self(int include_optional) {
  inline_response_200__links_self_t* inline_response_200__links_self = NULL;
  if (include_optional) {
    inline_response_200__links_self = inline_response_200__links_self_create(
      "0"
    );
  } else {
    inline_response_200__links_self = inline_response_200__links_self_create(
      "0"
    );
  }

  return inline_response_200__links_self;
}


#ifdef inline_response_200__links_self_MAIN

void test_inline_response_200__links_self(int include_optional) {
    inline_response_200__links_self_t* inline_response_200__links_self_1 = instantiate_inline_response_200__links_self(include_optional);

	cJSON* jsoninline_response_200__links_self_1 = inline_response_200__links_self_convertToJSON(inline_response_200__links_self_1);
	printf("inline_response_200__links_self :\n%s\n", cJSON_Print(jsoninline_response_200__links_self_1));
	inline_response_200__links_self_t* inline_response_200__links_self_2 = inline_response_200__links_self_parseFromJSON(jsoninline_response_200__links_self_1);
	cJSON* jsoninline_response_200__links_self_2 = inline_response_200__links_self_convertToJSON(inline_response_200__links_self_2);
	printf("repeating inline_response_200__links_self:\n%s\n", cJSON_Print(jsoninline_response_200__links_self_2));
}

int main() {
  test_inline_response_200__links_self(1);
  test_inline_response_200__links_self(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200__links_self_MAIN
#endif // inline_response_200__links_self_TEST
