class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> record;
        unordered_set<int> set;
        for(auto& x : arr) {
            record[x] ++;
        }
        for(auto& [k, v] : record) {
            set.insert(v);
        }
        return set.size() == record.size();
    }
};