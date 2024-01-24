/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *HEAD;
    struct ListNode *tmp;
    if (!list2)
        return (list1);
    else if (!list1)
        return (list2);
    if (list1->val <= list2->val)
    {
        HEAD = list1;
        list1 = list1->next;
    }
    else
    {
        HEAD = list2;
        list2 = list2->next;
    }
    tmp = HEAD;
    tmp->next = 0;
    while (1)
    {
        if (!list1)
        {
            tmp->next = list2;
            break;
        }
        if (!list2)
        {
            tmp->next = list1;
            break;
        }
        if (list1->val < list2->val)
        {
            tmp->next = list1;
            list1 = list1->next;
        }
        else
        {
            tmp->next = list2;
            list2 = list2->next;
        }
        tmp = tmp->next;
    }
    return (HEAD);
}