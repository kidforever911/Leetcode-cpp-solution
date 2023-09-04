class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> s(n + 1);
        for(int i = 1; i <= n; i ++) {
            s[i] = s[i - 1];
            if(customers[i - 1] == 'Y') s[i] ++;
        }
        int result = n + 1, cost = n - s[n];
        for(int i = n; i; i --) {
            int c = i - 1 - s[i - 1] + s[n] - s[i - 1];
            if(c <= cost) result = i, cost = c;
        }
        return result - 1;
    }
};