class Solution {
public:
    struct Tree{
        int x, y, h;
        bool operator< (const Tree& t) const {
            return h < t.h;
        }
    };

    int row, col;
    vector<vector<int>> g;

    int bfs(Tree start, Tree end) {
        if(start.x == end.x && start.y == end.y) return 0;
        queue<Tree> q;
        q.push({start});
        const int INF = 1e8;
        vector<vector<int>> dist(row, vector<int>(col, INF));
        dist[start.x][start.y] = 0;
        int direction[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        while(q.size()) {
            auto cur = q.front();
            q.pop();
            for(int i = 0; i < 4; i ++) {
                int x = cur.x + direction[i][0];
                int y = cur.y + direction[i][1];
                if(x >= 0 && x < row && y >= 0 && y < col && g[x][y] && dist[x][y] > dist[cur.x][cur.y] + 1) {
                    dist[x][y] = dist[cur.x][cur.y] + 1;
                    if(x == end.x && y == end.y) return dist[x][y];
                    q.push({x, y});
                }
            }
        }
        return -1;
    }

    int cutOffTree(vector<vector<int>>& forest) {
        g = forest;
        int result = 0;
        row = g.size(), col = g[0].size();
        vector<Tree> record;
        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if(g[i][j] > 1) {
                    record.push_back({i, j, g[i][j]});
                }
            }
        }
        sort(record.begin(), record.end());
        Tree last = {0, 0};
        for(auto& t : record) {
            int distance = bfs(last, t);
            if(distance == -1) return -1;
            result += distance;
            last = t;
        }
        return result;
    }
};