#ifndef inline_response_500_1_status_TEST
#define inline_response_500_1_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_500_1_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_500_1_status.h"
inline_response_500_1_status_t* instantiate_inline_response_500_1_status(int include_optional);



inline_response_500_1_status_t* instantiate_inline_response_500_1_status(int include_optional) {
  inline_response_500_1_status_t* inline_response_500_1_status = NULL;
  if (include_optional) {
    inline_response_500_1_status = inline_response_500_1_status_create(
      1.337,
      "0"
    );
  } else {
    inline_response_500_1_status = inline_response_500_1_status_create(
      1.337,
      "0"
    );
  }

  return inline_response_500_1_status;
}


#ifdef inline_response_500_1_status_MAIN

void test_inline_response_500_1_status(int include_optional) {
    inline_response_500_1_status_t* inline_response_500_1_status_1 = instantiate_inline_response_500_1_status(include_optional);

	cJSON* jsoninline_response_500_1_status_1 = inline_response_500_1_status_convertToJSON(inline_response_500_1_status_1);
	printf("inline_response_500_1_status :\n%s\n", cJSON_Print(jsoninline_response_500_1_status_1));
	inline_response_500_1_status_t* inline_response_500_1_status_2 = inline_response_500_1_status_parseFromJSON(jsoninline_response_500_1_status_1);
	cJSON* jsoninline_response_500_1_status_2 = inline_response_500_1_status_convertToJSON(inline_response_500_1_status_2);
	printf("repeating inline_response_500_1_status:\n%s\n", cJSON_Print(jsoninline_response_500_1_status_2));
}

int main() {
  test_inline_response_500_1_status(1);
  test_inline_response_500_1_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_500_1_status_MAIN
#endif // inline_response_500_1_status_TEST
