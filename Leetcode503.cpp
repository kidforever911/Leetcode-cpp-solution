class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        vector<int> result(n);
        stack<int> record;
        for(int i = 2 * n - 1; i >= 0; i --) {
            while(record.size() && record.top() <= nums[i]) record.pop();
            if(i < n) {
                if(record.empty()) result[i] = -1;
                else result[i] = record.top();
            }
            record.push(nums[i]);
        }
        return result;
    }
};