class Solution {
public:
    string replaceSpaces(string &str) {
        for(int i = 0; i < str.size(); i ++) {
            if(str[i] == ' ') {
                str.erase(str.begin() + i);
                str.insert(i, "%20");
            }
        }
        return str;
    }
};