#include "leetcode_utils.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution1 {
 public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root == p || root == q)
      return root;

    auto* leftCommonAncestor = lowestCommonAncestor(root->left, p, q);
    auto* rightCommonAncestor = lowestCommonAncestor(root->right, p, q);

    if (leftCommonAncestor == nullptr)
      return rightCommonAncestor;

    if (rightCommonAncestor == nullptr)
      return leftCommonAncestor;

    return root;
  }
};
