class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(int x : nums) {
            x = abs(x);
            if(nums[x - 1] > 0) {
                nums[x - 1] *= -1;
            }
        }
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};