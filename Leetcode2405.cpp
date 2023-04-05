class Solution {
public:
    int partitionString(string s) {
        int result = 0;
        unordered_set<char> record;
        for(int i = 0; i < s.size(); i ++) {
            int j = i;
            while(j < s.size() && !record.count(s[j])) {
                record.insert(s[j]);
                j ++;
            }
            record.clear();
            result ++;
            i = j - 1;
        }
        return result;
    }
};

class Solution {
public:
    int partitionString(string s) {
        int result = 0;
        vector<int> record(26, 0);
        for(int i = 0; i < s.size(); i ++) {
            int idx = s[i] - 'a';
            record[idx] ++;
            if(record[idx] >= 2) {
                i -= 1;
                result ++;
                record = vector<int>(26, 0);
            }
        }
        return result + 1;
    }
};