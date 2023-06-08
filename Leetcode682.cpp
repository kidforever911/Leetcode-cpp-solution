class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for(auto& s : operations) {
            int p = record.size() - 1;
            if(s == "+") record.push_back(record[p - 1] + record[p]);
            else if(s == "D") record.push_back(record[p] * 2);
            else if(s == "C") record.pop_back();
            else record.push_back(stoi(s));
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};