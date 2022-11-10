class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> record;
        for(auto c : s) record[c] ++;
        sort(s.begin(), s.end(), [&](char a, char b) {
            if(record[a] != record[b]) return record[a] > record[b];
            else return a < b;
        });
        return s;
    }
};