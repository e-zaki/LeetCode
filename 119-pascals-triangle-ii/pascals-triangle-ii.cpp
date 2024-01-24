class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        v.push_back(1);
        int l, j, prev;
        for (int i = 0; i < rowIndex; i++){
            // modify row
            l = v.size();
            j = 0, prev = 0;
            while (j < l) {
                v[j] += prev;
                prev = v[j] - prev;
                j++;
            }
            v.push_back(1);
        }
        return v;
    }
};