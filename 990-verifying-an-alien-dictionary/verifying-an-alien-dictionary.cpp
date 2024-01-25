class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int idx;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                idx = order.find(words[i][j]);
                words[i][j] = 'a' + idx;
            }
        }
        return std::is_sorted(std::begin(words), std::end(words));
    }
};