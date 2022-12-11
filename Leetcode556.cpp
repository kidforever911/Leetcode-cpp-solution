class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int k = s.size() - 1;
        while(k && s[k - 1] >= s[k]) k --;
        if(!k) return -1;
        int t = k;
        while(t < s.size() && s[t + 1] > s[k - 1]) t ++;
        swap(s[t], s[k - 1]);
        reverse(s.begin() + k, s.end());
        long long result = stoll(s);
        if(result > INT_MAX) return -1;
        return result;
    }
};