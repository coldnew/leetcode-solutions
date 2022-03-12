#include "leetcode_utils.h"

/*
// Definition for a Node.
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
*/

class Solution1 {
 public:
  Node* copyRandomList(Node* head) {
    if (head == nullptr)
      return nullptr;

    // Modify original list from
    //
    //   list: 1 -> 2 -> 3 -> 4 -> null
    //
    // to
    //
    //   list (new) 1 -> 1. -> 2 ->  2. -> 3 -> 3. -> 4 -> 4. -> null
    for (auto* p = head; p;) {
      auto* node = new Node(p->val);
      node->random = p->random;
      node->next = p->next;
      p->next = node;
      p = node->next;
    }

    // make random ptr point to new node
    for (auto* p = head; p;) {
      if (p->random != nullptr)
        p->next->random = p->random->next;
      p = p->next->next;
    }

    // split list (new) to real new list
    //   list (new) 1 -> 1. -> 2 ->  2. -> 3 -> 3. -> 4 -> 4. -> null
    // to
    //
    // list 1 -> 2 -> 3 -> 4 -> null
    // list 1. -> 2. -> 3. -> 4. -> null
    Node* head_new = head->next;
    Node* node = head->next;
    for (auto* p = head; p;) {
      if (node == nullptr)
        break;

      p->next = p->next->next;
      if (nullptr != node->next)
        node->next = node->next->next;
      p = p->next;
      node = node->next;
    }

    return head_new;
  }
};
