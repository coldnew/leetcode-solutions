#include <gtest/gtest.h>

#include "0020-Valid-Parentheses.cpp"

#define LEETCODE_TEST(SolutionX)                        \
  TEST(ValidParenthesesTest, SolutionX) {               \
    auto IsValid = [](const std::string& str) -> bool { \
      SolutionX s;                                      \
      std::string str1 = str;                           \
      return s.isValid(str1);                           \
    };                                                  \
                                                        \
    EXPECT_FALSE(IsValid("("));                         \
    EXPECT_TRUE(IsValid("()"));                         \
    EXPECT_TRUE(IsValid("()[]{}"));                     \
    EXPECT_TRUE(IsValid("[]"));                         \
    EXPECT_FALSE(IsValid("(]"));                        \
    EXPECT_TRUE(IsValid("{[]}"));                       \
  }

LEETCODE_TEST(Solution1)
