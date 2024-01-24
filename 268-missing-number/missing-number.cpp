class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int n = 0;
        for (int i = 0; i < len; i++)
            n += nums[i];
        return (len*(len+1) / 2) - n;
    }
};