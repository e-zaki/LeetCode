class Solution {
public:
    int mySqrt(int x) {
        if (!x || x == 1)
            return x;
        size_t n = 2;
        while (n * n <= x)
            n++;
        return n - 1;
    }
};