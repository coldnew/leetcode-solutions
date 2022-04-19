#include <algorithm>
#include <vector>
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
  void recoverTree(TreeNode* root) {
    std::vector<TreeNode*> tree;
    std::vector<int> vals;
    inorder(root, tree, vals);
    std::sort(vals.begin(), vals.end());
    for (int i = 0; i < tree.size(); i++)
      tree[i]->val = vals[i];
  }
  void inorder(TreeNode* root,
               std::vector<TreeNode*>& tree,
               std::vector<int>& vals) {
    if (!root)
      return;
    inorder(root->left, tree, vals);
    tree.push_back(root);
    vals.push_back(root->val);
    inorder(root->right, tree, vals);
  }
};
