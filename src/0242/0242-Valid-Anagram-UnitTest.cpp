#include <gtest/gtest.h>

#include "0242-Valid-Anagram.cpp"

#define LEETCODE_TEST(SolutionX)         \
  TEST(TwoSumTest, SolutionX) {          \
    {                                    \
      std::string s = "anagram";         \
      std::string t = "nagaram";         \
      SolutionX sol;                     \
      EXPECT_TRUE(sol.isAnagram(s, t));  \
    }                                    \
                                         \
    {                                    \
      std::string s = "rat";             \
      std::string t = "car";             \
      SolutionX sol;                     \
      EXPECT_FALSE(sol.isAnagram(s, t)); \
    }                                    \
                                         \
    {                                    \
      std::string s = "a";               \
      std::string t = "ab";              \
      SolutionX sol;                     \
      EXPECT_FALSE(sol.isAnagram(s, t)); \
    }                                    \
  }

LEETCODE_TEST(Solution1);
