class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();
        vector<vector<bool>> g(n + 1, vector<bool>(n + 1));
        for(int len = 1; len <= n; len ++) {
            for(int i = 1; i + len - 1 <= n; i ++) {
                int j = i + len - 1;
                if(s[i - 1] == s[j - 1] && (len <= 2 || g[i + 1][j - 1])) {
                    g[i][j] = true;
                }
            }
        }
        
        vector<int> f(n + 1);
        for(int i = 1; i <= n; i ++) {
            f[i] = f[i - 1];
            for(int j = i - k; j >= 0; j --) {
                if(g[j + 1][i]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
        }
        return f[n];
    }
};