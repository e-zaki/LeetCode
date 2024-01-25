class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> tidx;
        int count_lt = 0, count_et = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target)
                count_et++;
            if (nums[i] < target)
                count_lt++;
        }
        for (int i = 0; i < count_et; i++)
            tidx.push_back(count_lt + i);
        return tidx;
    }
};