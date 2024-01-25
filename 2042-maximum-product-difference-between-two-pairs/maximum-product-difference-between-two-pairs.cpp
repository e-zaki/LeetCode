class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int l = nums.size() - 1;
        sort(nums.begin(), nums.end());
        return (nums[l] * nums[l - 1]) - (nums[1] * nums[0]);
    }
};