class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
        if(mat.empty() || mat[0].empty()) return result;
        int row = mat.size(), col = mat[0].size();
        for(int i = 0; i < row + col - 1; i ++) {
            if(i % 2 == 0) {
                for(int j = min(i, row - 1); j >= max(0, 1 - col + i); j --) {
                    result.push_back(mat[j][i - j]);
                }
            } else {
                for(int j = max(0, 1 - col + i); j <= min(i, row - 1); j ++) {
                    result.push_back(mat[j][i - j]);
                }
            }
        }
        return result;
    }
};