class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);
        for(int i = 0, j = 0; i < n; i ++) {
            result[j ++] = nums[i];
            result[j ++] = nums[i + n];
        }
        return result;
    }
};