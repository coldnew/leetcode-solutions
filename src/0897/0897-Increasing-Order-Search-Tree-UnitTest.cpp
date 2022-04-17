#include "0897-Increasing-Order-Search-Tree.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                        \
  TEST(IncreasingOrderSearchTreeTest, SolutionX##_01) {                 \
    SolutionX s;                                                        \
    auto root = TREENODE("[5,3,6,2,4,null,8,1,null,null,null,7,9]");    \
    auto output = TREENODE(                                             \
        "[1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]"); \
    auto *result = s.increasingBST(root.get());                         \
    TreeNodePrint(output); \
    EXPECT_TRUE(IsTreeNodeEqual(output, result));                       \
  }                                                                     \
                                                                        \
  TEST(IncreasingOrderSearchTreeTest, SolutionX##_02) {                 \
    SolutionX s;                                                        \
    auto root = TREENODE("[5,1,7]");                                    \
    auto output = TREENODE("[1,null,5,null,7]");                        \
    auto *result = s.increasingBST(root.get());                         \
    TreeNodePrint(output); \
    EXPECT_TRUE(IsTreeNodeEqual(output, result));                       \
  }

LEETCODE_TEST(Solution1)
