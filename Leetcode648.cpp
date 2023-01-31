class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        typedef unsigned long long ULL;
        const int P = 131;
        unordered_set<ULL> record;

        for(auto& s : dictionary) {
            ULL h = 0;
            for(auto& c : s) h = h * P + c;
            record.insert(h);
        }

        stringstream ssin(sentence);
        string result, word;
        while(ssin >> word) {
            string s;
            ULL h = 0;
            for(auto& c : word) {
                s += c;
                h = h * P + c;
                if(record.count(h)) break;
            }
            result += s + ' ';
        }
        result.pop_back();
        return result;
    }
};