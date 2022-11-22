class Solution {
public:
    bool check(int mid, vector<int>& houses, vector<int>& heaters) {
        for(int i = 0, j = 0; i < houses.size(); i ++) {
            while(j < heaters.size() && abs(heaters[j] - houses[i]) > mid) j ++;
            if(j >= heaters.size()) return false;
        }
        return true;
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int left = 0, right = INT_MAX;
        while(left < right) {
            int mid = (long long) left + right >> 1;
            if(check(mid, houses, heaters)) right = mid;
            else left = mid + 1;
        }
        return right;
    }
};