class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int index = 0;
        while(index < word1.size() || index < word2.size()) {
            if(index < word1.size()) result += word1[index];
            if(index < word2.size()) result += word2[index];
            index ++;
        }
        return result;
    }
};