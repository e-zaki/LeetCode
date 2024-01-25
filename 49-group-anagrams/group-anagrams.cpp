class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
    
        for (auto e: strs)
        {
            string  s =  e;
            sort(s.begin(), s.end());
            mp[s].push_back(e); 
        }
        vector<vector<string>> ans;
        for (auto e: mp)
        {
            ans.push_back(e.second);
        }
        return ans;
    }
};