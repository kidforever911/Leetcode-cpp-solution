class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        for(int i = num.size() - 1, t = 0; i >= 0 || t || k; i --, k /= 10) {
            if(i >= 0) t += num[i];
            if(k) t += k % 10;
            result.push_back(t % 10);
            t /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};