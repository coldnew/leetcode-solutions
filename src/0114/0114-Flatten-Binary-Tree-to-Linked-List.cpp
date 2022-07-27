#include "leetcode_utils.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution1 {
 public:
  void flatten(TreeNode* root) { flattenTreeNode(root); }

 private:
  TreeNode* flattenTreeNode(TreeNode* root) {
    if (root == nullptr)
      return nullptr;

    if (!root->left && !root->right)
      return root;

    TreeNode* left = root->left;
    TreeNode* right = root->right;

    TreeNode* leftEnd = root;
    if (left)
      leftEnd = flattenTreeNode(left);

    TreeNode* rightEnd = leftEnd;
    if (right)
      rightEnd = flattenTreeNode(right);

    root->left = nullptr;
    root->right = left;
    leftEnd->right = right;

    return rightEnd;
  }
};
