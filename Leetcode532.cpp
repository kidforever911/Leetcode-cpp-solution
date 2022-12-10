//时间复杂度O(nlogn)
//空间复杂度O(1)
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;
        for(int slow = 0, fast = 0; fast < n; fast ++) {
            while(fast + 1 < n && nums[fast + 1] == nums[fast]) fast ++;
            while(slow < fast && nums[fast] - nums[slow] > k) slow ++;
            if(fast != slow && nums[fast] - nums[slow] == k) result ++;
        }
        return result;
    }
};
//时间复杂度O(n)
//空间复杂度O(n)
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int result = 0;
        unordered_map<int, int> record;
        for(auto& x : nums) record[x] ++;
        for(auto& [i, v] : record) {
            if(k == 0) {
                if(v > 1) result ++;
            } else {
                if(record.find(i + k) != record.end()) result ++;
            }
        }
        return result;
    }
};