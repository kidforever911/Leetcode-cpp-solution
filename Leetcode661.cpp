class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row = img.size(), col = img[0].size();
        vector<vector<int>> result = img;
        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                int sum = 0, count = 0;
                for(int x = max(0, i - 1); x <= min(row - 1, i + 1); x ++) {
                    for(int y = max(0, j - 1); y <= min(col - 1, j + 1); y ++) {
                        sum += img[x][y];
                        count ++;
                    }
                }
                result[i][j] = sum / count;
            }
        }
        return result;
    }
};