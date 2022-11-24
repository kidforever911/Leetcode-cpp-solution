class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int result = 0;
        const int MOD = 1e9 + 7;
        vector<int> f(high + 1);
        f[0] = 1;
        for(int i = 1; i <= high; i ++) {
            if(i >= one) f[i] = f[i - one];
            if(i >= zero) f[i] = (f[i] + f[i - zero]) % MOD;
            if(i >= low) result = (result + f[i]) % MOD;
        }
        return result;
    }
};