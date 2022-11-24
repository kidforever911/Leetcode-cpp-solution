class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        dfs(nums, 0);
        return result;
    }

    void dfs(vector<int>& nums, int start) {
        if(path.size() >= 2) result.push_back(path);
        if(start == nums.size()) return;

        unordered_set<int> record;
        for(int i = start; i < nums.size(); i ++) {
            if(path.empty() || path.back() <= nums[i]) {
                if(record.count(nums[i])) continue;
                record.insert(nums[i]);
                path.push_back(nums[i]);
                dfs(nums, i + 1);
                path.pop_back();
            }
        }
        return;
    }
};