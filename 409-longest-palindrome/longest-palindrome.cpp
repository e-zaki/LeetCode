class Solution {
public:
    int longestPalindrome(string s) {
        int table[128] = {0};
        int slen = s.size();
        int sum = 0;
        for (int i = 0; i < slen; i++) {
            (table[s[i]])++;
            if (table[s[i]] && table[s[i]] % 2 == 0) {
                sum += table[s[i]];
                table[s[i]] = 0;
            }
        }
        for (int i = 41; i < 128; i++) {
            if (table[i]) {
                sum++; break ;
            }
        }
        return sum;
    }
};