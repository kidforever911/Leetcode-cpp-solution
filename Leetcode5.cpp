class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return s;
        string result;
        int n = s.size();
        for(int i = 0; i < n; i ++) {
            int left = i - 1, right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right]) left --, right ++;
            if(result.size() < right - left - 1) result = s.substr(left + 1, right - left - 1);
            left = i, right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right]) left --, right ++;
            if(result.size() < right - left - 1) result = s.substr(left + 1, right - left - 1);
        }
        return result;
    }
};