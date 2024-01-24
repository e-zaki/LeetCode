class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> bigV;
        vector<int> v;
        v.push_back(1);
        bigV.push_back(v);
        if (numRows == 1)
            return bigV;
        v.push_back(1);
        bigV.push_back(v);
        numRows--;
        for (int i = 1; i < numRows; i++) {
            v.clear();
            v.push_back(1);
            for (int j = 0; j < bigV[i].size(); j++) {
                if (j + 1 < bigV[i].size())
                    v.push_back(bigV[i][j] + bigV[i][j + 1]);
            }
            v.push_back(1);
            bigV.push_back(v);
        }
        return bigV;
    }
};