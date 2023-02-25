class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = 0, right = 500 * 50000;
        while(left < right) {
            int mid = left + right >> 1;
            if(check(weights, days, mid)) right = mid;
            else left = mid + 1;
        }
        return right;
    }

    bool check(vector<int>& weights, int days, int x) {
        int count = 1;
        for(int i = 0, s = 0; i < weights.size(); i ++) {
            if(weights[i] > x) return false;
            if(s + weights[i] > x) {
                count ++;
                s = 0;
            }
            s += weights[i];
        }
        return count <= days;
    }
};