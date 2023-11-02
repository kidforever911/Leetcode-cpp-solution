class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        const int n = nums.size();
        
        auto it = unique(nums.begin(), nums.end());
        const int m = distance(nums.begin(), it);
        nums.resize(m);
        int ans = INT_MAX;
        for(int i = 0, j = 0; i < m; i ++) {
            while(j < m && nums[j] < nums[i] + n)
                j ++;
            if(ans > n - (j - i)) {
                ans = n - (j - i);
            }
        }
        return ans;
    }
};