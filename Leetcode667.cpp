class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> result;
        result.push_back(1);
        for(int i = 0; i < k; i ++) {
            if(i % 2 == 0) {
                result.push_back(k + 1 - i / 2);
            } else {
                result.push_back(2 + i / 2);
            }
        }
        for(int i = k + 2; i <= n; i ++) {
            result.push_back(i);
        }
        return result;
    }
};

class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> result(n);
        for(int index = 0, i = 1, j = k + 1; index < k + 1; ) {
            result[index ++] = i ++;
            if(index < k + 1) result[index ++] = j --;
        }
        for(int i = k + 1; i < n; i ++) result[i] = i + 1;
        return result;
    }
};

class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> result(n);
        for(int i = 0; i < n - k - 1; i ++) result[i] = i + 1;
        int u = n - k - 1;
        int i = n - k, j = n;
        while(u < n) {
            result[u ++] = i ++;
            if(u < n) result[u ++] = j --;
        }
        return result;
    }
};