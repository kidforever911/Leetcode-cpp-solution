class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.empty()) return 0.0;
        double result = -1e5, sum = 0.0;
        for(int fast = 0, slow = 0; fast < nums.size(); fast ++) {
            sum += nums[fast];
            if(fast - slow + 1 > k) {
                sum -= nums[slow];
                slow ++;
            }
            if(fast - slow + 1 == k) {
                result = max(result, 1.0 * sum / k);
            }
        }
        return result;
    }
};