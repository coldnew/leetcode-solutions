#include "1584-Min-Cost-to-Connect-All-Points.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                    \
  TEST(MinCostToConnectAllPoints, SolutionX##_01) { \
    SolutionX s;                                    \
    std::vector<std::vector<int>> points = {        \
        {0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0},    \
    };                                              \
    EXPECT_EQ(20, s.minCostConnectPoints(points));  \
  }                                                 \
                                                    \
  TEST(MinCostToConnectAllPoints, SolutionX##_02) { \
    SolutionX s;                                    \
    std::vector<std::vector<int>> points = {        \
        {3, 12},                                    \
        {-2, 5},                                    \
        {-4, 1},                                    \
    };                                              \
    EXPECT_EQ(18, s.minCostConnectPoints(points));  \
  }

LEETCODE_TEST(Solution1)
