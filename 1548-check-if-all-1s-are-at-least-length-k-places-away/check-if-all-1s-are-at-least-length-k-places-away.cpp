class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int len = nums.size(), dis = k;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 1) {
                if (dis < k)
                    return false;
                dis = 0;
                continue;
            }
            dis++;
        }
        return true;
    }
};