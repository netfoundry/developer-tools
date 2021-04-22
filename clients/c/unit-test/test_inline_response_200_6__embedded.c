#ifndef inline_response_200_6__embedded_TEST
#define inline_response_200_6__embedded_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_6__embedded_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_6__embedded.h"
inline_response_200_6__embedded_t* instantiate_inline_response_200_6__embedded(int include_optional);



inline_response_200_6__embedded_t* instantiate_inline_response_200_6__embedded(int include_optional) {
  inline_response_200_6__embedded_t* inline_response_200_6__embedded = NULL;
  if (include_optional) {
    inline_response_200_6__embedded = inline_response_200_6__embedded_create(
      list_create()
    );
  } else {
    inline_response_200_6__embedded = inline_response_200_6__embedded_create(
      list_create()
    );
  }

  return inline_response_200_6__embedded;
}


#ifdef inline_response_200_6__embedded_MAIN

void test_inline_response_200_6__embedded(int include_optional) {
    inline_response_200_6__embedded_t* inline_response_200_6__embedded_1 = instantiate_inline_response_200_6__embedded(include_optional);

	cJSON* jsoninline_response_200_6__embedded_1 = inline_response_200_6__embedded_convertToJSON(inline_response_200_6__embedded_1);
	printf("inline_response_200_6__embedded :\n%s\n", cJSON_Print(jsoninline_response_200_6__embedded_1));
	inline_response_200_6__embedded_t* inline_response_200_6__embedded_2 = inline_response_200_6__embedded_parseFromJSON(jsoninline_response_200_6__embedded_1);
	cJSON* jsoninline_response_200_6__embedded_2 = inline_response_200_6__embedded_convertToJSON(inline_response_200_6__embedded_2);
	printf("repeating inline_response_200_6__embedded:\n%s\n", cJSON_Print(jsoninline_response_200_6__embedded_2));
}

int main() {
  test_inline_response_200_6__embedded(1);
  test_inline_response_200_6__embedded(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_6__embedded_MAIN
#endif // inline_response_200_6__embedded_TEST
