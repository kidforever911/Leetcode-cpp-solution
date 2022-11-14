class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<int> record;
        sort(nums.begin(), nums.end());
        for(int i = 0, j = nums.size() - 1; i < j; i ++, j --) {
            record.insert(nums[i] + nums[j]);
        }
        return record.size();
    }
};