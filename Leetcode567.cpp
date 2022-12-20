class Solution {
public:
    unordered_map<char, int> record1, record2;

    bool checkInclusion(string s1, string s2) {
        for(auto& c : s1) record1[c] ++;

        for(int i = 0, j = 0, count = 0; i < s2.size(); i ++) {
            if(check(s2[i])) count --;
            record2[s2[i]] ++;
            if(check(s2[i])) count ++;
            if(i - j >= s1.size()) {
                if(check(s2[j])) count --;
                record2[s2[j]] --;
                if(check(s2[j])) count ++;
                j ++;
            }
            if(count == record1.size()) return true;
        }
        return false;
    }

    bool check(char c) {
        if(record1.count(c) && record1[c] == record2[c]) {
            return true;
        }
        return false;
    }
};