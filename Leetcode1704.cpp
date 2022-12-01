class Solution {
public:
    bool halvesAreAlike(string s) {
        int count_a = 0, count_b = 0;
        int n = s.size();
        for(int i = 0, j = n / 2; i < n / 2 && j < n; i ++, j ++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                count_a ++;
            }
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
               s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') {
                count_b ++;
            }
        }
        return count_a == count_b;
    }
};