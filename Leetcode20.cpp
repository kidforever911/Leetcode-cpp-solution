class Solution {
public:
    bool isValid(string s) {
        stack<char> record;
        for(int i = 0; i < s.size(); i ++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') record.push(s[i]);
            else if(!record.empty() && abs(record.top() - s[i]) <= 2) record.pop();
            else return false;
        }
        return record.empty();
    }
};