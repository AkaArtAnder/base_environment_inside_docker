cmake_minimum_required(VERSION 3.0.0)
project(TestClangFeatures VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED True)
set (CONAN_PACKAGES "${CMAKE_SOURCE_DIR}/conan/build")

set (CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR};${CMAKE_MODULE_PATH};${CONAN_PACKAGES}")

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# set (CXX_SANITIZE_OPT "-g -fsanitize=address")
# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_SANITIZE_OPT}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_subdirectory(src/math_func)
add_subdirectory(tests)