class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l = nums.size(), x = 0;
        for (int i = 0; i < l; i ++)
        {
            x ^= nums[i];
        }
        return x;
    }
};