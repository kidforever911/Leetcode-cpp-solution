class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> count1, count2;
        for(auto& x : nums) count1[x] ++;
        for(auto& x : nums) {
            if(!count1[x]) continue;
            if(count2[x - 1]) {
                count2[x - 1] --;
                count2[x] ++;
                count1[x] --;
            } else if(count1[x + 1] && count1[x + 2]) {
                count2[x + 2] ++;
                count1[x] --, count1[x + 1] --, count1[x + 2] --;
            } else return false;
        }
        return true;
    }
};