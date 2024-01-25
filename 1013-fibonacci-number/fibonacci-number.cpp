class Solution {
public:
    int fib(int n) {
        if (n < 2)
            return n;
        int f[2]; f[0] = 0; f[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            int tmp = f[1];
            f[1] = f[0] + f[1];
            f[0] = tmp;
        }
        return f[1];
    }
};