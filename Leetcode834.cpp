const int N = 30010, M = 60010;
int h[N], e[M], ne[M], idx;
int down[N], cnt[N], up[N];

class Solution {
public:
    int n;

    vector<int> sumOfDistancesInTree(int _n, vector<vector<int>>& edges) {
        n = _n;
        idx = 0;
        memset(h, -1, sizeof h);
        for(auto& e : edges) {
            int a = e[0], b = e[1];
            add(a, b), add(b, a);
        }
        dfs1(0, -1);
        dfs2(0, -1);

        vector<int> result;
        for(int i = 0; i < n; i ++) {
            result.push_back(up[i] + down[i]);
        }
        return result;
    }

    void add(int a, int b) {
        e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
    }

    void dfs1(int u, int father) {
        down[u] = 0;
        cnt[u] = 1;
        for (int i = h[u]; i != - 1; i = ne[i]) {
            int j = e[i];
            if (j == father) {
                continue;
            }
            dfs1(j, u);
            down[u] += down[j] + cnt[j];
            cnt[u] += cnt[j];
        }
    }

    void dfs2(int u, int father) {
        for (int i = h[u]; i != -1; i = ne[i]) {
            int j = e[i];
            if (j == father) {
                continue;
            }
            up[j] = up[u] + down[u] - (down[j] + cnt[j]) + n - cnt[j];
            dfs2(j, u);
        }
    }
};