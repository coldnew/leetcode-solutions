#include <gtest/gtest.h>

#include "0856-Score-of-Parentheses.cpp"

#define LEETCODE_TEST(SolutionX)                  \
  TEST(ScoreOfParenthesesTest, SolutionX) {       \
    auto ScoreOfParentheses = [](const char* s) { \
      std::string str = s;                        \
      SolutionX so;                               \
      return so.scoreOfParentheses(str);          \
    };                                            \
                                                  \
    EXPECT_EQ(1, ScoreOfParentheses("()"));       \
    EXPECT_EQ(2, ScoreOfParentheses("(())"));     \
    EXPECT_EQ(2, ScoreOfParentheses("()()"));     \
    EXPECT_EQ(6, ScoreOfParentheses("(()(()))")); \
  }

LEETCODE_TEST(Solution1);
