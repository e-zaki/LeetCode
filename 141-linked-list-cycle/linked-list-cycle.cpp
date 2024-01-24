/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int hook = 100001;
        ListNode *tmp = head;
        while (tmp) {
            if (tmp->val == hook)
                return true;
            tmp->val = hook;
            tmp = tmp->next;
        }
        return false;
    }
};