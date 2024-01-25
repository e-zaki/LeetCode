class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.size()-1, len2 = num2.size()-1, r = 0, num;

        string ans = "";
        while (len1 >= 0 || len2 >= 0 || r) {
            num = 0;
            if (len1 >= 0)
                num += (num1[len1--] - '0');
            if (len2 >= 0)
                num += (num2[len2--] - '0');
            num += r;
            r = num / 10;
            ans += ('0' + num % 10);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};