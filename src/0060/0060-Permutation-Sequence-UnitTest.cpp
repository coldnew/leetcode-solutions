#include <gtest/gtest.h>

#include "0060-Permutation-Sequence.cpp"

#define LEETCODE_TEST(SolutionX)                  \
  TEST(PermutationSequenceTest, SolutionX##_01) { \
    SolutionX s;                                  \
    EXPECT_EQ("213", s.getPermutation(3, 3));     \
  }                                               \
                                                  \
  TEST(PermutationSequenceTest, SolutionX##_02) { \
    SolutionX s;                                  \
    EXPECT_EQ("2314", s.getPermutation(4, 9));    \
  }                                               \
                                                  \
  TEST(PermutationSequenceTest, SolutionX##_03) { \
    SolutionX s;                                  \
    EXPECT_EQ("123", s.getPermutation(3, 1));     \
  }                                               \
                                                  \
  TEST(PermutationSequenceTest, SolutionX##_04) { \
    SolutionX s;                                  \
    EXPECT_EQ("21", s.getPermutation(2, 2));      \
  }

LEETCODE_TEST(Solution1);
