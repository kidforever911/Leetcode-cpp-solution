class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        int length = 0;
        for(int x : nums) {
            if(x == 1) {
                length ++;
            } else {
                result = max(result, length);
                length = 0;
            }
        }
        return max(result, length);
    }
};

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            if(nums[i] == 0) continue;
            int j = i + 1;
            while(j < n && nums[j] == 1) j ++;
            result = max(result, j - i);
            i = j;
        }
        return result;
    }
};