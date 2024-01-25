class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1)
            return stones[0];
        priority_queue<int> pq;
        int n = stones.size();
        for (int i = 0; i < n; i++)
            pq.push(stones[i]);
        int a, b;
        while (!pq.empty()) {
            a = pq.top();
            if (a == 0)
                break;
            pq.pop();
            if (pq.empty())
                return a;
            b = pq.top();
            pq.pop();
            if (a != b)
                pq.push(a-b);   
        }
        return 0;
    }
};