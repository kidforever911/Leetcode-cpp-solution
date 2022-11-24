class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        if(words.empty()) return result;
        string line[3] = {
                "qwertyuiop",
                "asdfghjkl",
                "zxcvbnm"
        };
        unordered_map<char, int> record;
        for(int i = 0; i < 3; i ++) {
            for(auto& c : line[i]) {
                record[c] = i;
            }
        }
        for(auto& word : words) {
            unordered_set<int> set;
            for(auto& c : word) {
                set.insert(record[tolower(c)]);
                if(set.size() > 1) break;
            }
            if(set.size() == 1) result.push_back(word);
        }
        return result;
    }
};