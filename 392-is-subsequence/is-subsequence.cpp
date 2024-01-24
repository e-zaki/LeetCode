class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        int tlen = t.size();
        if (s.size() > tlen)
            return false;
        for (int i = 0; i < tlen; i++) {
            if (t[i] == s[idx])
                idx++;
        }
        return idx == s.size();
    }
};