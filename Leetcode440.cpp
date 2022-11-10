class Solution {
public:
    int findKthNumber(int n, int k) {
        int prefix = 1;
        while(k > 1) {
            int count = f(prefix, n);
            if(k > count) {
                k -= count;
                prefix ++;
            } else {
                k --;
                prefix *= 10;
            }
        }
        return prefix;
    }
    
    int f(int prefix, int n) {
        long long p = 1;
        string A = to_string(n), B = to_string(prefix);
        int dt = A.size() - B.size();
        int result = 0;
        for(int i = 0; i < dt; i ++) {
            result += p;
            p *= 10;
        }
        A = A.substr(0, B.size());
        if(A == B) result += n - prefix * p + 1;
        else if(A > B) result += p;
        return result;
    }
};