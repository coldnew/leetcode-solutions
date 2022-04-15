#ifndef _LEETCODE_TREENODE_H_
#define _LEETCODE_TREENODE_H_

#include <initializer_list>
#include <iostream>
#include <memory>
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
bool IsTreeNodeEqual(TreeNode* p, std::shared_ptr<TreeNode> q);
bool IsTreeNodeEqual(std::shared_ptr<TreeNode> p, std::shared_ptr<TreeNode> q);
bool IsTreeNodeEqual(std::shared_ptr<TreeNode> p, TreeNode* q);

void TreeNodePrint(TreeNode* root);
void TreeNodePrint(std::shared_ptr<TreeNode> root);

TreeNode* ToTreeNode(const std::string& tree);
void TreeNodeDestroy(TreeNode* root);

#define TREENODE_RAWPTR(...) ToTreeNode({__VA_ARGS__})

#define TREENODE(...) \
  std::shared_ptr<TreeNode>(ToTreeNode({__VA_ARGS__}), TreeNodeDestroy)

#endif /* _LEETCODE_TREENODE_H_ */
