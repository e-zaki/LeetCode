class Solution {
public:
    int arrangeCoins(int num) {
        long int n = num;
        int first = 1, last = n;
        long med, coinNum;
        while (first <= last) {
            med = first + (last - first) / 2;
            coinNum = med * (med + 1) / 2;
            if (coinNum ==  n)
                return med;
            else if (coinNum > n)
                last = med - 1;
            else
                first = med + 1;
        }
        return last;
    }
};