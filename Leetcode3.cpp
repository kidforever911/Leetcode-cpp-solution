class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> record;
        int n = s.size();
        int result = 0;
        for(int slow = 0, fast = 0; fast < n; fast ++) {
            char c = s[fast];
            record[c] ++;
            while(record[c] >= 2) {
                record[s[slow]] --;
                slow ++;
            }
            result = max(result, fast - slow + 1);
        }
        return result;
    }
};