#include "0230-Kth-Smallest-Element-in-a-BST.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                     \
  TEST(KthSmallestElementInABST, SOlutionX##_01) {   \
    SolutionX s;                                     \
    auto root = TREENODE("[3,1,4,null,2]");          \
    EXPECT_EQ(1, s.kthSmallest(root.get(), 1));      \
  }                                                  \
                                                     \
  TEST(KthSmallestElementInABST, SOlutionX##_2) {    \
    SolutionX s;                                     \
    auto root = TREENODE("[5,3,6,2,4,null,null,1]"); \
    EXPECT_EQ(3, s.kthSmallest(root.get(), 3));      \
  }

LEETCODE_TEST(Solution1)
