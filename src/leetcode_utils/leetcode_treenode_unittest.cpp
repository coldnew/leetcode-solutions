#include <gtest/gtest.h>

#include "leetcode_treenode.cpp"

TEST(LeetCodeTreeNodeTest, ToTreeNode) {
  {
    auto* tree = new TreeNode(1, nullptr, nullptr);
    EXPECT_TRUE(IsTreeNodeEqual(tree, TREENODE("[1, null, null]")));
    TreeNodeDestroy(tree);
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
    TreeNodeDestroy(tree);
  }
  {
    auto root = TREENODE("[5,3,6,2,4,null,8,1,null,null,null,7,9]");
    EXPECT_TRUE(IsTreeNodeEqual(root, root));
  }
}

TEST(LeetCodeTreeNodeTest, FindTreeNodeByValue) {
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

    auto* f_left_4 = FindTreeNodeByValue(tree, 4);
    auto* f_right_2 = FindTreeNodeByValue(tree, 2);
    EXPECT_EQ(left_4, f_left_4);
    EXPECT_EQ(right_2, f_right_2);
    TreeNodeDestroy(tree);
  }
}
