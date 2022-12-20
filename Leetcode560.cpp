class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum = 0;
        unordered_map<int, int> record;
        record[0] = 1;
        int result = 0, n = nums.size();
        for(int i = 0; i < n; i ++) {
            preSum += nums[i];
            result += record[preSum - k];
            record[preSum] ++;
        }
        return result;
    }
};