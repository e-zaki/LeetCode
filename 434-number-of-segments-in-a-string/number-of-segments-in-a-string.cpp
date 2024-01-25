class Solution {
public:
    int countSegments(string s) {
        int len = s.size(), counter = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ' && (i==0 || s[i-1] == ' '))
                counter++;
        }
        return counter;
    }
};