class Solution {
public:
    int countOdds(int low, int high) {
        return count(high) - count(low - 1);
    }
    int count(int x) {
        if(x < 1) return 0;
        return (x + 1) / 2;
    }
};