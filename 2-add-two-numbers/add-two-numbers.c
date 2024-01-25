/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if (!l1 && !l2)
        return 0;
    struct ListNode *l = malloc(sizeof(struct ListNode));
    struct ListNode *tmp;
    tmp = l;
    int r = 0, c = 0;
    while (l1 || l2)
    {
        if (c)
        {
            tmp->next = malloc(sizeof(struct ListNode));
            tmp = tmp->next;
        }
        int n1 = 0, n2 = 0;
        if (l1){
            n1 = l1->val;
            l1 = l1->next;
        }
        if (l2){
            n2 = l2->val;
            l2 = l2->next;
        }
        tmp->val = (n1 + n2 + r) % 10;
        r = (n1 + n2 + r) / 10;
        c++;
    }
    if (r)
    {
        tmp->next = malloc(sizeof(struct ListNode));
        tmp = tmp->next;
        tmp->val = r;
    }
    tmp->next = 0;
    return (l);
}