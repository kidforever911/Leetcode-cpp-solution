class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i = 0; i * i <= c; i ++) {
            int j = c - i * i;
            int r = sqrt(j);
            if(r * r == j) return true;
        }
        return false;
    }
};