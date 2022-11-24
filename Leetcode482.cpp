class Solution {
public:
    string licenseKeyFormatting(string S, int k) {
        string s;
        for(auto c : S) {
            if(c != '-') s += c;
        }
        string result;
        for(int i = 0; i < s.size() % k; i ++) result += toupper(s[i]);
        for(int i = s.size() % k; i < s.size(); ) {
            if(result.size()) result += '-';
            for(int j = 0; j < k; j ++) {
                result += toupper(s[i ++]);
            }
        }
        return result;
    }
};