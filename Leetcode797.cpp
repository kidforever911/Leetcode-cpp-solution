class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    int n;

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        if(graph.empty() || graph[0].empty()) return graph;
        vector<int> path;
        n = graph.size();
        dfs(graph, 0);
        return result;
    }

    void dfs(vector<vector<int>>& graph, int index) {
        path.push_back(index);
        if(index == n - 1) {
            result.push_back(path);
        }
        for(auto& x : graph[index]) dfs(graph, x);
        path.pop_back();
        return;
    }
};