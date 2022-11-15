class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0) return 0;
        int result = 0;
        int row = grid.size();
        int col = grid[0].size();
        int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if(grid[i][j] == 1) {
                    for(int k = 0; k < 4; k ++) {
                        int newx = i + direction[k][0];
                        int newy = j + direction[k][1];
                        if(newx < 0 || newx >= row || newy < 0 || newy >= col) result ++;
                        else if(grid[newx][newy] == 0) result ++;
                    }
                }
            }
        }
        return result;
    }
};