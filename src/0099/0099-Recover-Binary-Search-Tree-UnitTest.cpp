#include "0099-Recover-Binary-Search-Tree.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                      \
  TEST(RecoverBinarySearchTreeTest, SolutionX##_01) { \
    auto root = TREENODE("[1,3,null,null,2]");        \
    auto output = TREENODE("[3,1,null,null,2]");      \
    SolutionX s;                                      \
    s.recoverTree(root.get());                        \
    EXPECT_TRUE(IsTreeNodeEqual(output, root));       \
  }                                                   \
                                                      \
  TEST(RecoverBinarySearchTreeTest, SolutionX##_02) { \
    auto root = TREENODE("[3,1,4,null,null,2]");      \
    auto output = TREENODE("[2,1,4,null,null,3]");    \
    SolutionX s;                                      \
    s.recoverTree(root.get());                        \
    EXPECT_TRUE(IsTreeNodeEqual(output, root));       \
  }

LEETCODE_TEST(Solution1)
