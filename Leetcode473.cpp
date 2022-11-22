class Solution {
public:
    vector<int> nums;
    vector<bool> st;

    bool dfs(int start, int cur, int length, int count) {
        if(count == 3) return true;
        if(cur == length) return dfs(0, 0, length, count + 1);
        for(int i = start; i < nums.size(); i ++) {
            if(!st[i]) {
                if(cur + nums[i] <= length) {
                    st[i] = true;
                    if(dfs(i + 1, cur + nums[i], length, count)) return true;
                    st[i] = false;
                }
                if(!cur || cur + nums[i] == length) return false;
                while(i + 1 < nums.size() && nums[i] == nums[i + 1]) i ++;
            }
        }
        return false;
    }

    bool makesquare(vector<int>& _nums) {
        nums = _nums;
        if(nums.empty()) return false;
        st.resize(nums.size());
        int sum = 0;
        for(auto& x : nums) sum += x;
        if(sum % 4) return false;
        sum /= 4;
        sort(nums.begin(), nums.end(), greater<int>());
        return dfs(0, 0, sum, 0);
    }
};