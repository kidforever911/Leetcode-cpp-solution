class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        stack<char> record;
        for(int i = 0; i < s.size(); i ++) {
            while(i < s.size() && !record.empty() && s[i] == record.top()) {
                record.pop();
                i ++;
            }
            if(i < s.size()) record.push(s[i]);
        }
        while(!record.empty()) {
            result = record.top() + result;
            record.pop();
        }
        return result;
    }
};