class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty()) return false;
        int n = board.size();
        bool row[n][10], col[n][10], cell[n / 3][n / 3][10];
        memset(row, false, sizeof row);
        memset(col, false, sizeof col);
        memset(cell, false, sizeof cell);
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                if(board[i][j] != '.') {
                    int index = board[i][j] - '0';
                    if(row[i][index] || col[j][index] || cell[i / 3][j / 3][index]) return false;
                    row[i][index] = col[j][index] = cell[i / 3][j / 3][index] = true;
                }
            }
        }
        return true;
    }
};