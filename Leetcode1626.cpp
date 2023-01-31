class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int result = 0, n = scores.size();
        vector<pair<int, int>> q(n);
        for(int i = 0; i < n; i ++) {
            q[i] = {ages[i], scores[i]};
        }
        sort(q.begin(), q.end());
        vector<int> f(n);
        for(int i = 0; i < n; i ++) {
            f[i] = q[i].second;
            for(int j = 0; j < i; j ++) {
                if(q[i].second >= q[j].second) {
                    f[i] = max(f[i], f[j] + q[i].second);
                }
            }
            result = max(result, f[i]);
        }
        return result;
    }
};