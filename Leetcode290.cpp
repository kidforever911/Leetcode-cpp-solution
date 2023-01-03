class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pw;
        unordered_map<string, char> wp;
        stringstream ssin(s);
        string word;
        vector<string> words;
        while(ssin >> word) words.push_back(word);
        if(words.size() != pattern.size()) return false;
        for(int i = 0; i < pattern.size(); i ++) {
            if(pw.count(pattern[i]) && pw[pattern[i]] != words[i]) return false;
            pw[pattern[i]] = words[i];
            if(wp.count(words[i]) && wp[words[i]] != pattern[i]) return false;
            wp[words[i]] = pattern[i];
        }
        return true;
    }
};