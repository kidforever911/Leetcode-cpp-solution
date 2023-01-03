class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        if(piles.empty()) return 0;
        priority_queue<int> record;
        for(auto& x : piles) {
            record.push(x);
        }

        while(k --) {
            int cur = record.top();
            record.pop();
            cur = (cur + 1) / 2;
            record.push(cur);
        }
        int result = 0;
        while(record.size()) {
            result += record.top();
            record.pop();
        }
        return result;
    }
};