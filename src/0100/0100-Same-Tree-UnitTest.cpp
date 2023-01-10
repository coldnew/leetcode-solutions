#include "0100-Same-Tree.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                      \
  TEST(isSameTreeTest, SolutionX##_01) {                              \
    SolutionX s;                                                      \
                                                                      \
    auto p = TREENODE("[1, 2, 3]");                                   \
    auto q = TREENODE("[1, 2, 3]");                                   \
    EXPECT_EQ(IsTreeNodeEqual(p, q), s.isSameTree(p.get(), q.get())); \
  }                                                                   \
                                                                      \
  TEST(isSameTreeTest, SolutionX##_02) {                              \
    SolutionX s;                                                      \
                                                                      \
    auto p = TREENODE("[1, 2]");                                      \
    auto q = TREENODE("[1, null, 2]");                                \
    EXPECT_EQ(IsTreeNodeEqual(p, q), s.isSameTree(p.get(), q.get())); \
  }                                                                   \
                                                                      \
  TEST(isSameTreeTest, SolutionX##_03) {                              \
    SolutionX s;                                                      \
                                                                      \
    auto p = TREENODE("[1, 2, 1]");                                   \
    auto q = TREENODE("[1, 1, 2]");                                   \
    EXPECT_EQ(IsTreeNodeEqual(p, q), s.isSameTree(p.get(), q.get())); \
  }

LEETCODE_TEST(Solution1)
