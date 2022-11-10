class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(auto x : nums) {
            int p = abs(x) - 1;
            nums[p] *= -1;
            if(nums[p] > 0) result.push_back(abs(x));
        } 
        return result;
    }
};