class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26] = {0};
        int counter = 0;
        for (char c : s)
            freq[c - 'a']++;
        for (char c : t)
            freq[c - 'a']--;
        for (int i = 0; i < 26; i++)
            if (freq[i] > 0)
                counter += freq[i];
        return counter;
    }
};