class Solution {
public:
    int minSteps(int n) {
        int result = 0;
        for(int i = 2; i <= n / i; i ++) {
            while(n % i == 0) {
                result += i;
                n /= i;
            }
        }
        if(n > 1) result += n;
        return result;
    }
};