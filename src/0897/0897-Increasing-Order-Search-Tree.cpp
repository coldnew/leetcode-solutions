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
  TreeNode* increasingBST(TreeNode* root) {
    std::vector<int> values;
    increasingBST(root, values);

    auto* tree = new TreeNode(values[0]);
    auto* p = tree;
    values.erase(values.begin());

    for (auto& v : values) {
      p->left = nullptr;
      p->right = new TreeNode(v);
      p = p->right;
    }
    return tree;
  }
  void increasingBST(TreeNode* root, std::vector<int>& values) {
    if (root) {
      increasingBST(root->left, values);
      values.push_back(root->val);
      increasingBST(root->right, values);
    }
  }
};
