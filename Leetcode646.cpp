class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int> &a, vector<int> &b) {
            return a[1] < b[1];
        });
        int result = 1, end = pairs[0][1];
        for(auto& p : pairs) {
            if(p[0] > end) {
                result ++;
                end = p[1];
            }
        }
        return result;
    }
};