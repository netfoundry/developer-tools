#ifndef inline_response_200_18_TEST
#define inline_response_200_18_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_18_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_18.h"
inline_response_200_18_t* instantiate_inline_response_200_18(int include_optional);

#include "test_inline_response_200_18__embedded.c"
#include "test_inline_response_200_2__embedded__links.c"
#include "test_inline_response_200_1_page.c"


inline_response_200_18_t* instantiate_inline_response_200_18(int include_optional) {
  inline_response_200_18_t* inline_response_200_18 = NULL;
  if (include_optional) {
    inline_response_200_18 = inline_response_200_18_create(
       // false, not to have infinite recursion
      instantiate_inline_response_200_18__embedded(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded__links(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_1_page(0)
    );
  } else {
    inline_response_200_18 = inline_response_200_18_create(
      NULL,
      NULL,
      NULL
    );
  }

  return inline_response_200_18;
}


#ifdef inline_response_200_18_MAIN

void test_inline_response_200_18(int include_optional) {
    inline_response_200_18_t* inline_response_200_18_1 = instantiate_inline_response_200_18(include_optional);

	cJSON* jsoninline_response_200_18_1 = inline_response_200_18_convertToJSON(inline_response_200_18_1);
	printf("inline_response_200_18 :\n%s\n", cJSON_Print(jsoninline_response_200_18_1));
	inline_response_200_18_t* inline_response_200_18_2 = inline_response_200_18_parseFromJSON(jsoninline_response_200_18_1);
	cJSON* jsoninline_response_200_18_2 = inline_response_200_18_convertToJSON(inline_response_200_18_2);
	printf("repeating inline_response_200_18:\n%s\n", cJSON_Print(jsoninline_response_200_18_2));
}

int main() {
  test_inline_response_200_18(1);
  test_inline_response_200_18(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_18_MAIN
#endif // inline_response_200_18_TEST
