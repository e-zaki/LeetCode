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
    bool isP(deque<int>& storage) {
        if (storage.size() <= 1)
            return true;
        if (storage.front() != storage.back())
            return false;
        storage.pop_back(); storage.pop_front();
        return isP(storage);
    }
public:
    bool isPalindrome(ListNode* head) {
        deque<int> storage;
        ListNode* tmp = head;
        while (tmp) {
            storage.push_back(tmp->val);
            tmp = tmp->next;
        }
        return isP(storage);
    }
};