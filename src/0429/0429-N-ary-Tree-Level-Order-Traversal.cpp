#include <queue>
#include <vector>
#include "leetcode_utils.h"

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution1 {
 public:
  std::vector<std::vector<int>> levelOrder(Node* root) {
    std::vector<std::vector<int>> result;
    if (!root)
      return result;

    std::queue<Node*> level;
    level.push(root);
    levelOrderTraverse(result, level);
    return result;
  }

  void levelOrderTraverse(std::vector<std::vector<int>>& result,
                          std::queue<Node*> level) {
    if (level.empty())
      return;

    std::queue<Node*> nextLevel;
    std::vector<int> values;
    while (!level.empty()) {
      auto* current = level.front();
      level.pop();
      values.push_back(current->val);
      for (int i = 0; i < current->children.size(); i++)
        nextLevel.push(current->children[i]);
    }

    result.push_back(values);
    levelOrderTraverse(result, nextLevel);
  }
};
