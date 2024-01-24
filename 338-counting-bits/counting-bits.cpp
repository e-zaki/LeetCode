class Solution {
private:
    int numBitsIn(int n) {
        int counter = 0;
        for (int i = 0; i < 32; i++) {
            counter += n%2;
            n >>= 1;
        }
        return counter;
    }
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++)
            res.push_back(numBitsIn(i));
        return res;
    }
};