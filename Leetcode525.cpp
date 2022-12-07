class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> record;
        record[0] = 0;
        int result = 0;
        for(int i = 1, one = 0, zero = 0; i <= n; i ++) {
            int x = nums[i - 1];
            if(x == 0) zero ++;
            else one ++;
            int s = one - zero;
            if(record.count(s)) result = max(result, i - record[s]);
            else record[s] = i;
        }
        return result;
    }
};