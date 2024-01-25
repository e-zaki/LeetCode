class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));
        vector<int> ans;
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (s.count(i) <= 0)
                ans.push_back(i);
        }
        return ans;
    }
};