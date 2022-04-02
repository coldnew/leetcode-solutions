#include "0125-Valid-Palindrome.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                   \
  TEST(ValidPalindromeTest, SolutionX##_01) {                      \
    SolutionX s;                                                   \
    EXPECT_TRUE(s.isPalindrome("A man, a plan, a canal: Panama")); \
  }                                                                \
                                                                   \
  TEST(ValidPalindromeTest, SolutionX##_02) {                      \
    SolutionX s;                                                   \
    EXPECT_FALSE(s.isPalindrome("race a car"));                    \
  }                                                                \
                                                                   \
  TEST(ValidPalindromeTest, SolutionX##_03) {                      \
    SolutionX s;                                                   \
    EXPECT_TRUE(s.isPalindrome(" "));                              \
  }                                                                \
                                                                   \
  TEST(ValidPalindromeTest, SolutionX##_04) {                      \
    SolutionX s;                                                   \
    EXPECT_FALSE(s.isPalindrome("0P"));                            \
  }

LEETCODE_TEST(Solution1)
