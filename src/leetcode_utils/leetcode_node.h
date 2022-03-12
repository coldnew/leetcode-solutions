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

#endif /* _LEETCODE_NODE_H_ */
