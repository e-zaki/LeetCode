class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        set<int> s(nums.begin(), nums.end());
        int i = 0;
        int d = 0;
        set<int>::iterator it = s.begin();
        it++;
        for ( ; it != s.end(); ++it)
        {
            if (*it - *(prev(it)) == 1) {
                d++;
            }
            else {
                i = (d >= i) ? d + 1: i;
                d = 0;
            }
        }
        i = (d >= i) ? d + 1: i;
        return i;
    }
};