#define x first
#define y second

typedef pair<int, int> PII;

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size(), m = maze[0].size(), INF = 1e8;
        vector<vector<int>> dist(n, vector<int>(m, INF));
        dist[entrance[0]][entrance[1]] = 0;
        queue<PII> q;
        q.push({entrance[0], entrance[1]});
        int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while(q.size()) {
            auto cur = q.front();
            q.pop();
            for(int i = 0; i < 4; i ++) {
                int newx = cur.x + direction[i][0];
                int newy = cur.y + direction[i][1];
                if(newx >= 0 && newx < n && newy >= 0 && newy < m && maze[newx][newy] == '.' && dist[newx][newy] > dist[cur.x][cur.y] + 1) {
                    dist[newx][newy] = dist[cur.x][cur.y] + 1;
                    if(!newx || newx == n - 1 || !newy || newy == m - 1) return dist[newx][newy];
                    q.push({newx, newy});
                }
            }
        }
        return -1;
    }
};