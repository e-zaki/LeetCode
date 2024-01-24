class Solution {
private:
    void    putHex(unsigned int num, string& str, char *hex) {
        if (num < 16) {
                str += hex[num];
        }
        else {
            putHex(num/16, str, hex);
            putHex(num%16, str, hex);
        }
    }
public:
    string toHex(int num) {
        char *hex = "0123456789abcdef";
        string str = "";
        putHex(num, str, hex);
        return str;
    }
};