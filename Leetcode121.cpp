class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i ++) {
            result = max(result, prices[i] - minPrice);
            minPrice = min(prices[i], minPrice);
        }
        return result;
    }
};