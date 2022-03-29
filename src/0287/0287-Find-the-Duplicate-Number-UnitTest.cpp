#include "0287-Find-the-Duplicate-Number.cpp"
#include <gtest/gtest.h>
#include <vector>

#define LEETCODE_TEST(SolutionX)               \
  TEST(FindTheDuplicateNumber, SolutionX_01) { \
    SolutionX s;                               \
    std::vector<int> nums = {1, 3, 4, 2, 2};   \
    EXPECT_EQ(2, s.findDuplicate(nums));       \
  }                                            \
                                               \
  TEST(FindTheDuplicateNumber, SolutionX_02) { \
    SolutionX s;                               \
    std::vector<int> nums = {3, 1, 3, 4, 2};   \
    EXPECT_EQ(3, s.findDuplicate(nums));       \
  }

LEETCODE_TEST(Solution1)
