class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string str;
        int i = 0, n = nums.size();
        int prev_nb, nb;

        while (i < n) {
            prev_nb = nums[i];
            nb = prev_nb;
            while (i+1 < n && 1 + nums[i] == nums[i+1]) {
                nb = nums[i+1];
                i++;
            }
            if (nb != prev_nb)
                ans.push_back(to_string(prev_nb) + "->" + to_string(nb));
            else
                ans.push_back(to_string(prev_nb));
            i++;
        }
        return ans;
    }
};