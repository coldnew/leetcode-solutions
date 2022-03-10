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

class Solution1 {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    uint64_t sum = 0;
    ListNode total(0);
    ListNode* l3 = &total;
    while (l1 != nullptr || l2 != nullptr || sum != 0) {
      if (l1) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        sum += l2->val;
        l2 = l2->next;
      }
      l3->next = new ListNode(sum % 10);
      sum /= 10;
      l3 = l3->next;
    }
    return total.next;
  }
};
