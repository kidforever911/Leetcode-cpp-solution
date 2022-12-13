class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<vector<int>> f(row, vector<int>(col, INT_MAX));
        for(int i = 0; i < col; i ++) f[0][i] = matrix[0][i];
        for(int i = 1; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                for(int k = max(0, j - 1); k <= min(col - 1, j + 1); k ++) {
                    f[i][j] = min(f[i][j], f[i - 1][k] + matrix[i][j]);
                }
            }
        }
        int result = INT_MAX;
        for(int i = 0; i < col; i ++) result = min(result, f[row - 1][i]);
        return result;
    }
};