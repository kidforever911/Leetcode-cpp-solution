class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(!k) {
            for(int i = 1; i < nums.size(); i ++) {
                if(!nums[i - 1] && !nums[i]) {
                    return true;
                }
            }
            return false;
        }
        int n = nums.size();
        vector<int> preSum(n + 1);
        for(int i = 1; i <= n; i ++) preSum[i] = preSum[i - 1] + nums[i - 1];
        unordered_set<int> record;
        for(int i = 2; i <= n; i ++) {
            record.insert(preSum[i - 2] % k);
            if(record.count(preSum[i] % k)) return true;
        }
        return false;
    }
};