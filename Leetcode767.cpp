class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> record;
        int maxc = 0;
        for(auto c: s) {
            record[c] ++;
            maxc = max(maxc, record[c]);
        }
        int n = s.size();
        if(maxc > (n + 1) / 2) return "";
        string result(n, ' ');
        int i = 1, j = 0;
        for(char c = 'a'; c <= 'z'; c ++) {
            if(record[c] <= n / 2) {
                while(record[c] && i < n) {
                    result[i] = c;
                    record[c] --;
                    i += 2;
                }
            }
            while(record[c] && j < n) {
                result[j] = c;
                record[c] --;
                j += 2;
            }
        }
        return result;
    }
};