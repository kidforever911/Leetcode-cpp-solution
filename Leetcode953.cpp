class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> record;
        for(int i = 0; i < order.size(); i ++) record[order[i]] = i;
        for(int i = 0; i < words.size() - 1; i ++) {
            string a = words[i], b = words[i + 1];
            int x = 0, y = 0;
            while(x < a.size() && y < b.size()) {
                if(record[a[x]] > record[b[y]]) return false;
                if(record[a[x]] < record[b[y]]) break;
                x ++, y ++;
            }
            if(x < a.size() && y == b.size()) return false;
        }
        return true;
    }
};