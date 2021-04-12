cmake_minimum_required (VERSION 2.6)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenSSL)

if (OPENSSL_FOUND)
	message (STATUS "OPENSSL found")
	set (CMAKE_C_FLAGS "-DOPENSSL")
	include_directories(${OPENSSL_INCLUDE_DIR})
	include_directories(${OPENSSL_INCLUDE_DIRS})
	link_directories(${OPENSSL_LIBRARIES})
	message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else() 
	message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "untitled_api")

find_package(CURL 7.58.0 REQUIRED)
if(CURL_FOUND)
	include_directories(${CURL_INCLUDE_DIR})
	set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else(CURL_FOUND)
	message(FATAL_ERROR "Could not find the CURL library and development files.")
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/_core_v2_endpoints_enrollment_method.c
    model/_core_v2_services__service_id__model.c
    model/_core_v2_services__service_id__model_client_ingress.c
    model/_core_v2_services__service_id__model_server_egress.c
    model/_core_v2_services_model.c
    model/_core_v2_services_model_client_ingress.c
    model/_core_v2_services_model_client_ingress_ports.c
    model/_core_v2_services_model_edge_router_hosts.c
    model/_core_v2_services_model_server_egress.c
    model/inline_object.c
    model/inline_object_1.c
    model/inline_object_2.c
    model/inline_object_3.c
    model/inline_object_4.c
    model/inline_object_5.c
    model/inline_object_6.c
    model/inline_response_200.c
    model/inline_response_200_1.c
    model/inline_response_200_10.c
    model/inline_response_200_11.c
    model/inline_response_200_11__links.c
    model/inline_response_200_12.c
    model/inline_response_200_13.c
    model/inline_response_200_14.c
    model/inline_response_200_14_identity_providers.c
    model/inline_response_200_14_updated_at.c
    model/inline_response_200_15.c
    model/inline_response_200_15__embedded.c
    model/inline_response_200_15__embedded_network_config_metadata_list.c
    model/inline_response_200_16.c
    model/inline_response_200_17.c
    model/inline_response_200_17__embedded.c
    model/inline_response_200_17__embedded_organizations.c
    model/inline_response_200_17__links.c
    model/inline_response_200_18.c
    model/inline_response_200_18__embedded.c
    model/inline_response_200_19.c
    model/inline_response_200_19_7_1_0.c
    model/inline_response_200_19_7_3_16.c
    model/inline_response_200_19_7_3_4.c
    model/inline_response_200_1__embedded.c
    model/inline_response_200_1__embedded__links.c
    model/inline_response_200_1__embedded_network_list.c
    model/inline_response_200_1__links.c
    model/inline_response_200_1__links_self.c
    model/inline_response_200_1_page.c
    model/inline_response_200_2.c
    model/inline_response_200_2__embedded.c
    model/inline_response_200_2__embedded__links.c
    model/inline_response_200_2__embedded_data_centers.c
    model/inline_response_200_3.c
    model/inline_response_200_3__embedded.c
    model/inline_response_200_3__embedded_config_id_by_config_type_id.c
    model/inline_response_200_3__embedded_model.c
    model/inline_response_200_3__embedded_model_client_ingress.c
    model/inline_response_200_3__embedded_model_client_ingress_ports.c
    model/inline_response_200_3__embedded_model_edge_router_hosts.c
    model/inline_response_200_3__embedded_model_server_egress.c
    model/inline_response_200_3__embedded_model_server_egress_1.c
    model/inline_response_200_3__embedded_service_list.c
    model/inline_response_200_4.c
    model/inline_response_200_4__embedded.c
    model/inline_response_200_4__embedded_edge_router_policy_list.c
    model/inline_response_200_5.c
    model/inline_response_200_5_config_id_by_config_type_id.c
    model/inline_response_200_6.c
    model/inline_response_200_6__embedded.c
    model/inline_response_200_7.c
    model/inline_response_200_7__embedded.c
    model/inline_response_200_7__embedded_endpoint_list.c
    model/inline_response_200_8.c
    model/inline_response_200_9.c
    model/inline_response_200__links.c
    model/inline_response_200__links_network.c
    model/inline_response_200__links_self.c
    model/inline_response_202.c
    model/inline_response_202_1.c
    model/inline_response_202_1__links.c
    model/inline_response_202_1_config_id_by_config_type_id.c
    model/inline_response_202_2.c
    model/inline_response_202_2_config_id_by_config_type_id.c
    model/inline_response_202_3.c
    model/inline_response_202_3_config_id_by_config_type_id.c
    model/inline_response_202_3_model.c
    model/inline_response_202_3_model_client_ingress.c
    model/inline_response_202_4.c
    model/inline_response_202_4__links.c
    model/inline_response_202_4_network_controller.c
    model/inline_response_202_5.c
    model/inline_response_202__links.c
    model/inline_response_500.c
    model/inline_response_500_1.c
    model/inline_response_500_1_status.c
    api/DefaultAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/_core_v2_endpoints_enrollment_method.h
    model/_core_v2_services__service_id__model.h
    model/_core_v2_services__service_id__model_client_ingress.h
    model/_core_v2_services__service_id__model_server_egress.h
    model/_core_v2_services_model.h
    model/_core_v2_services_model_client_ingress.h
    model/_core_v2_services_model_client_ingress_ports.h
    model/_core_v2_services_model_edge_router_hosts.h
    model/_core_v2_services_model_server_egress.h
    model/inline_object.h
    model/inline_object_1.h
    model/inline_object_2.h
    model/inline_object_3.h
    model/inline_object_4.h
    model/inline_object_5.h
    model/inline_object_6.h
    model/inline_response_200.h
    model/inline_response_200_1.h
    model/inline_response_200_10.h
    model/inline_response_200_11.h
    model/inline_response_200_11__links.h
    model/inline_response_200_12.h
    model/inline_response_200_13.h
    model/inline_response_200_14.h
    model/inline_response_200_14_identity_providers.h
    model/inline_response_200_14_updated_at.h
    model/inline_response_200_15.h
    model/inline_response_200_15__embedded.h
    model/inline_response_200_15__embedded_network_config_metadata_list.h
    model/inline_response_200_16.h
    model/inline_response_200_17.h
    model/inline_response_200_17__embedded.h
    model/inline_response_200_17__embedded_organizations.h
    model/inline_response_200_17__links.h
    model/inline_response_200_18.h
    model/inline_response_200_18__embedded.h
    model/inline_response_200_19.h
    model/inline_response_200_19_7_1_0.h
    model/inline_response_200_19_7_3_16.h
    model/inline_response_200_19_7_3_4.h
    model/inline_response_200_1__embedded.h
    model/inline_response_200_1__embedded__links.h
    model/inline_response_200_1__embedded_network_list.h
    model/inline_response_200_1__links.h
    model/inline_response_200_1__links_self.h
    model/inline_response_200_1_page.h
    model/inline_response_200_2.h
    model/inline_response_200_2__embedded.h
    model/inline_response_200_2__embedded__links.h
    model/inline_response_200_2__embedded_data_centers.h
    model/inline_response_200_3.h
    model/inline_response_200_3__embedded.h
    model/inline_response_200_3__embedded_config_id_by_config_type_id.h
    model/inline_response_200_3__embedded_model.h
    model/inline_response_200_3__embedded_model_client_ingress.h
    model/inline_response_200_3__embedded_model_client_ingress_ports.h
    model/inline_response_200_3__embedded_model_edge_router_hosts.h
    model/inline_response_200_3__embedded_model_server_egress.h
    model/inline_response_200_3__embedded_model_server_egress_1.h
    model/inline_response_200_3__embedded_service_list.h
    model/inline_response_200_4.h
    model/inline_response_200_4__embedded.h
    model/inline_response_200_4__embedded_edge_router_policy_list.h
    model/inline_response_200_5.h
    model/inline_response_200_5_config_id_by_config_type_id.h
    model/inline_response_200_6.h
    model/inline_response_200_6__embedded.h
    model/inline_response_200_7.h
    model/inline_response_200_7__embedded.h
    model/inline_response_200_7__embedded_endpoint_list.h
    model/inline_response_200_8.h
    model/inline_response_200_9.h
    model/inline_response_200__links.h
    model/inline_response_200__links_network.h
    model/inline_response_200__links_self.h
    model/inline_response_202.h
    model/inline_response_202_1.h
    model/inline_response_202_1__links.h
    model/inline_response_202_1_config_id_by_config_type_id.h
    model/inline_response_202_2.h
    model/inline_response_202_2_config_id_by_config_type_id.h
    model/inline_response_202_3.h
    model/inline_response_202_3_config_id_by_config_type_id.h
    model/inline_response_202_3_model.h
    model/inline_response_202_3_model_client_ingress.h
    model/inline_response_202_4.h
    model/inline_response_202_4__links.h
    model/inline_response_202_4_network_controller.h
    model/inline_response_202_5.h
    model/inline_response_202__links.h
    model/inline_response_500.h
    model/inline_response_500_1.h
    model/inline_response_500_1_status.h
    api/DefaultAPI.h

)

# Add library with project file with projectname as library name
add_library(${pkgName} SHARED ${SRCS} ${HDRS})
# Link dependent libraries
target_link_libraries(${pkgName} ${CURL_LIBRARIES} )
#install library to destination
install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled libary to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-DefaultAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable doesnot support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created libary to executable and dependent libary curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
