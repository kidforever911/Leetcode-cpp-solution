class Solution {
public:
    string makeGood(string s) {
        stack<char> record;
        for(int i = 0; i < s.size(); i ++) {
            while(!record.empty() && (record.top() == s[i] + 32 || record.top() == s[i] - 32)) {
                record.pop();
                i ++;
            } 
            if(i < s.size()) record.push(s[i]);
        } 
        string result = "";
        while(record.size()) {
            result = record.top() + result;
            record.pop();
        }
        return result;
    }
};