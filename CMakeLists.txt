cmake_minimum_required(VERSION 3.0.0)
project(TestClangFeatures VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 20)

# set (CXX_SANITIZE_OPT "-g -fsanitize=address")
# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_SANITIZE_OPT}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
include(CTest)
enable_testing()

add_executable(TestClangFeatures main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
