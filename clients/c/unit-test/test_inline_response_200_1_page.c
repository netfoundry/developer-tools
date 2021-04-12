#ifndef inline_response_200_1_page_TEST
#define inline_response_200_1_page_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_1_page_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_1_page.h"
inline_response_200_1_page_t* instantiate_inline_response_200_1_page(int include_optional);



inline_response_200_1_page_t* instantiate_inline_response_200_1_page(int include_optional) {
  inline_response_200_1_page_t* inline_response_200_1_page = NULL;
  if (include_optional) {
    inline_response_200_1_page = inline_response_200_1_page_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    inline_response_200_1_page = inline_response_200_1_page_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return inline_response_200_1_page;
}


#ifdef inline_response_200_1_page_MAIN

void test_inline_response_200_1_page(int include_optional) {
    inline_response_200_1_page_t* inline_response_200_1_page_1 = instantiate_inline_response_200_1_page(include_optional);

	cJSON* jsoninline_response_200_1_page_1 = inline_response_200_1_page_convertToJSON(inline_response_200_1_page_1);
	printf("inline_response_200_1_page :\n%s\n", cJSON_Print(jsoninline_response_200_1_page_1));
	inline_response_200_1_page_t* inline_response_200_1_page_2 = inline_response_200_1_page_parseFromJSON(jsoninline_response_200_1_page_1);
	cJSON* jsoninline_response_200_1_page_2 = inline_response_200_1_page_convertToJSON(inline_response_200_1_page_2);
	printf("repeating inline_response_200_1_page:\n%s\n", cJSON_Print(jsoninline_response_200_1_page_2));
}

int main() {
  test_inline_response_200_1_page(1);
  test_inline_response_200_1_page(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_1_page_MAIN
#endif // inline_response_200_1_page_TEST
