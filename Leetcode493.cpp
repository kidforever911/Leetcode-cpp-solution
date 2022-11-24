class Solution {
public:
    vector<int> w;

    int reversePairs(vector<int>& nums) {
        return merge_sort(nums, 0, nums.size() - 1);
    }

    int merge_sort(vector<int>& nums, int left, int right) {
        if(left >= right) return 0;
        int mid = left + right >> 1;
        int result = merge_sort(nums, left, mid) + merge_sort(nums, mid + 1, right);
        for(int i = left, j = mid + 1; i <= mid; i ++) {
            while(j <= right && nums[j] * 2ll < nums[i]) j ++;
            result += j - (mid + 1);
        }
        w.clear();
        int i = left, j = mid + 1;
        while(i <= mid && j <= right) {
            if(nums[i] <= nums[j]) w.push_back(nums[i ++]);
            else w.push_back(nums[j ++]);
        }
        while(i <= mid) w.push_back(nums[i ++]);
        while(j <= right) w.push_back(nums[j ++]);
        for(int i = left, j = 0; j < w.size(); i ++, j ++) nums[i] = w[j];
        return result;
    }
};