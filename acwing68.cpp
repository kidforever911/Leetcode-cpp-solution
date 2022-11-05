class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(int temp : nums) {
            if(x != temp) return x;
            x ++;
        }
        return x;
    }
};

class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(nums[mid] != mid) right = mid;
            else left = mid + 1;
        }
        if(nums[right] == right) right ++;
        return right;
    }
};