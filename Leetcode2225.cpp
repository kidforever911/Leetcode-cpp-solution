class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> result(2);
        if(matches.empty()) return result;
        unordered_set<int> hash;
        unordered_map<int, int> record;
        for(auto& temp : matches) {
            hash.insert(temp[0]);
            hash.insert(temp[1]);
            record[temp[1]] ++;
        }
        for(auto& x : hash) {
            if(record[x] == 0) {
                result[0].push_back(x);
            } else if(record[x] == 1) {
                result[1].push_back(x);
            }
        }
        sort(result[0].begin(), result[0].end());
        sort(result[1].begin(), result[1].end());
        return result;
    }
};