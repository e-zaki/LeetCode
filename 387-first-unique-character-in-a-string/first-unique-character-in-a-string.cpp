class Solution {
public:
    int firstUniqChar(string s) {
        int idx = -1;
        int buf[26] = {0};
        for (int i = 0; i < s.size(); i++)
            (buf[s[i] - 'a'])++;
        for (int i = 0; i < s.size(); i++) {
            if (buf[s[i]-'a'] == 1) {
                idx = i;
                break;
            }
        }
        return idx;
    }
};