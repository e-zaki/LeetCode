class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, l1 = s.size(), l2 = g.size();
        for (int j = 0; j < l1 && i < l2; j++)
            if (s[j] >= g[i])
                i++;
        return i;
    }
};