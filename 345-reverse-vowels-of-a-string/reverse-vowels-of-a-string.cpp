class Solution {
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (1) {
            while (j > i && !isVowel(s[j]))
                j--;
            while (i < j && !isVowel(s[i]))
                i++;
            if (i >= j)
                break;
            swap(s[i], s[j]);
            i++; j--;
        }
        return s;
    }
};