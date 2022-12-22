class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> record;
        for(int i = 0; i < list2.size(); i ++) {
            record[list2[i]] = i;
        }
        vector<string> result;
        int index = INT_MAX;
        for(int i = 0; i < list1.size(); i ++) {
            if(record.count(list1[i])) {
                if(index > i + record[list1[i]]) {
                    result.clear();
                    index = i + record[list1[i]];
                    result.push_back(list1[i]);
                } else if(index == i + record[list1[i]]) {
                    result.push_back(list1[i]);
                }
            }
        }
        return result;
    }
};