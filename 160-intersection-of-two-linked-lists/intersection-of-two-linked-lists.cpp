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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode *tmpA = headA;
        ListNode *tmpB = headB;
        int sizeA = 0, sizeB = 0;
        while (tmpA) {
            tmpA = tmpA->next;
            sizeA++;
        }
        while (tmpB) {
            tmpB = tmpB->next;
            sizeB++;
        }
        tmpA = headA; tmpB = headB;
        while (sizeA > sizeB) {
            tmpA = tmpA->next;
            sizeA--;
        }
        while (sizeA < sizeB) {
            tmpB = tmpB->next;
            sizeB--;
        }
        while (tmpA != tmpB) {
            tmpA = tmpA->next;
            tmpB = tmpB->next;
        }
        return tmpA;
    }
};