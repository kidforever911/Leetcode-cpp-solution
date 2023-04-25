class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> record;
        for(auto& x : stones) {
            record.push(x);
        }
        while(record.size() > 1) {
            int x = record.top();
            record.pop();
            int y = record.top();
            record.pop();
            record.push(x - y);
        }
        return record.top();
    }
};