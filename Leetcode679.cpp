class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> record(cards.begin(), cards.end());
        return dfs(record);
    }

    vector<double> get(vector<double>& nums, int i, int j, double x) {
        vector<double> result;
        for(int k = 0; k < nums.size(); k ++) {
            if(k != i && k != j) {
                result.push_back(nums[k]);
            }
        }
        result.push_back(x);
        return result;
    }

    bool dfs(vector<double> nums) {
        if(nums.size() == 1) return fabs(nums[0] - 24) < 1e-8;
        for(int i = 0; i < nums.size(); i ++) {
            for(int j = 0; j < nums.size(); j ++) {
                if(i != j) {
                    double a = nums[i], b = nums[j];
                    if(dfs(get(nums, i, j, a + b))) return true;
                    if(dfs(get(nums, i, j, a - b))) return true;
                    if(dfs(get(nums, i, j, a * b))) return true;
                    if(b && dfs(get(nums, i, j, a / b))) return true;
                }
            }
        }
        return false;
    }
};