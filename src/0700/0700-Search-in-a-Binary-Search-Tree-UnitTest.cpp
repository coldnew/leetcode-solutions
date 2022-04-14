#include "0700-Search-in-a-Binary-Search-Tree.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                \
  TEST(SearchInABinarySearchTree, SolutionX##_01) {             \
    SolutionX s;                                                \
    auto* root = TREENODE(4, 2, 7, 1, 3);                       \
    auto* output = TREENODE(2, 1, 3);                           \
    EXPECT_TRUE(IsTreeNodeEqual(output, s.searchBST(root, 2))); \
  }                                                             \
                                                                \
  TEST(SearchInABinarySearchTree, SolutionX##_02) {             \
    SolutionX s;                                                \
    auto* root = TREENODE(4, 2, 7, 1, 3);                       \
    auto* output = TREENODE();                                  \
    EXPECT_TRUE(IsTreeNodeEqual(output, s.searchBST(root, 5))); \
  }

LEETCODE_TEST(Solution1)
