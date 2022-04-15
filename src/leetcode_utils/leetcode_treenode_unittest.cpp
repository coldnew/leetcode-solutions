#include <gtest/gtest.h>

#include "leetcode_treenode.cpp"

TEST(LeetCodeTreeNodeTest, ToTreeNode) {
  {
    auto* tree = new TreeNode(1, nullptr, nullptr);
    EXPECT_TRUE(IsTreeNodeEqual(tree, TREENODE("[1, null, null]")));
  }

  {
    //      5
    //   1     2
    // 3   4  6
    auto* left_3 = new TreeNode(3);
    auto* left_4 = new TreeNode(4, nullptr, nullptr);
    auto* left_1 = new TreeNode(1, left_3, left_4);
    auto* right_6 = new TreeNode(6, nullptr, nullptr);
    auto* right_2 = new TreeNode(2, right_6, nullptr);
    auto* tree = new TreeNode(5, left_1, right_2);
    EXPECT_TRUE(IsTreeNodeEqual(tree, TREENODE("[5, 1, 2, 3, 4, 6]")));
  }
}
