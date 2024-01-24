#include <set>
#include <cmath>

class Solution {
public:
    int square_sum(int n) {
        int s = 0;
        while (n != 0) {
            s += pow(n % 10, 2);
            n /= 10;
        }
        return s;
    }
    bool isHappy(int n) {
        set<int> s;

        while (1) {
            n = square_sum(n);
            if (n == 1)
                return true;
            if (s.find(n) != s.end())
                return false;
            s.insert(n);
        }
    }
};