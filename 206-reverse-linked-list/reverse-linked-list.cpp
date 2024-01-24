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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* next_Node;
        ListNode* prev_Node = nullptr;
        while(head) {
            next_Node = head->next;
            head->next = prev_Node;
            prev_Node = head;
            head = next_Node;
        }
        return prev_Node;
    }
};