class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> record;
        for(int i = 0; i < n; i ++) {
            while(record.size() && arr[record.top()] > arr[i]) record.pop();
            if(record.empty()) left[i] = -1;
            else left[i] = record.top();
            record.push(i);
        }
        record = stack<int>();
        for(int i = n - 1; i >= 0; i --) {
            while(record.size() && arr[record.top()] >= arr[i]) record.pop();
            if(record.empty()) right[i] = n;
            else right[i] = record.top();
            record.push(i);
        }
        typedef long long LL;
        const int MOD = 1e9 + 7;
        int result = 0;
        for(int i = 0; i < n; i ++) {
            result = (result + (LL)arr[i] * (i - left[i]) * (right[i] - i)) % MOD;
        }
        return result;
    }
};