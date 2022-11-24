class Solution {
public:
    vector<vector<char>> board;
    string word;
    vector<vector<bool>> isVisited;
    int direction[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    bool exist(vector<vector<char>>& _board, string _word) {
        board = _board;
        word = _word;
        int row = board.size();
        int col = board[0].size();
        isVisited = vector<vector<bool>>(row, vector<bool>(col));
        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if(dfs(0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(int index, int x, int y) {
        if(board[x][y] != word[index]) return false;
        if(index == word.size() - 1) return true;
        isVisited[x][y] = true;
        for(int i = 0; i < 4; i ++) {
            int newx = x + direction[i][0];
            int newy = y + direction[i][1];
            if(newx >= 0 && newx < board.size() && newy >= 0 && newy < board[0].size() && !isVisited[newx][newy] && dfs(index + 1, newx, newy)) {
                return true;
            }
        }
        isVisited[x][y] = false;
        return false;
    }
};

class Solution {
public:
    int direction[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if(dfs(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string& word, int index, int x, int y) {
        if(board[x][y] != word[index]) return false;
        if(index == word.size() - 1) return true;
        char t = board[x][y];
        board[x][y] = '.';
        for(int i = 0; i < 4; i ++) {
            int newx = x + direction[i][0];
            int newy = y + direction[i][1];
            if(newx < 0 || newx >= board.size() || newy < 0 || newy >= board[0].size() || board[newx][newy] == '.') continue;
            if(dfs(board, word, index + 1, newx, newy)) return true;
        }
        board[x][y] = t;
        return false;
    }
};