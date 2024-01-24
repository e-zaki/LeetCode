class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int SnowBallSize = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 0)
                SnowBallSize++;
            else if (SnowBallSize > 0) {
                nums[i - SnowBallSize] = nums[i];
                nums[i] = 0;
            }
        }
    }
};