class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        typedef long long LL;
        LL result = 0;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            if(nums[i] == 0) {
                int j = i;
                while(j < n && nums[j] == 0) j ++;
                result += (j - i) * (j - i + 1LL) / 2;
                i = j;
            }
        }
        return result;
    }
};
SELECT * FROM object WHERE bucket_id = “123” AND object_name LIKE `a/b/%`
