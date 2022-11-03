class Solution {
public:
    string leftRotateString(string str, int n) {
        string result;
        int len = str.size();
        for(int i = 0; i < len; i ++) {
            result += str[(i + n) % len];
        }
        return result;
    }
};