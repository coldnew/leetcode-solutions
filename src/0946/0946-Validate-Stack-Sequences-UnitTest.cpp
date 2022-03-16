#include <gtest/gtest.h>

#include "0946-Validate-Stack-Sequences.cpp"

#define LEETCODE_TEST(SolutionX)                                \
  TEST(ValidateStackSequencesTest, SolutionX) {                 \
    {                                                           \
      SolutionX s;                                              \
      std::vector<int> pushed1 = {1, 2, 3, 4, 5};               \
      std::vector<int> popped1 = {4, 5, 3, 2, 1};               \
      EXPECT_TRUE(s.validateStackSequences(pushed1, popped1));  \
    }                                                           \
                                                                \
    {                                                           \
      SolutionX s;                                              \
      std::vector<int> pushed2 = {1, 2, 3, 4, 5};               \
      std::vector<int> popped2 = {4, 3, 5, 1, 2};               \
      EXPECT_FALSE(s.validateStackSequences(pushed2, popped2)); \
    }                                                           \
                                                                \
    {                                                           \
      SolutionX s;                                              \
      std::vector<int> pushed3 = {2, 1, 0};                     \
      std::vector<int> popped3 = {1, 2, 0};                     \
      EXPECT_TRUE(s.validateStackSequences(pushed3, popped3));  \
    }                                                           \
  }

LEETCODE_TEST(Solution1);
LEETCODE_TEST(Solution2);
