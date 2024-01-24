class Solution {
private:
    bool InMap(string& str, map<char,string>& mp, string& p, int idx) {
        for (int i = 0; i < idx; i++) {
            if (mp[p[i]] == str)
                return true;
        }
        return false;
    }
public:
    bool wordPattern(string p, string s) {
        string delim = " ", str;
        int end = s.find(delim), start = 0, i = 0;
        map<char, string> mp;
        while (end != -1 && i < p.size()) {
            str = s.substr(start, end-start);
            if (mp.find(p[i]) == mp.end() ) {
                if (InMap(str, mp, p, i))
                    return false;
                mp[p[i]] = str;
            }
            else if (mp[p[i]] != str)
                return false;
            start = end + 1; // delim.size = 1;
            end = s.find(delim, start);
            i++;
        }
        if (p.size() - i != 1)
            return false;
        str = s.substr(start);
        if (mp.find(p[i]) == mp.end()) {
            if (InMap(str, mp, p, i))
                return false;
            return true;
        }
        return (mp[p[i]] == str);
    }
};