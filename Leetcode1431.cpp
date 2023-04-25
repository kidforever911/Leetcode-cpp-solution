class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);
        int maxC = 0;
        for(int i = 0; i < n; i ++) {
            maxC = max(maxC, candies[i]);
        }
        for(int i = 0; i < n; i ++) {
            if(candies[i] + extraCandies >= maxC) {
                result[i] = true;
            }
        }
        return result;
    }
};