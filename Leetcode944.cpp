class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size(), col = strs[0].size();
        int result = 0;
        for(int j = 0; j < col; j ++) {
            bool flag = false;
            for(int i = 1; i < row; i ++) {
                if(strs[i][j] < strs[i - 1][j]) {
                    flag = true;
                }
            }
            if(flag) result ++;
        }
        return result;
    }
};