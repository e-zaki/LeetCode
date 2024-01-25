class Solution {
public:
    static bool sortByVal(pair<int, int>&a, pair<int, int>&b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> M;
        for (int i = 0; i < nums.size(); i++)
            M[nums[i]]++;
        vector<pair<int, int>> vec(M.begin(), M.end());
        sort(vec.begin(), vec.end(), sortByVal);
        vector<int> ans;
        for (int j = 0; j < k; j++)
            ans.push_back(vec[j].first);
        return ans;
    }
};