class Solution {
public:
    typedef long long LL;
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.empty()) return 0;
        LL left = 0, right = 0;
        for(auto& x : nums) right += x;
        int result = INT_MAX, ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            left += nums[i];
            right -= nums[i];
            int temp = abs((left / (i + 1)) - (i < n - 1 ? (right / (n - i - 1)) : 0));
            if(result > temp) {
                result = temp;
                ans = i;
            }
        }
        return ans;
    }
};