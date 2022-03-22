#include <gtest/gtest.h>

#include "1663-Smallest-String-With-A-Given-Numeric-Value.cpp"

#define LEETCODE_TEST(SolutionX)                              \
  TEST(SmallestStringWithAGivenNumericValueTest, SolutionX) { \
    SolutionX s;                                              \
    EXPECT_EQ("aay", s.getSmallestString(3, 27));             \
    EXPECT_EQ("aaszz", s.getSmallestString(5, 73));           \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
LEETCODE_TEST(Solution3)
