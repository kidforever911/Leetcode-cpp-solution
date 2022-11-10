class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        unordered_map<char, int> record;
        for(auto c : p) record[c] ++;
        int total = record.size();
        for(int i = 0, j = 0, satisfy = 0; i < s.size(); i ++) {
            if(-- record[s[i]] == 0) satisfy ++;
            while(i - j + 1 > p.size()) {
                if(record[s[j]] == 0) satisfy --;
                record[s[j ++]] ++;
            }
            if(satisfy == total) result.push_back(j);
        }
        return result;
    }
};