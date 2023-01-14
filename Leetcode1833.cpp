class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int result = 0;
        sort(costs.begin(), costs.end());
        for(int i = 0; i < costs.size(); i ++) {
            if(coins >= costs[i]) {
                result ++;
                coins -= costs[i];
            }
        }
        return result;
    }
};