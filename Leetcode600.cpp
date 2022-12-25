class Solution {
public:
    int findIntegers(int n) {
        vector<int> num;
        while(n) num.push_back(n % 2), n /= 2;
        vector<vector<int>> f(num.size() + 1, vector<int>(2));
        f[1][0] = f[1][1] = 1;
        for(int i = 2; i <= num.size(); i ++) {
            f[i][0] = f[i - 1][0] + f[i - 1][1];
            f[i][1] = f[i - 1][0];
        }

        int result = 0;
        for(int i = num.size(), last = 0; i; i --) {
            if(num[i - 1]) {
                result += f[i][0];
                if(last) return result;
            }
            last = num[i - 1];
        }
        return result + 1;
    }
};