class Solution {
public:
    vector<int> p;

    int find(int x) {
        if(p[x] != x) p[x] = find(p[x]);
        return p[x];
    }

    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int n = vals.size();
        vector<vector<int>> g(n);
        p.resize(n);
        vector<int> q(n);

        for(auto& e : edges) {
            int a = e[0], b = e[1];
            g[a].push_back(b);
            g[b].push_back(a);
        }

        for(int i = 0; i < n; i ++) p[i] = q[i] = i;
        sort(q.begin(), q.end(), [&](int a, int b) {
            return vals[a] < vals[b];
        });

        int result = 0;
        for(int i = 0; i < n; i ++) {
            int j = i + 1;
            while(j < n && vals[q[i]] == vals[q[j]]) j ++;
            for(int k = i; k < j; k ++) {
                int x = q[k];
                for(int y : g[x]) {
                    if(vals[x] >= vals[y]) {
                        p[find(x)] = find(y);
                    }
                }
            }
            unordered_map<int, int> record;
            for(int k = i; k < j; k ++) {
                record[find(q[k])] ++;
            }
            for(auto& [k, v] : record) {
                result += v * (v + 1) / 2;
            }
            i = j - 1;
        }
        return result;
    }
};