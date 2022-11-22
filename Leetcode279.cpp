class Solution {
public:
    bool check(int x) {
        int r = sqrt(x);
        return r * r == x;
    }

    int numSquares(int n) {
        if(check(n)) return 1;
        for(int i = 1; i < n / i; i ++) {
            if(check(n - i * i)) return 2;
        }
        while(n % 4 == 0) n /= 4;
        if(n % 8 != 7) return 3;
        return 4;
    }
};