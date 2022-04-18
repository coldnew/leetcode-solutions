#include "0231-Power-of-Two.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)         \
  TEST(PowerOfTwoTest, SolutionX##_01) { \
    SolutionX s;                         \
    EXPECT_TRUE(s.isPowerOfTwo(1));      \
  }                                      \
                                         \
  TEST(PowerOfTwoTest, SolutionX##_02) { \
    SolutionX s;                         \
    EXPECT_TRUE(s.isPowerOfTwo(16));     \
  }                                      \
                                         \
  TEST(PowerOfTwoTest, SolutionX##_03) { \
    SolutionX s;                         \
    EXPECT_FALSE(s.isPowerOfTwo(3));     \
  }

LEETCODE_TEST(Solution1)
