#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <iostream>

#include "../math_func/includes/math.hpp"

TEST(SumFunction, TestSuccess) {
    EXPECT_EQ(5, mathFunc::sum(3, 2));
    EXPECT_EQ(8, mathFunc::sum(3, 5));
}

TEST(SumFunction, TestFailed) {
    EXPECT_NE(3, mathFunc::sum(3, 2));
    EXPECT_NE(2, mathFunc::sum(3, 5));
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}