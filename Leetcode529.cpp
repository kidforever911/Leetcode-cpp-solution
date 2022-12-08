class Solution {
public:
    int row, col;

    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        row = board.size();
        col = board[0].size();
        int x = click[0], y = click[1];
        if(board[x][y] == 'M') {
            board[x][y] = 'X';
            return board;
        }
        dfs(board, x, y);
        return board;
    }

    void dfs(vector<vector<char>>& board, int x, int y) {
        if(board[x][y] != 'E') return;
        int count = 0;
        for(int i = max(x - 1, 0); i <= min(x + 1, row - 1); i ++) {
            for(int j = max(y - 1, 0); j <= min(y + 1, col - 1); j ++) {
                if(i != x || j != y) {
                    if(board[i][j] == 'M' || board[i][j] == 'X') {
                        count ++;
                    }
                }
            }
        }
        if(count) {
            board[x][y] = '0' + count;
            return;
        }
        board[x][y] = 'B';
        for(int i = max(x - 1, 0); i <= min(x + 1, row - 1); i ++) {
            for(int j = max(y - 1, 0); j <= min(y + 1, col - 1); j ++) {
                if(i != x || j != y) {
                    dfs(board, i, j);
                }
            }
        }
        return;
    }
};