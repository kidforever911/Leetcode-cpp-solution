//时间复杂度：nlogn
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1) return 0;
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left < n && arr[left] == nums[left]) left ++;
        while(right >= left && arr[right] == nums[right]) right --;
        return right - left + 1;
    }
};

//时间复杂度：n
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size(), left = 0, right = n - 1;
        while(left + 1 < n && nums[left + 1] >= nums[left]) left ++;
        if(left == right) return 0;
        while(right - 1 >= 0 && nums[right - 1] <= nums[right]) right --;
        for(int i = left + 1; i < n; i ++) {
            while(left >= 0 && nums[left] > nums[i]) left --;
        }
        for(int i = right - 1; i >= 0; i --) {
            while(right < n && nums[right] < nums[i]) right ++;
        }
        return right - left - 1;
    }
};