class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        typedef long long LL;
        int n = questions.size();
        vector<LL> f(n + 1, 0);
        LL result = 0;
        for(int i = n - 1; i >= 0; i --) {
            int j = min(n, i + questions[i][1] + 1);
            f[i] = max(f[i + 1], f[j] + questions[i][0]);
            result = max(result, f[i]);
        }
        return result;
    }
};