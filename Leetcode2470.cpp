class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int result = 0;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            int t = nums[i];
            for(int j = i; j < n; j ++) {
                t = t * nums[j] / gcd(t, nums[j]);
                if(t == k) result ++;
                else if(t > k) break;
            }
        }
        return result;
    }
    
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};