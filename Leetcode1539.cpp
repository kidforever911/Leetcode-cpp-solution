class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int result = 1, index = 0;
        for(auto& x : arr) {
            while(k && result < x) result ++, k --;
            if(!k) return result - 1;
            result ++;
        }
        while(k) result ++, k --;
        return result - 1;
    }
};