#include <gtest/gtest.h>

#include "0881-Boats-to-Save-People.cpp"

#define LEETCODE_TEST(SolutionX)               \
  TEST(BoatsToSavePeopleTest, SolutionX##01) { \
    SolutionX s;                               \
    std::vector<int> people = {1, 2};          \
    EXPECT_EQ(1, s.numRescueBoats(people, 3)); \
  }                                            \
                                               \
  TEST(BoatsToSavePeopleTest, SolutionX##02) { \
    SolutionX s;                               \
    std::vector<int> people = {3, 5, 3, 4};    \
    EXPECT_EQ(4, s.numRescueBoats(people, 5)); \
  }                                            \
                                               \
  TEST(BoatsToSavePeopleTest, SolutionX##03) { \
    SolutionX s;                               \
    std::vector<int> people = {2, 4};          \
    EXPECT_EQ(2, s.numRescueBoats(people, 5)); \
  }

LEETCODE_TEST(Solution1)
