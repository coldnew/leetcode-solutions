#include "0844-Backspace-String-Compare.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                     \
  TEST(BackspaceStringCompareTest, SolutionX##_01) { \
    SolutionX solution;                              \
    std::string s = "ab#c";                          \
    std::string t = "ad#c";                          \
    EXPECT_TRUE(solution.backspaceCompare(s, t));    \
  }                                                  \
                                                     \
  TEST(BackspaceStringCompareTest, SolutionX##_02) { \
    SolutionX solution;                              \
    std::string s = "ab##";                          \
    std::string t = "c#d#";                          \
    EXPECT_TRUE(solution.backspaceCompare(s, t));    \
  }                                                  \
                                                     \
  TEST(BackspaceStringCompareTest, SolutionX##_03) { \
    SolutionX solution;                              \
    std::string s = "a#c";                           \
    std::string t = "b";                             \
    EXPECT_FALSE(solution.backspaceCompare(s, t));   \
  }

LEETCODE_TEST(Solution1)
