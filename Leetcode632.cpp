class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        typedef vector<int> VI;
        VI result;
        priority_queue<VI, vector<VI>, greater<VI>> record;
        int maxv = INT_MIN;

        for(int i = 0; i < nums.size(); i ++) {
            record.push({nums[i][0], i, 0});
            maxv = max(maxv, nums[i][0]);
        }

        while(record.size()) {
            auto temp = record.top();
            record.pop();
            int left = temp[0], right = maxv;
            if(result.empty() || result[1] - result[0] > right - left) {
                result = {left, right};
            }
            int i = temp[1], j = temp[2] + 1;
            if(j < nums[i].size()) {
                record.push({nums[i][j], i, j});
                maxv = max(maxv, nums[i][j]);
            } else {
                break;
            }
        }
        return result;
    }
};