class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result = 0, row = grid.size(), col = grid[0].size();
        for(int i = 0, j = col - 1; i < row; i ++) {
            while(j >= 0 && grid[i][j] < 0) j --;
            result += col - 1 - j;
        }
        return result;
    }
};