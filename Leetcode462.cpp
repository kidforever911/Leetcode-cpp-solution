class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i ++) result += abs(nums[i] - nums[n / 2]);
        return result;
    }
};

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
        for(int i = 0; i < n; i ++) result += abs(nums[i] - nums[n / 2]);
        return result;
    }
};