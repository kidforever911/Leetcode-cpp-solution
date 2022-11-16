class Solution {
public:
    int findSubstringInWraproundString(string p) {
        int result = 0;
        unordered_map<char, int> record;
        int n = p.size();
        for(int i = 0; i < n; ) {
            int j = i + 1;
            while(j < n && (p[j] - p[j - 1] == 1 || p[j - 1] == 'z' && p[j] == 'a')) j ++;
            while(i < j) {
                record[p[i]] = max(record[p[i]], j - i);
                i ++;
            }
        }
        for(auto& [k, v] : record) {
            result += v;
        }
        return result;
    }
};