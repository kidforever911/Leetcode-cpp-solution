class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        if(groupSizes.size() == 0) return result;
        unordered_map<int, vector<int>> record;
        for(int i = 0; i < groupSizes.size(); i ++) {
            int x = groupSizes[i];
            record[x].push_back(i);
            if(record[x].size() == x) {
                result.push_back(record[x]);
                record[x].clear();
            }
        }
        return result;
    }
};