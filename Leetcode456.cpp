class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int two = INT_MIN;
        stack<int> record;
        for(int i = nums.size() - 1; i >= 0; i --) {
            if(nums[i] < two) return true;
            while(record.size() && nums[i] > record.top()) {
                two = record.top();
                record.pop();
            }
            record.push(nums[i]);
        }
        return false;
    }
};