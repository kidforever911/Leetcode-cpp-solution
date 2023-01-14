const int N = 100010, M = 2 * N;
int h[N], ne[M], e[M];
int idx = 0;
unordered_set<int> isVisited;

class Solution {
public:



    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        memset(h, -1, sizeof h);
        for(auto& e : edges) {
            int a = e[0], b = e[1];
            add(a, b);
            add(b, a);
        }
        return dfs(0, hasApple);
    }

    int dfs(int x, vector<bool>& hasApple) {
        isVisited.insert(x);
        int result = 0;
        for(int i = h[x]; i != -1; i = ne[i]) {
            int j = e[i];
            if(isVisited.count(j)) continue;
            result += dfs(j, hasApple);
        }
        if((result > 0 || hasApple[x]) && x != 0) result += 2;
        return result;
    }

    void add(int a, int b) {
        e[idx] = b;
        ne[idx] = h[a];
        h[a] = idx ++;
    }
};