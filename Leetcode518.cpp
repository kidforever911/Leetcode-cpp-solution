class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int m = amount;
        vector<vector<int>> f(n + 1, vector<int>(m + 1));
        f[0][0] = 1;
        for(int i = 1; i <= n; i ++) {
            for(int j = 0; j <= m; j ++) {
                f[i][j] = f[i - 1][j];
                if(j >= coins[i - 1]) f[i][j] += f[i][j - coins[i - 1]];
            }
        }
        return f[n][m];
    }
};

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int m = amount;
        vector<int> f(m + 1);
        f[0] = 1;
        for(auto& x : coins) {
            for(int i = x; i <= m; i ++) {
                f[i] += f[i - x];
            }
        }
        return f[m];
    }
};