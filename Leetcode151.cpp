class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        int k = 0;
        for(int i = 0; i < s.size(); i ++) {
            int j = i;
            while(j < s.size() && s[j] == ' ') j ++;
            if(j == s.size()) break;
            i = j;
            while(j < s.size() && s[j] != ' ') j ++;
            reverse(s.begin() + i, s.begin() + j);
            if(k) s[k ++] = ' ';
            while(i < j) s[k ++] = s[i ++];
        }
        s.erase(s.begin() + k, s.end());
        reverse(s.begin(), s.end());
        return s;
    }
};

