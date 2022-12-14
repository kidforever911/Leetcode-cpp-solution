class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long sum = 0;
        for(int i = 1; i <= num / i; i ++) {
            if(num % i == 0) {
                if(i < num) sum += i;
                if(i != num / i && num / i < num) sum += num / i;
            }
        }
        return sum == num;
    }
};