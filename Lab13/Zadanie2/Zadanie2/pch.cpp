#include "pch.h"
TEST(reciprocalNumberFunc, PositiveNumbers) {
    ASSERT_DOUBLE_EQ(reciprocalNumber(2), 0.5);
}

TEST(reciprocalNumberFunc, NegativeNumbers) {
    ASSERT_DOUBLE_EQ(reciprocalNumber(-2), -0.5);
}

TEST(reciprocalNumberFunc, ThrowWhenZero) {
    ASSERT_THROW(reciprocalNumber(0.0), std::invalid_argument);
}

