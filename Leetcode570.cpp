class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.empty()) return false;
        int s = 0;
        for(auto& c : word) s += check(c);
        return s == word.size() || !s || s == 1 && check(word[0]);
    }　

    bool check(char& c) {
        if(c >= 'A' && c <= 'Z') return true;
        return false;
    }
};