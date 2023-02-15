class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int left = 1, right = m * n;
        while(left < right) {
            int mid = left + right >> 1;
            if(get(m, n, mid) >= k) right = mid;
            else left = mid + 1;
        }
        return right;
    }

    int get(int n, int m, int mid) {
        int result = 0;
        for(int i = 1; i <= n; i ++) {
            result += min(m, mid / i);
        }
        return result;
    }
};