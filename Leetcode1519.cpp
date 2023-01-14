class Solution {
public:
    vector<vector<int>> f;
    vector<vector<int>> g;
    string w;

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        w = labels;
        g.resize(n);
        f = vector<vector<int>>(n, vector<int>(26));
        for(auto& e : edges) {
            int a = e[0], b = e[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        dfs(0, -1);
        vector<int> result(n);
        for(int i = 0; i < n; i ++) result[i] = f[i][w[i] - 'a'];
        return result;
    }

    void dfs(int u, int father) {
        f[u][w[u] - 'a'] = 1;
        for(auto son : g[u]) {
            if(son == father) continue;
            dfs(son, u);
            for(int j = 0; j < 26; j ++) f[u][j] += f[son][j];
        }
    }
};