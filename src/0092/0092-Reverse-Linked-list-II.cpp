#include <vector>
#include "leetcode_utils.h"

class Solution1 {
 public:
  ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode head_new = ListNode(-1);
    head_new.next = head;

    ListNode* cur = &head_new;
    for (int i = 0; i < left - 1; i++)
      cur = cur->next;

    ListNode* last = cur;
    cur = cur->next;
    for (int i = 0; i < right - left; i++) {
      ListNode* tmp = cur->next;
      cur->next = tmp->next;
      tmp->next = last->next;
      last->next = tmp;
    }

    return head_new.next;
  }
};
