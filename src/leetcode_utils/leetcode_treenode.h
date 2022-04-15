#ifndef _LEETCODE_TREENODE_H_
#define _LEETCODE_TREENODE_H_

#include <initializer_list>
#include <iostream>
#include <optional>

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

// My extra utils
bool IsTreeNodeEqual(TreeNode* p, TreeNode* q);

void TreeNodePrint(TreeNode* root);

TreeNode* ToTreeNode(const std::string& tree);

#define TREENODE(...) ToTreeNode({__VA_ARGS__})

#endif /* _LEETCODE_TREENODE_H_ */
