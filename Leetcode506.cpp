class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> record;
        int n = score.size();
        vector<string> result(n);
        for(int i = 0; i < n; i ++) {
            record.push_back({score[i], i});
        }
        sort(record.begin(), record.end(), greater<pair<int, int>>());
        for(int i = 0; i < n; i ++) {
            int index = record[i].second;
            if(i == 0) result[index] = "Gold Medal";
            else if(i == 1) result[index] = "Silver Medal";
            else if(i == 2) result[index] = "Bronze Medal";
            else result[index] = to_string(i + 1);
        }
        return result;
    }
};