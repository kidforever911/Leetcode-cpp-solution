class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long result = 0LL, sum = 0LL;
        int n = nums.size();
        int record[100010] = {0};
        for(int slow = 0, fast = 0; fast < n; fast ++) {
            sum += nums[fast];
            record[nums[fast]] ++;
            while(record[nums[fast]] > 1 || fast - slow + 1 > k) {
                record[nums[slow]] --;
                sum -= nums[slow];
                slow ++;
            }
            if(fast - slow + 1 == k) {
                result = max(result, sum);
            }
        }
        return result;
    }
};