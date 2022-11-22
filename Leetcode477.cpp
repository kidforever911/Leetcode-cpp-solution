class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < 31; i ++) {
            int x = 0, y = 0;
            for(auto& temp : nums) {
                if(temp >> i & 1) y ++;
                else x ++;
            }
            result += x * y;
        }
        return result;
    }
};