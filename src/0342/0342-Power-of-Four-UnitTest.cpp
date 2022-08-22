#include "0342-Power-of-Four.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)          \
  TEST(PowerOfFourTest, SolutionX##_01) { \
    SolutionX s;                          \
    int n = 16;                           \
    EXPECT_TRUE(s.isPowerOfFour(n));      \
  }                                       \
                                          \
  TEST(PowerOfFourTest, SolutionX##_02) { \
    SolutionX s;                          \
    int n = 5;                            \
    EXPECT_FALSE(s.isPowerOfFour(n));     \
  }                                       \
                                          \
  TEST(PowerOfFourTest, SolutionX##_03) { \
    SolutionX s;                          \
    int n = 1;                            \
    EXPECT_TRUE(s.isPowerOfFour(n));      \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
