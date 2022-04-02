#include "0680-Valid-Palindrome-II.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                \
  TEST(ValidPalindromeIITest, SolutionX##_01) { \
    SolutionX s;                                \
    EXPECT_TRUE(s.validPalindrome("aba"));      \
  }                                             \
                                                \
  TEST(ValidPalindromeIITest, SolutionX##_02) { \
    SolutionX s;                                \
    EXPECT_TRUE(s.validPalindrome("abca"));     \
  }                                             \
                                                \
  TEST(ValidPalindromeIITest, SolutionX##_03) { \
    SolutionX s;                                \
    EXPECT_FALSE(s.validPalindrome("abc"));     \
  }

LEETCODE_TEST(Solution1)
