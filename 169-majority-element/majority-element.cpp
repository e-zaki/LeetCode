class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int occur = 0, s = 0, i = -1;
        int l = nums.size(), maj = nums[0], prev_elem = INT_MIN;
        while (++i < l) {
            if (nums[i] != prev_elem) {
                occur = 0;
                prev_elem = nums[i];
            }
            occur++;
            if (occur > s){
                s = occur;
                maj = nums[i];
            }
        }
        return maj;
    }
};