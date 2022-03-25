#include <gtest/gtest.h>

#include "1029-Two-City-Scheduling.cpp"

#define LEETCODE_TEST(SolutionX)                                               \
  TEST(TwoCitySchedulingTest, SolutionX##_01) {                                \
    SolutionX s;                                                               \
    std::vector<std::vector<int>> costs = {                                    \
        {10, 20}, {30, 200}, {400, 50}, {30, 20}};                             \
                                                                               \
    EXPECT_EQ(110, s.twoCitySchedCost(costs));                                 \
  }                                                                            \
                                                                               \
  TEST(TwoCitySchedulingTest, SolutionX##_02) {                                \
    SolutionX s;                                                               \
    std::vector<std::vector<int>>                                              \
        costs = {{259, 770}, {448, 54},  {926, 667},                           \
                 {184, 139}, {840, 118}, {577, 469}};                          \
                                                                               \
    EXPECT_EQ(1859, s.twoCitySchedCost(costs));                                \
  }                                                                            \
                                                                               \
  TEST(TwoCitySchedulingTest, SolutionX##_03) {                                \
    SolutionX s;                                                               \
    std::vector<std::vector<int>> costs = {{515, 563}, {451, 713}, {537, 709}, \
                                           {343, 819}, {855, 779}, {457, 60},  \
                                           {650, 359}, {631, 42}};             \
    EXPECT_EQ(3086, s.twoCitySchedCost(costs));                                \
  }

LEETCODE_TEST(Solution1);
