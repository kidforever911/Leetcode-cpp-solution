class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n) return 1;
        int cnt = 0;
        for(int x = n; x; x >>= 1) cnt ++;
        return ~n & ((1ll << cnt) - 1);
    }
};