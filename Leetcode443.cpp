class Solution {
public:
    int compress(vector<char>& s) {
        int k = 0;
        for(int i = 0; i < s.size(); i ++) {
            int j = i + 1;
            while(j < s.size() && s[j] == s[i]) j ++;
            int len = j - i;
            s[k ++] = s[i];
            if(len > 1) {
                int t = k;
                while(len) {
                    s[t ++] = '0' + len % 10;
                    len /= 10;
                }
                reverse(s.begin() + k, s.begin() + t);
                k = t;
            }
            i = j - 1;
        }
        return k;
    }
};