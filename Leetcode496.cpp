class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int, int> record;
        vector<int> result;
        for(int i = nums2.size() - 1; i >= 0; i --) {
            int x = nums2[i];
            while(stk.size() && stk.top() <= x) stk.pop();
            if(stk.empty()) record[x] = -1;
            else record[x] = stk.top();
            stk.push(x);
        }
        for(int x : nums1) {
            result.push_back(record[x]);
        }
        return result;
    }
};