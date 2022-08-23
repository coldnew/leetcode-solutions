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
  bool isPalindrome(ListNode* head) {
    ListNode* middle = findMiddle(head);

    middle = reverse(middle);

    while (middle) {
      if (middle->val != head->val)
        return false;
      middle = middle->next;
      head = head->next;
    }
    return true;
  }

 private:
  ListNode* findMiddle(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
    }

    if (fast)
      slow = slow->next;

    return slow;
  }

  ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    while (head) {
      next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }
    return prev;
  }
};
