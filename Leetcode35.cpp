class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target > nums[n - 1]) return n;
        int left = 0, right = n - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(nums[mid] >= target) right = mid;
            else left = mid + 1;
        }
        return right;
    }
};