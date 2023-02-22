cmake_minimum_required(VERSION 3.0.0)
project(common_algo VERSION 0.1.0)

include(CTest)
enable_testing()
#add_subdirectory(mergesort)
#add_subdirectory(kalman_filter)
#add_subdirectory(linkedlist)
add_subdirectory(binarytree)
add_executable(common_algo main.cpp )
target_link_libraries(common_algo 
#                       PRIVATE mergesort_lib 
#                       kalman_filter_lib
#                        linkedlist_lib
                        binarytree_lib
                     )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
