class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(std::remove_if(s.begin(), s.end(), 
                        [](unsigned char c) { return !std::isalnum(c); }), s.end());
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l = s.size();
        if (l % 2)
            s.erase(l/2, 1);
        string r = s.substr(l/2, l/2);
        reverse(r.begin(), r.end());
        return (s.substr(0, l/2) == r);
    }
};