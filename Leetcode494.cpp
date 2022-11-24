class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        if(target < -1000 || target > 1000) return 0;
        int n = nums.size(), Offset = 1000;
        vector<vector<int>> f(n + 1, vector<int>(2001));
        f[0][Offset] = 1;
        for(int i = 1; i <= n; i ++) {
            for(int j = -1000; j <= 1000; j ++) {
                if(j - nums[i - 1] >= -1000) {
                    f[i][j + Offset] += f[i - 1][j - nums[i - 1] + Offset];
                }
                if(j + nums[i - 1] <= 1000) {
                    f[i][j + Offset] += f[i - 1][j + nums[i - 1] + Offset];
                }
            }
        }
        return f[n][target + Offset];
    }
};