class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        map<int, int> record;
        for(int i = 0; i < nums.size(); i ++) {
            record[nums[i]] ++;
        }
        return record[k];
    }
};

class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int count = 0;
        for(int x : nums) {
            if(x == k) {
                count ++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        if(!nums.size()) return 0;
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(nums[mid] >= k) right = mid;
            else left = mid + 1;
        }
        int indexLeft = left;
        left = 0, right = n - 1;
        while(left < right) {
            int mid = left + right + 1 >> 1;
            if(nums[mid] <= k) left = mid;
            else right = mid - 1;
        }
        int indexRight = right;
        if(nums[indexLeft] != k && nums[indexRight] != k) return 0;
        return indexRight - indexLeft + 1;
    }
};