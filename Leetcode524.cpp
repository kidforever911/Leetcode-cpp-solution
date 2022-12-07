class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string result;
        for(auto& temp : dictionary) {
            if(check(temp, s)) {
                if(result.empty() || result.size() < temp.size() || result.size() == temp.size() && result > temp) {
                    result = temp;
                }
            }
        }
        return result;
    }

    bool check(string& a, string& b) {
        int i = 0, j = 0;
        for( ;i < a.size() && j < b.size(); ) {
            if(a[i] == b[j]) i ++;
            j ++;
        }
        return i == a.size();
    }
};