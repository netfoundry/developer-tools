#ifndef inline_response_200_4_TEST
#define inline_response_200_4_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_4_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_4.h"
inline_response_200_4_t* instantiate_inline_response_200_4(int include_optional);

#include "test_inline_response_200_4__embedded.c"
#include "test_inline_response_200_2__embedded__links.c"
#include "test_inline_response_200_1_page.c"


inline_response_200_4_t* instantiate_inline_response_200_4(int include_optional) {
  inline_response_200_4_t* inline_response_200_4 = NULL;
  if (include_optional) {
    inline_response_200_4 = inline_response_200_4_create(
       // false, not to have infinite recursion
      instantiate_inline_response_200_4__embedded(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded__links(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_1_page(0)
    );
  } else {
    inline_response_200_4 = inline_response_200_4_create(
      NULL,
      NULL,
      NULL
    );
  }

  return inline_response_200_4;
}


#ifdef inline_response_200_4_MAIN

void test_inline_response_200_4(int include_optional) {
    inline_response_200_4_t* inline_response_200_4_1 = instantiate_inline_response_200_4(include_optional);

	cJSON* jsoninline_response_200_4_1 = inline_response_200_4_convertToJSON(inline_response_200_4_1);
	printf("inline_response_200_4 :\n%s\n", cJSON_Print(jsoninline_response_200_4_1));
	inline_response_200_4_t* inline_response_200_4_2 = inline_response_200_4_parseFromJSON(jsoninline_response_200_4_1);
	cJSON* jsoninline_response_200_4_2 = inline_response_200_4_convertToJSON(inline_response_200_4_2);
	printf("repeating inline_response_200_4:\n%s\n", cJSON_Print(jsoninline_response_200_4_2));
}

int main() {
  test_inline_response_200_4(1);
  test_inline_response_200_4(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_4_MAIN
#endif // inline_response_200_4_TEST
