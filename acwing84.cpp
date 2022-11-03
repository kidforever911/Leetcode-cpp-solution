class Solution {
public:
    int getSum(int n) {
        int result = n;
        n > 0 && (result += getSum(n - 1));
        return result;
    }
};