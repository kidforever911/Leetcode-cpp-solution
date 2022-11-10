class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int result = 0;
        int n = points.size();
        for(int i = 0; i < n; i ++) {
            unordered_map<int, int> record;
            for(int j = 0; j < n; j ++) {
                if(i != j) {
                    int dx = points[i][0] - points[j][0];
                    int dy = points[i][1] - points[j][1];
                    int dist = dx * dx + dy * dy;
                    record[dist] ++;
                }
            }
            for(auto [x, y] : record) result += y * (y - 1);
        }
        return result;
    }
};