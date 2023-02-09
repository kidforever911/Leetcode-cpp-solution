class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        int f[26][26] = {0};
        unordered_set<string> record;
        for(auto& s : ideas) record.insert(s);
        for(auto s : ideas) {
            int a = s[0] - 'a';
            for(int i = 0; i < 26; i ++) {
                s[0] = i + 'a';
                if(!record.count(s)) f[a][i] ++;
            }
        }
        long long result = 0;
        for(auto s : ideas) {
            int a = s[0] - 'a';
            for(int i = 0; i < 26; i ++) {
                s[0] = i + 'a';
                if(!record.count(s)) result += f[i][a];
            }
        }
        return result;
    }
};