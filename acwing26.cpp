class Solution {
public:
    int NumberOf1(int n) {
        int count = 0;
        for(int i = 0; i < 32; i ++) {
            if(n >> i & 1) {
                count ++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int NumberOf1(int n) {
        unsigned int x = n;
        int count = 0;
        while(x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }
};

class Solution {
public:
    int low_bit(int x) {
        return x & (-x);
    }
    int NumberOf1(int n) {
        int result = 0;
        while(n) {
            n -= low_bit(n);
            result ++;
        }
        return result;
    }
};