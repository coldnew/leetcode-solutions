#ifndef _LEETCODE_NODE_H_
#define _LEETCODE_NODE_H_

#include <iostream>
#include <memory>
#include <vector>

class Node {
 public:
  int val;
  Node* next;
  Node* random;

  Node(int _val) {
    val = _val;
    next = NULL;
    random = NULL;
  }

  std::vector<Node*> children;
  Node(int _val, std::vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

// My extra utils
Node* ToNode(const std::string& l);
void NodeDestroy(Node* node);

std::string ToString(Node* node);
std::string ToString(std::shared_ptr<Node> node);

/**
 * Tell if node1 and node2 are the same list, eg, every node element
 * pointer to the same next node.
 *
 * @param node1
 * @param node2
 */
bool IsNodeEqual(Node* node1, Node* node2);

#define NODE_RAWPTR(...) ToNode({__VA_ARGS__})

#define NODE(...) std::shared_ptr<Node>(ToNode({__VA_ARGS__}), NodeDestroy)

#endif /* _LEETCODE_NODE_H_ */
