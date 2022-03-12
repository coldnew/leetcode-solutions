#ifndef _LEETCODE_NODE_H_
#define _LEETCODE_NODE_H_

#include <iostream>

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
};

// My extra utils
Node* ToNode(const std::string& l);

std::string ToString(Node* node);

/**
 * Tell if node1 and node2 are the same list, eg, every node element
 * pointer to the same next node.
 *
 * @param node1
 * @param node2
 */
bool IsNodeEqual(Node* node1, Node* node2);

#endif /* _LEETCODE_NODE_H_ */
