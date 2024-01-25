class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len = nums.size() - 1;
        int count = 0;
        sort(nums.begin(), nums.end());
        while (len - 1 >= 0) {
            if (nums[len] != nums[len-1])
                count++;
            if (count == 2)
                return nums[len-1];
            len--;
        }
        return nums[nums.size() - 1];
    }
};