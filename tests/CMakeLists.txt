find_package(GTest REQUIRED)

add_executable(TestClangFeatures test.cpp)

if (GTest_FOUND)
    message("In GTest")
    message(${GTest_LIBRARIES})
    message(${GTest_INCLUDE_DIRS})
    target_link_libraries(TestClangFeatures PRIVATE MathFunc ${GTest_LIBRARIES})

    target_include_directories(TestClangFeatures PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/src/math_func"
                            ${GTest_INCLUDE_DIRS}
                            )
endif()