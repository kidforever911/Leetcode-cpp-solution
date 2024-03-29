class Solution {
public:
    bool check(string s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j]) return false;
            i ++, j --;
        }
        return true;
    }

    bool validPalindrome(string s) {
        for(int i = 0, j = s.size() - 1; i < j; i ++, j --) {
            if(s[i] != s[j]) {
                if(check(s, i + 1, j) || check(s, i, j - 1)) return true;
                return false;
            }
        }
        return true;
    }
};