class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int result = 0;
        int n = capacity.size();
        vector<int> diff(n);
        for(int i = 0; i < n; i ++) {
            diff[i] = capacity[i] - rocks[i];
        }
        sort(diff.begin(), diff.end());
        for(int i = 0; i < n; i ++) {
            if(additionalRocks >= diff[i]) {
                additionalRocks -= diff[i];
                result ++;
            }
        }
        return result;
    }
};