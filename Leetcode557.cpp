class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        int n = s.size();
        for(int i = 0; i < n; i ++) {
            if(s[i] == ' ') continue;
            int j = i;
            while(j < n && s[j] != ' ') j ++;
            reverse(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
        return s;
    }
};