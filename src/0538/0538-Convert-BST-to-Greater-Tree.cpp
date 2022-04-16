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
  TreeNode* convertBST(TreeNode* root) {
    convertBST(root, 0);
    return root;
  }
  int convertBST(TreeNode* root, int sum) {
    if (!root)
      return sum;
    root->val += convertBST(root->right, sum);
    return convertBST(root->left, root->val);
  }
};

class Solution2 {
 public:
  TreeNode* convertBST(TreeNode* root) {
    traversal(root);
    return root;
  }

  void traversal(TreeNode* root) {
    if (!root)
      return;

    if (root->right)
      traversal(root->right);

    sum_ += root->val;
    root->val = sum_;

    if (root->left)
      traversal(root->left);
  }

 private:
  int sum_ = 0;
};
