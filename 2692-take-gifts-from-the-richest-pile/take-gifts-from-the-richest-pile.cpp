class Solution {
public:
    int getMaxIndex(vector<int>&gifts, int l)
    {
        int idx = 0;
        for (int i = 1; i < l; i++)
            if (gifts[i] > gifts[idx])
                idx = i;
        return idx;
    }
    long long pickGifts(vector<int>& gifts, int k) {
        int idx, l = gifts.size();
        long long s = 0;
        for (int i = 0; i < k; i++) {
            idx = getMaxIndex(gifts, l);
            gifts[idx] = sqrt(gifts[idx]);
        }
        for (int i = 0; i < l; i++)
        {    cout << gifts[i] << " ";
            s += gifts[i];}
        return s;
    }
};