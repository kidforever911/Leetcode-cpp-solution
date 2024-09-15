class Solution {
public:
    int heightChecker(vector<int>& a) {
        auto b = a;
        sort(b.begin(), b.end());
        int result = 0;
        for(int i = 0; i < a.size(); i ++) {
            if(a[i] != b[i]){
                result ++;
            }
        }
        return result;
    }
};