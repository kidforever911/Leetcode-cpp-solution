class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size(), m = queries.size();
        vector<int> result(m);
        sort(nums.begin(), nums.end());
        vector<int> preSum(n + 1, 0);
        for(int i = 1; i <= n; i ++) {
            preSum[i] = preSum[i - 1] + nums[i - 1];
        }
        for(int i = 0; i < m; i ++) {
            int left = 0, right = n;
            while(left < right) {
                int mid = left + right + 1 >> 1;
                if(preSum[mid] <= queries[i]) left = mid;
                else right = mid - 1;
            }
            result[i] = right;
        }
        return result;
    }
};