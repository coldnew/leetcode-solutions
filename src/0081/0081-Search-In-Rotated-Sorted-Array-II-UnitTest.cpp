#include "0081-Search-In-Rotated-Sorted-Array-II.cpp"
#include <gtest/gtest.h>
#include <vector>

#define LEETCODE_TEST(SolutionX)                           \
  TEST(SearchInRotatedSortedArrayIITest, SolutionX##_01) { \
    SolutionX s;                                           \
    std::vector<int> nums = {2, 5, 6, 0, 0, 1, 2};         \
    EXPECT_TRUE(s.search(nums, 0));                        \
  }                                                        \
                                                           \
  TEST(SearchInRotatedSortedArrayIITest, SolutionX##_02) { \
    SolutionX s;                                           \
    std::vector<int> nums = {2, 5, 6, 0, 0, 1, 2};         \
    EXPECT_FALSE(s.search(nums, 3));                       \
  }

LEETCODE_TEST(Solution1)
