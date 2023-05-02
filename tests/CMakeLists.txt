find_package(GTest REQUIRED)
find_package(Poco REQUIRED)

add_executable(TestClangFeatures test.cpp)

if (GTest_FOUND AND Poco_FOUND)
    message("In GTest")
    message(${GTest_LIBRARIES})
    message(${GTest_INCLUDE_DIRS})
    target_link_libraries(TestClangFeatures PRIVATE MathFunc ${GTest_LIBRARIES} ${Poco_LIBRARIES})

    target_include_directories(TestClangFeatures PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/src/math_func"
                            ${GTest_INCLUDE_DIRS}
                            ${Poco_INCLUDE_DIRS}
                            )
endif()

target_compile_options(TestClangFeatures PRIVATE -Wall -Wextra -Werror)