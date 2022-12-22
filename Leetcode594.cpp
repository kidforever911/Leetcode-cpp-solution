class Solution {
public:
    int findLHS(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_map<int, int> record;
        int n = nums.size();
        int result = 0;
        for(auto& x : nums) record[x] ++;
        for(auto& [k, v] : record) {
            if(record.count(k + 1)) {
                result = max(result, record[k] + record[k + 1]);
            }
        }
        return result;
    }
};