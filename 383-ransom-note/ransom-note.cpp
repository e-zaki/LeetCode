class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int buf[26] = {0};
        if (ransomNote.size() > magazine.size())
            return false;
        int len = magazine.size();
        for (int i = 0; i < len; i++)
            (buf[magazine[i]-'a'])++;
        len = ransomNote.size();
        for (int i = 0; i < len; i++) {
            if (buf[ransomNote[i]-'a'] == 0)
                return false;
            else
                (buf[ransomNote[i]-'a'])--;
        }
        return true;
    }
};