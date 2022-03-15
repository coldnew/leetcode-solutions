#include <gtest/gtest.h>

#include "1249-Minimum-Remove-to-Make-Valid-Parentheses.cpp"

#define LEETCODE_TEST(SolutionX)                                        \
  TEST(MinimumRemoveToMakeValidParenthesesTest, SolutionX) {            \
    SolutionX s;                                                        \
    EXPECT_EQ("lee(t(c)o)de", s.minRemoveToMakeValid("lee(t(c)o)de)")); \
    EXPECT_EQ("", s.minRemoveToMakeValid("))(("));                      \
  }

LEETCODE_TEST(Solution1);
LEETCODE_TEST(Solution2);
