#include "practiceA.cpp"
#include "gtest/gtest.h"

TEST(FactorialTest, Negative) {
  EXPECT_EQ(1, factorial(-5));
  EXPECT_EQ(1, factorial(-10));
}