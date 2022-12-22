class Solution {
public:
    const int MOD = 1e9 + 7;
    int findPaths(int row, int col, int maxMove, int startRow, int startColumn) {
        if(!maxMove) return 0;
        vector<vector<vector<int>>> f(row, vector<vector<int>>(col, vector<int>(maxMove + 1, 0)));
        for(int i = 0; i < col; i ++) {
            f[0][i][1] ++;
            f[row - 1][i][1] ++;
        }
        for(int i = 0; i < row; i ++) {
            f[i][0][1] ++;
            f[i][col - 1][1] ++;
        }

        int direction[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        for(int k = 1; k <= maxMove; k ++) {
            for(int i = 0; i < row; i ++) {
                for(int j = 0; j < col; j ++) {
                    for(int u = 0; u < 4; u ++) {
                        int x = i + direction[u][0];
                        int y = j + direction[u][1];
                        if(x >= 0 && x < row && y >= 0 && y < col) {
                            (f[i][j][k] += f[x][y][k - 1]) %= MOD;
                        }
                    }
                }
            }
        }
        int result = 0;
        for(int k = 1; k <= maxMove; k ++) {
            (result += f[startRow][startColumn][k]) %= MOD;
        }
        return result;
    }
};