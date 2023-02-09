class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> record;
        int result = 0;
        for(int slow = 0, fast = 0; fast < fruits.size(); fast ++) {
            record[fruits[fast]] ++;
            while(record.size() > 2) {
                record[fruits[slow]] --;
                if(record[fruits[slow]] == 0) record.erase(fruits[slow]);
                slow ++;
            }
            result = max(result, fast - slow + 1);
        }
        return result;
    }
};