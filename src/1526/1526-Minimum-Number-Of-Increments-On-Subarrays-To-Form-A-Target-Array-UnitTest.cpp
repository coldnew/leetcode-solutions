#include "1526-Minimum-Number-Of-Increments-On-Subarrays-To-Form-A-Target-Array.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                               \
  TEST(MinimumNumberOfIncrementsOnSubarraysToFormATargetArray, SolutionX_01) { \
    std::vector<int> target = {1, 2, 3, 2, 1};                                 \
    SolutionX s;                                                               \
    EXPECT_EQ(3, s.minNumberOperations(target));                               \
  }                                                                            \
                                                                               \
  TEST(MinimumNumberOfIncrementsOnSubarraysToFormATargetArray, SolutionX_02) { \
    std::vector<int> target = {3, 1, 1, 2};                                    \
    SolutionX s;                                                               \
    EXPECT_EQ(4, s.minNumberOperations(target));                               \
  }                                                                            \
                                                                               \
  TEST(MinimumNumberOfIncrementsOnSubarraysToFormATargetArray, SolutionX_03) { \
    std::vector<int> target = {3, 1, 5, 4, 2};                                 \
    SolutionX s;                                                               \
    EXPECT_EQ(7, s.minNumberOperations(target));                               \
  }

LEETCODE_TEST(Solution1)
