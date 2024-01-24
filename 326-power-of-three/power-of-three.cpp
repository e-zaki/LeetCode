class Solution {
    void TestPowers(int n, int* ans) {
        if (n == 1) {
            *ans = 1;
            return;
        }
        if (n % 3) {
            return;
        }
        TestPowers(n/3, ans);
    }
public:
    bool isPowerOfThree(int n) {
        if (!n)
            return false;
        else if (n == 1)
            return true;
        int ans = 0;
        TestPowers(n, &ans);
        return ans;
    }
};