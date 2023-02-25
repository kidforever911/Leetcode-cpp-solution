class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> f(n), g(n);

        int maxl = 0, result = 0;
        for(int i = 0; i < n; i ++) {
            f[i] = g[i] = 1;
            for(int j = 0; j < i; j ++) {
                if(nums[j] < nums[i]) {
                    if(f[i] < f[j] + 1) {
                        f[i] = f[j] + 1;
                        g[i] = g[j];
                    } else if(f[i] == f[j] + 1) {
                        g[i] += g[j];
                    }
                }
            }
            if(maxl < f[i]) {
                maxl = f[i];
                result = g[i];
            } else if(maxl == f[i]) {
                result += g[i];
            }
        }
        return result;
    }
};