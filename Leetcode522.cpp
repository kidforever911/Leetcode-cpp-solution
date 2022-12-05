class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        int result = -1;
        if(strs.empty()) return result;
        int n = strs.size();
        for(int i = 0; i < n; i ++) {
            bool is_sub = false;
            for(int j = 0; j < n; j ++) {
                if(i != j && check(strs[i], strs[j])) {
                    is_sub = true;
                    break;
                }
            }
            if(!is_sub) result = max(result, (int)(strs[i].size()));
        }
        return result;
    }

    bool check(string& a, string& b) {
        int index = 0;
        for(auto& c : b) {
            if(c == a[index]) {
                index ++;
            }
        }
        return index == a.size();
    }
};