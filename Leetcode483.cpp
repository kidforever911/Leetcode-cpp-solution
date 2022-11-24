class Solution {
public:
    string smallestGoodBase(string N) {
        typedef long long LL;
        LL n = stoll(N);
        for(int t = 1 + log2(n); t >= 3; t --) {
            LL k = pow(n, 1.0 / (t - 1));
            LL total = 0;
            for(int j = 0; j < t; j ++) {
                total = total * k + 1;
                if(total > n) break;
            }
            if(total == n) return to_string(k);
        }
        return to_string(n - 1);
    }
};