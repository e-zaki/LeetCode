class Solution {
public:
    int go(int n, int a, int b) {
        if (n == 1)
            return a;
        else if (n == 2)
            return b;
        else
            return go(n - 1, b, a + b);

    }

    int climbStairs(int n) {
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else
            return go(n, 1, 2);
    }
};