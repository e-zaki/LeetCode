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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode *current = head;
        ListNode tmp(-1, head);
        ListNode *bfst = &tmp;
        ListNode *prev = bfst;
        while (current && current->next) {
            prev->next = current->next;
            current->next = prev->next->next;
            prev->next->next = current;

            prev = current;
            current = current->next;;
        }
        return bfst->next;
    }
};