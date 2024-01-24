class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch = 0;
        int i = 0, len = s.size();
        for (; i < len; i++)
            ch += (t[i] - s[i]);
        ch += t[i];
        return ch;
    }
};