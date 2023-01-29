class Solution {
public:
    int kInversePairs(int n, int k) {
        const int MOD = 1e9 + 7;
        vector<vector<int>> f(n + 1, vector<int>(k + 1));
        f[1][0] = 1;
        for(int i = 2; i <= n; i ++) {
            long long s = 0;
            for(int j = 0; j <= k; j ++) {
                s += f[i - 1][j];
                if(j - i >= 0) s -= f[i - 1][j - i];
                f[i][j] = s % MOD;
            }
        }
        return (f[n][k] + MOD) % MOD;
    }
};