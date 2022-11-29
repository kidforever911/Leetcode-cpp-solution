class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            for(int j = i + 1; j < n; j ++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> record;
        for(int i = 0; i < n; i ++) {
            if(record.count(target - nums[i])) {
                return {i, record[target - nums[i]]};
            }
            record[nums[i]] = i;
        }
        return {};
    }
};