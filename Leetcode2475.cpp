class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int, int> record;
        for(auto& x : nums) record[x] ++;
        int left = 0, right = nums.size(), result = 0;
        for(auto& [k, v] : record) {
            right -= v;
            result += left * v * right;
            left += v;
        }
        return result;
    }
};

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i = 0; i < n; i ++) {
            for(int j = i + 1; j < n; j ++) {
                for(int k = j + 1; k < n; k ++) {
                    if(nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]) result ++;
                }
            }
        }
        return result;
    }
};
