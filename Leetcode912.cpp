class Solution {
public:
    void quick_sort(vector<int>& nums, int left, int right) {
        if(left >= right) return;
        int i = left - 1, j = right + 1, x = nums[left + right >> 1];
        while(i < j) {
            do i ++; while(nums[i] < x);
            do j --; while(nums[j] > x);
            if(i < j) swap(nums[i], nums[j]);
        }
        quick_sort(nums, left, j);
        quick_sort(nums, j + 1, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        quick_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};