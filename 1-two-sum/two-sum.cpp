class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int complement;
        for (int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];
            if (mp.contains(complement) && mp[complement] != i)
            {
                ans.push_back(i);
                ans.push_back(mp[complement]);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};