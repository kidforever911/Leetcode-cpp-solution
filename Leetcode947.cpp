class Solution {
public:
    vector<int> p;
    int find(int x) {
        if(p[x] != x) p[x] = find(p[x]);
        return p[x];
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        for(int i = 0; i < n; i ++) p.push_back(i);
        unordered_map<int, vector<int>> row, col;
        for(int i = 0; i < n; i ++) {
            row[stones[i][0]].push_back(i);
            col[stones[i][1]].push_back(i);
        }
        for(auto& [k, v] : row) {
            for(int i = 1; i < v.size(); i ++) {
                p[find(v[i])] = find(v[0]);
            }
        }
        for(auto& [k, v] : col) {
            for(int i = 1; i < v.size(); i ++) {
                p[find(v[i])] = find(v[0]);
            }
        }
        unordered_set<int> record;
        for(int i = 0; i < n; i ++) record.insert(find(i));
        return n - record.size();
    }
};