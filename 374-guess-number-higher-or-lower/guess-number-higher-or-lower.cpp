/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    void LetsWin(int n, int* picked) {
        int first = 1, last = n;
        int mid, g;
        while (first <= last) {
            mid = first + (last - first) / 2;
            g = guess(mid);
            if (g == 0) {
                *picked = mid; return;
            }
            else if (g == -1)
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
public:
    int guessNumber(int n) {
        int picked;
        LetsWin(n, &picked);
        return picked;
    }
};