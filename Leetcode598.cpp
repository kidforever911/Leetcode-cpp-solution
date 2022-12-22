class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for(auto& temp : ops) {
            m = min(m, temp[0]);
            n = min(n, temp[1]);
        }
        return m * n;
    }
};