class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        if(candyType.empty()) return 0;
        unordered_set<int> record;
        int n = candyType.size();
        for(auto& x : candyType) record.insert(x);
        return min((int)record.size(), n / 2);
    }
};