#include "0905-Sort-Array-By-Parity.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                  \
  TEST(SortArrayByParityTest, SolutionX##_01) {   \
    SolutionX s;                                  \
    std::vector<int> nums = {3, 1, 2, 4};         \
    std::vector<int> output = {2, 4, 1, 3};       \
    EXPECT_EQ(output, s.sortArrayByParity(nums)); \
  }                                               \
                                                  \
  TEST(SortArrayByParityTest, SolutionX##_02) {   \
    SolutionX s;                                  \
    std::vector<int> nums = {0};                  \
    std::vector<int> output = {0};                \
    EXPECT_EQ(output, s.sortArrayByParity(nums)); \
  }                                               \
                                                  \
  TEST(SortArrayByParityTest, SolutionX##_03) {   \
    SolutionX s;                                  \
    std::vector<int> nums = {0, 1};               \
    std::vector<int> output = {0, 1};             \
    EXPECT_EQ(output, s.sortArrayByParity(nums)); \
  }

LEETCODE_TEST(Solution1)
