#define LL long long

class Solution {
public:
    bool check(LL mid, vector<int>& time, int totalTrips) {
        LL sum = 0;
        for(auto& t : time) {
            sum += mid / t;
            if(sum >= totalTrips) return true;
        }
        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        LL left = 0, right = 1e14;
        while(left < right) {
            LL mid = left + right >> 1;
            if(check(mid, time, totalTrips)) right = mid;
            else left = mid + 1;
        }
        return right;
    }
};