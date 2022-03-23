#include "0991-Broken-Calculator.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)               \
  TEST(BrokenCalculatorTest, SolutionX##_01) { \
    SolutionX s;                               \
    EXPECT_EQ(2, s.brokenCalc(2, 3));          \
  }                                            \
                                               \
  TEST(BrokenCalculatorTest, SolutionX##_02) { \
    SolutionX s;                               \
    EXPECT_EQ(2, s.brokenCalc(5, 8));          \
  }                                            \
                                               \
  TEST(BrokenCalculatorTest, SolutionX##_03) { \
    SolutionX s;                               \
    EXPECT_EQ(3, s.brokenCalc(3, 10));         \
  }

LEETCODE_TEST(Solution1);
LEETCODE_TEST(Solution2);
