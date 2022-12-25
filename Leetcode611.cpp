class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;
        for(int i = 0; i < nums.size(); i ++) {
            for(int j = i - 1, k = 0; j > 0 && j > k; j --) {
                while(k < j && nums[k] <= nums[i] - nums[j]) k ++;
                result += j - k;
            }
        }
        return result;
    }
};