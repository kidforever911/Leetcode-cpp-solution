class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> record;
        for(int i = n - 1; i >= 0; i --) {
            while(record.size() && temperatures[record.top()] <= temperatures[i]) record.pop();
            if(record.size()) result[i] = record.top() - i;
            record.push(i);
        }
        return result;
    }
};