class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int result = INT_MAX;
        vector<int> record;
        for(auto& t : timePoints) {
            int h, m;
            sscanf(t.c_str(), "%d:%d", &h, &m);
            record.push_back(h * 60 + m);
        }
        sort(record.begin(), record.end());
        for(int i = 1; i < record.size(); i ++) result = min(result, record[i] - record[i - 1]);
        result = min(result, 24 * 60 - record.back() + record[0]);
        return result;
    }
};