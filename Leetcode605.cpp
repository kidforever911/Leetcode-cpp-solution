class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int x) {
        int n = flowerbed.size();
        for(int i = 0; i < n; i ++) {
            if(!flowerbed[i]) {
                if((i == 0 || flowerbed[i - 1] == 0) && (i == n - 1 || flowerbed[i + 1] == 0)) {
                    x --;
                    flowerbed[i] = 1;
                }
            }
        }
        return x <= 0;
    }
};