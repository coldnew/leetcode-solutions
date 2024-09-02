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
  int kthSmallest(TreeNode* root, int k) {
    std::vector<int> tree;
    kthSmallest(root, k, tree);
    return tree[k - 1];
  }
  void kthSmallest(TreeNode* root, int k, std::vector<int>& tree) {
    if (root->left)
      kthSmallest(root->left, k, tree);
    tree.push_back(root->val);
    if (root->right)
      kthSmallest(root->right, k, tree);
  }
};
