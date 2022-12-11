class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> record;
        int n = wall.size();
        for(auto& lines : wall) {
            for(int i = 0, s = 0; i < lines.size() - 1; i ++) {
                s += lines[i];
                record[s] ++;
            }
        }
        int count = 0;
        for(auto& [k, v] : record) {
            count = max(v, count);
        }
        return n - count;
    }
};