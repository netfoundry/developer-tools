#ifndef inline_response_200_15__embedded_network_config_metadata_list_TEST
#define inline_response_200_15__embedded_network_config_metadata_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_15__embedded_network_config_metadata_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_15__embedded_network_config_metadata_list.h"
inline_response_200_15__embedded_network_config_metadata_list_t* instantiate_inline_response_200_15__embedded_network_config_metadata_list(int include_optional);

#include "test_inline_response_200_2__embedded__links.c"


inline_response_200_15__embedded_network_config_metadata_list_t* instantiate_inline_response_200_15__embedded_network_config_metadata_list(int include_optional) {
  inline_response_200_15__embedded_network_config_metadata_list_t* inline_response_200_15__embedded_network_config_metadata_list = NULL;
  if (include_optional) {
    inline_response_200_15__embedded_network_config_metadata_list = inline_response_200_15__embedded_network_config_metadata_list_create(
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded__links(0)
    );
  } else {
    inline_response_200_15__embedded_network_config_metadata_list = inline_response_200_15__embedded_network_config_metadata_list_create(
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return inline_response_200_15__embedded_network_config_metadata_list;
}


#ifdef inline_response_200_15__embedded_network_config_metadata_list_MAIN

void test_inline_response_200_15__embedded_network_config_metadata_list(int include_optional) {
    inline_response_200_15__embedded_network_config_metadata_list_t* inline_response_200_15__embedded_network_config_metadata_list_1 = instantiate_inline_response_200_15__embedded_network_config_metadata_list(include_optional);

	cJSON* jsoninline_response_200_15__embedded_network_config_metadata_list_1 = inline_response_200_15__embedded_network_config_metadata_list_convertToJSON(inline_response_200_15__embedded_network_config_metadata_list_1);
	printf("inline_response_200_15__embedded_network_config_metadata_list :\n%s\n", cJSON_Print(jsoninline_response_200_15__embedded_network_config_metadata_list_1));
	inline_response_200_15__embedded_network_config_metadata_list_t* inline_response_200_15__embedded_network_config_metadata_list_2 = inline_response_200_15__embedded_network_config_metadata_list_parseFromJSON(jsoninline_response_200_15__embedded_network_config_metadata_list_1);
	cJSON* jsoninline_response_200_15__embedded_network_config_metadata_list_2 = inline_response_200_15__embedded_network_config_metadata_list_convertToJSON(inline_response_200_15__embedded_network_config_metadata_list_2);
	printf("repeating inline_response_200_15__embedded_network_config_metadata_list:\n%s\n", cJSON_Print(jsoninline_response_200_15__embedded_network_config_metadata_list_2));
}

int main() {
  test_inline_response_200_15__embedded_network_config_metadata_list(1);
  test_inline_response_200_15__embedded_network_config_metadata_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_15__embedded_network_config_metadata_list_MAIN
#endif // inline_response_200_15__embedded_network_config_metadata_list_TEST
