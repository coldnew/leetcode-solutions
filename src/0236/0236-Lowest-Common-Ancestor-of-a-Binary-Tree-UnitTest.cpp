#include <gtest/gtest.h>

#include "0236-Lowest-Common-Ancestor-of-a-Binary-Tree.cpp"

#define LEETCODE_TEST(SolutionX)                             \
  TEST(LowestCommonAncestorOfABinaryTreeTest, SolutionX) {   \
    {                                                        \
      auto root = TREENODE("[3,5,1,6,2,0,8,null,null,7,4]"); \
      auto* p = FindTreeNodeByValue(root.get(), 5);          \
      auto* q = FindTreeNodeByValue(root.get(), 1);          \
      SolutionX s;                                           \
      auto* node = s.lowestCommonAncestor(root.get(), p, q); \
      EXPECT_EQ(3, node->val);                               \
    }                                                        \
                                                             \
    {                                                        \
      auto root = TREENODE("[3,5,1,6,2,0,8,null,null,7,4]"); \
      auto* p = FindTreeNodeByValue(root.get(), 5);          \
      auto* q = FindTreeNodeByValue(root.get(), 4);          \
      SolutionX s;                                           \
      auto* node = s.lowestCommonAncestor(root.get(), p, q); \
      EXPECT_EQ(5, node->val);                               \
    }                                                        \
  }

LEETCODE_TEST(Solution1);
