class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        nums.push_back(nums.back() + 1);
        int left = 0, right = nums.size() / 2 - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(nums[mid * 2] != nums[mid * 2 + 1]) right = mid;
            else left = mid + 1;
        }
        return nums[right * 2];
    }
};