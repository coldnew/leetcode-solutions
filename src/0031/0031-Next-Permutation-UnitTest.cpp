#include "0031-Next-Permutation.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)              \
  TEST(NextPermutationTest, SolutionX##_01) { \
    SolutionX s;                              \
    std::vector<int> nums = {1, 2, 3};        \
    std::vector<int> solution = {1, 3, 2};    \
    s.nextPermutation(nums);                  \
    EXPECT_EQ(solution, nums);                \
  }                                           \
                                              \
  TEST(NextPermutationTest, SolutionX##_02) { \
    SolutionX s;                              \
    std::vector<int> nums = {3, 2, 1};        \
    std::vector<int> solution = {1, 2, 3};    \
    s.nextPermutation(nums);                  \
    EXPECT_EQ(solution, nums);                \
  }                                           \
                                              \
  TEST(NextPermutationTest, SolutionX##_03) { \
    SolutionX s;                              \
    std::vector<int> nums = {1, 1, 5};        \
    std::vector<int> solution = {1, 5, 1};    \
    s.nextPermutation(nums);                  \
    EXPECT_EQ(solution, nums);                \
  }

LEETCODE_TEST(Solution1)
