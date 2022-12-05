class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int result = 0, sum = 0;
        for(auto& x : machines) sum += x;
        if(sum % machines.size()) return -1;
        int n = machines.size();
        int left = 0, right = sum, avg = sum / n;
        for(int i = 0; i < n; i ++) {
            right -= machines[i];
            if(i) left += machines[i - 1];
            int l = max(0, i * avg - left);
            int r = max(0, (n - i - 1) * avg - right);
            result = max(result, r + l);
        }
        return result;
    }
};