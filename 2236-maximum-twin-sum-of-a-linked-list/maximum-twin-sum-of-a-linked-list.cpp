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
    int pairSum(ListNode* head) {
        vector<int> sums;
        ListNode* tmp = head;
        while (tmp) {
            sums.push_back(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        int max = 0;
        for(int i = sums.size()-1; i >= 0; i--) {
            sums[i] += tmp->val;
            if (sums[i] > max)
                max = sums[i];
            tmp = tmp->next;
        }
        return max;
    }
};