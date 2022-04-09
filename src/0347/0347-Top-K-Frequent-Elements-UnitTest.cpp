#include "0347-Top-K-Frequent-Elements.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                   \
  TEST(TopKFrequentElementsTest, SolutionX##_01) { \
    SolutionX s;                                   \
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};    \
    std::vector<int> ans = {1, 2};                 \
    int k = 2;                                     \
    EXPECT_EQ(ans, s.topKFrequent(nums, k));       \
  }                                                \
                                                   \
  TEST(TopKFrequentElementsTest, SolutionX##_02) { \
    SolutionX s;                                   \
    std::vector<int> nums = {1};                   \
    std::vector<int> ans = {1};                    \
    int k = 1;                                     \
    EXPECT_EQ(ans, s.topKFrequent(nums, k));       \
  }

LEETCODE_TEST(Solution1)
