class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> record;
        for(auto& x : tasks) record[x] ++;
        int result = 0;
        for(auto& [k, v] : record) {
            if(v / 3 == 0 && v % 3 == 1) return -1;
            result += (v / 3) + (v % 3 == 0 ? 0 : 1);
        }
        return result;
    }
};