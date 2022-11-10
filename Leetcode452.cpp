class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) return 0;
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1]; 
        });
        int result = 1, right = points[0][1];
        for(int i = 1; i < points.size(); i ++) {
            if(points[i][0] > right) {
                result ++;
                right = points[i][1];
            }
        }
        return result;
    }
};