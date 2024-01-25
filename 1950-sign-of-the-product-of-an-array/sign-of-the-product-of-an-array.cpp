class Solution {
public:
    int arraySign(vector<int>& nums) {
        int s = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i])
                return 0;
            if (nums[i] < 0)
                s = -s;
        }
        return s;
    }
};