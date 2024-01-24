class Solution {
public:
    void reverseString(vector<char>& s) {
        int last = s.size();
        int med = last / 2;
        last--;
        for (int i = 0; i < med; i++)
            swap(s[i], s[last - i]);
    }
};