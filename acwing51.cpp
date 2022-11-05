class Solution {
public:
    vector<int> record;
    vector<bool> isVisited;
    vector<vector<int>> result;

    vector<vector<int>> permutation(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        isVisited = vector<bool>(n, false);
        dfs(nums, 0);
        return result;
    }
    
    void dfs(vector<int>& nums, int index) {
        if(index == nums.size()) {
            result.push_back(record);
            return;
        }
        
        for(int i = 0; i < nums.size(); i ++) {
            if(!isVisited[i]) {
                if(i > 0 && nums[i] == nums[i - 1] && !isVisited[i - 1]) continue;
                isVisited[i] = true;
                record.push_back(nums[i]);
                dfs(nums, index + 1);
                isVisited[i] = false;
                record.pop_back();
            }
        }
        return;
    }
};

class Solution {
public:
    vector<vector<int>> permutation(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do{
            result.push_back(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};