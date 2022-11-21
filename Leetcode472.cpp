class Solution {
public:
    unordered_set<string> record;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        for(auto& word : words) record.insert(word);
        vector<string> result;
        for(auto& word : words) {
            if(check(word)) {
                result.push_back(word);
            }
        }
        return result;
    }

    bool check(string& word) {
        int n = word.size();
        vector<int> f(n + 1, INT_MIN);
        f[0] = 0;
        for(int i = 0; i <= n; i ++) {
            if(f[i] < 0) continue;
            for(int j = n - i; j; j --) {
                if(record.count(word.substr(i, j))) {
                    f[i + j] = max(f[i + j], f[i] + 1);
                    if(f[n] > 1) return true;
                }
            }
        }
        return false;
    }
};