class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.length();
        int mask = 0, maxLength = 0;
        unordered_map<int, int> record;
        record[0] = -1;
        for(int i = 0; i < s.length(); i ++) {
            if (s[i] == 'a') mask ^= (1 << 0);
            else if (s[i] == 'e') mask ^= (1 << 1);
            else if (s[i] == 'i') mask ^= (1 << 2);
            else if (s[i] == 'o') mask ^= (1 << 3);
            else if (s[i] == 'u') mask ^= (1 << 4);
            if(record.find(mask) != record.end()) {
                maxLength = max(maxLength, i - record[mask]);
            } else {
                record[mask] = i;
            }
        }
        return maxLength;
    }
};