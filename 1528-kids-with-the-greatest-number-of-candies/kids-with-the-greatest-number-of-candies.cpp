class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vect;

        int max = *max_element(begin(candies), end(candies));
        for (int i = 0; i < candies.size(); i++)
            vect.push_back(candies[i] + extraCandies >= max);
        return vect;
    }
};