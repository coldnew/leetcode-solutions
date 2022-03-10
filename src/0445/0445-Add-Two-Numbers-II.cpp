#include "leetcode_utils.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* reverseList(ListNode* head) {
  ListNode* node = nullptr;
  while (head) {
    ListNode* next = head->next;
    head->next = node;
    node = head;
    head = next;
  }
  return node;
}

class Solution1 {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    auto* l1r = reverseList(l1);
    auto* l2r = reverseList(l2);

    int32_t sum = 0;
    ListNode tmp(0);
    ListNode* node = &tmp;
    while (l1r || l2r || sum != 0) {
      if (l1r) {
        sum += l1r->val;
        l1r = l1r->next;
      }
      if (l2r) {
        sum += l2r->val;
        l2r = l2r->next;
      }
      if (!node)
        node = new ListNode(sum % 10);
      else {
        node->next = new ListNode(sum % 10);
        node = node->next;
      }
      sum /= 10;
    }
    return reverseList(tmp.next);
  }
};
