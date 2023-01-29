class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n);
        stack<int> record;
        int last = 0;
        for(auto& log : logs) {
            int x = log.find(':'), y = log.substr(x + 1).find(':') + x + 1;
            int id = stoi(log.substr(0, x)), ts = stoi(log.substr(y + 1));
            if(log.substr(x + 1, y - x - 1) == "start") {
                if(record.size()) result[record.top()] += ts - last;
                record.push(id);
                last = ts;
            } else {
                result[record.top()] += ts - last + 1;
                record.pop();
                last = ts + 1;
            }
        }
        return result;
    }
};