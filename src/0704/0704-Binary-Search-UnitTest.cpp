#include "0704-Binary-Search.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                  \
  TEST(BinarySearchTest, SolutionX##_01) {        \
    SolutionX s;                                  \
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12}; \
    EXPECT_EQ(4, s.search(nums, 9));              \
  }                                               \
                                                  \
  TEST(BinarySearchTest, SolutionX##_02) {        \
    SolutionX s;                                  \
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12}; \
    EXPECT_EQ(-1, s.search(nums, 2));             \
  }                                               \
                                                  \
  TEST(BinarySearchTest, SolutionX##_03) {        \
    SolutionX s;                                  \
    std::vector<int> nums = {5};                  \
    EXPECT_EQ(-1, s.search(nums, -5));            \
  }                                               \
                                                  \
  TEST(BinarySearchTest, SolutionX##_04) {        \
    SolutionX s;                                  \
    std::vector<int> nums = {5};                  \
    EXPECT_EQ(0, s.search(nums, 5));              \
  }                                               \
                                                  \
  TEST(BinarySearchTest, SolutionX##_05) {        \
    SolutionX s;                                  \
    std::vector<int> nums = {-1, 0, 5};           \
    EXPECT_EQ(-1, s.search(nums, 2));             \
  }

LEETCODE_TEST(Solution1)
