#define x first
#define y second

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()) return mat;
        int row = mat.size(), col = mat[0].size();
        vector<vector<int>> dist(row, vector<int>(col, -1));
        typedef pair<int, int> PII;
        queue<PII> q;

        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if(mat[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(q.size()) {
            PII cur = q.front();
            q.pop();
            for(int i = 0; i < 4; i ++) {
                int x = cur.x + direction[i][0];
                int y = cur.y + direction[i][1];
                if(x >= 0 && x < row && y >= 0 && y < col && dist[x][y] == -1) {
                    dist[x][y] = dist[cur.x][cur.y] + 1;
                    q.push({x, y});
                }
            }
        }
        return dist;
    }
};