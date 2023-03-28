class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> f(n + 1);
        for(int i = 1, a = 0, b = 0, c = 0; i <= n; i ++) {
            while(days[i - 1] - days[a] >= 1) a ++;
            while(days[i - 1] - days[b] >= 7) b ++;
            while(days[i - 1] - days[c] >= 30) c ++;
            f[i] = min(f[a] + costs[0], min(f[b] + costs[1], f[c] + costs[2]));
        }
        return f[n];
    }
};