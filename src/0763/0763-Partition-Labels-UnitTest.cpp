#include "0763-Partition-Labels.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                   \
  TEST(PartitionLabelsTest, SolutionX##_01) {                      \
    SolutionX s;                                                   \
    std::vector<int> ans{9, 7, 8};                                 \
    EXPECT_EQ(ans, s.partitionLabels("ababcbacadefegdehijhklij")); \
  }                                                                \
                                                                   \
  TEST(PartitionLabelsTest, SolutionX##_02) {                      \
    SolutionX s;                                                   \
    std::vector<int> ans{10};                                      \
    EXPECT_EQ(ans, s.partitionLabels("eccbbbbdec"));               \
  }

LEETCODE_TEST(Solution1);
LEETCODE_TEST(Solution2);
