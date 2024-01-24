class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l = columnTitle.length();
        int val = 0;
        for (int i = 0; i < l; i++) {
            val *= 26;
            val = val + (columnTitle[i] - 'A') + 1;
        }
        return val;
    }
};