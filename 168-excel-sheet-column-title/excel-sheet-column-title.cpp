class Solution {
public:
    string convertToTitle(int nb) {
        string alpha= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string str = "";
        int r;
        nb--;
        while (nb >= 0)
        {
            r = nb % 26;
            str.push_back(alpha[r]);
            nb /= 26;
            nb--;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};