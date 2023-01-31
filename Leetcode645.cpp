class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2);
        for(auto x : nums) {
            int k = abs(x);
            if(nums[k - 1] < 0) {
                result[0] = k;
            }
            nums[k - 1] *= -1;
        }

        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] > 0 && i + 1 != result[0]) {
                result[1] = i + 1;
            }
        }
        return result;
    }
};