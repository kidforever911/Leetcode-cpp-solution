class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> record;
        int maxc = 0, count = 0;
        for(auto& c : tasks) record[c] ++;
        for(auto& [k, v] : record) maxc = max(maxc, v);
        for(auto& [k, v] : record) {
            if(maxc == v) {
                count ++;
            }
        }
        return max((int)tasks.size(), (maxc - 1) * (n + 1) + count);
    }
};