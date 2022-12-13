class Solution {
public:
    int climbStairs(int n) {
        long a = 1, b = 1;
        while(n --) {
            long c = a + b;
            a = b;
            b = c;
        }
        return a;
    }
};