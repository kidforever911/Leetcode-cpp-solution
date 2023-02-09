class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.empty()) return 0;
        int result = 0;
        int maxPosition = 0;
        int end = 0;
        for(int i = 0; i < nums.size() - 1; i ++) {
            maxPosition = max(maxPosition, i + nums[i]);
            if(i == end) {
                end = maxPosition;
                result ++;
            }
        }
        return result;
    }
};