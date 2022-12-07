class Solution {
public:
    vector<int> preSum;
    int n;

    Solution(vector<int>& w) {
        preSum = w;
        n = w.size();
        for(int i = 1; i < n; i ++) preSum[i] += preSum[i - 1];
    }

    int pickIndex() {
        int x = rand() % preSum.back() + 1;
        return lower_bound(preSum.begin(), preSum.end(), x) - preSum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */