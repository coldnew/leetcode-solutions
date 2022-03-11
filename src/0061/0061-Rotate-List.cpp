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

static int getListNodeLength(ListNode* head) {
  auto* head_ptr = head;
  int length = 0;
  while (head) {
    head = head->next;
    length++;
  }
  head = head_ptr;

  return length;
}

class Solution1 {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    // prevent duplicate operation
    int length = getListNodeLength(head);
    if (length)
      k = k % length;

    auto* node = head;
    for (int i = 0; i < k; i++)
      node = rotateRight(node);
    return node;
  }

  ListNode* rotateRight(ListNode* head) {
    auto* head_ptr = head;
    ListNode* node = nullptr;
    ListNode* prev = head;
    while (head) {
      // find tail and prev node before tail
      if (head->next == nullptr) {
        node = head;
        node->next = head_ptr;
        prev->next = nullptr;
        break;
      }

      prev = head;
      head = head->next;
    }

    return node;
  }
};
