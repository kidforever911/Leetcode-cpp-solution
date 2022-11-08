class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        multiplyOperation(nums);
        shiftOperation(nums);
        return nums;
    }
    
    void multiplyOperation(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] == nums[i - 1]) {
                nums[i] = 0;
                nums[i - 1] *= 2;
            }
        }
    }
    
    void shiftOperation(vector<int>& nums) {
        int i = 0, j = 0;
        for(; i < nums.size(); i ++) {
            if(nums[i]) {
                nums[j ++] = nums[i];
            }
        }
        while(j < nums.size()) {
            nums[j ++] = 0;
        }
    }
};