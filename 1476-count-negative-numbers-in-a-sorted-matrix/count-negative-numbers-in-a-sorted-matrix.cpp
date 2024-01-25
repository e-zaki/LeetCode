class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int s = 0, m = grid.size();
        int n;
        for (int i = 0; i < m; i++) {
            n = grid[0].size();
            while (--n >= 0) {
                if (grid[i][n] >= 0) {
                    break;
                }
                s++;
            }
        }
        return s;
    }
};