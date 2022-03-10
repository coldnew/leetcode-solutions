#include <stack>
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
};

class Solution2 {
 public:
  ListNode* reverseList(ListNode* head) {
    // head_ptr store original head pointer
    ListNode* head_ptr = head;

    std::stack<int> sp;
    while (head) {
      sp.push(head->val);
      head = head->next;
    }

    head = head_ptr;
    while (!sp.empty()) {
      head->val = sp.top();
      sp.pop();
      head = head->next;
    }

    return head_ptr;
  }
};
