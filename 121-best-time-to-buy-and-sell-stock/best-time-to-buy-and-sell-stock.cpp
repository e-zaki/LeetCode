class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowestCost = INT_MAX;
        int ifSoldTodayProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (lowestCost > prices[i])
                lowestCost = prices[i];
            ifSoldTodayProfit = prices[i] - lowestCost;
            if (ifSoldTodayProfit > profit)
                profit = ifSoldTodayProfit;
        }
        return profit;
    }
};