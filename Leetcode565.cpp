class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        if(nums.empty()) return 0;
        int result = 0, n = nums.size();
        for(int i = 0; i < n; i ++) {
            if(nums[i] != -1) {
                int j = i, s = 0;
                while(nums[j] != -1) {
                    s ++;
                    int next = nums[j];
                    nums[j] = -1;
                    j = next;
                }
                result = max(result, s);
            }
        }
        return result;
    }
};