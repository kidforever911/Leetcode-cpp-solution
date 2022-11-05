class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            record[nums[i]] = i;
            if(record[target - nums[i]] && record[target - nums[i]] != i) {
                return {target - nums[i], nums[i]};
            }
        }
        return {};
    }
};