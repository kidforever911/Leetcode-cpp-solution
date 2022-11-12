class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minv = INT_MAX;
        for(int x : nums) minv = min(minv, x);
        int result = 0;
        for(int x : nums) result += x - minv;
        return result;
    }
};