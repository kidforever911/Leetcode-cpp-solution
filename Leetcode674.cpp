class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i ++) {
            int j = i + 1;
            while(j < nums.size() && nums[j] > nums[j - 1]) j ++;
            result = max(result, j - i);
            i = j - 1;
        }
        return result;
    }
};