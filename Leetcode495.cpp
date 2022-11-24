class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int left = timeSeries[0], right = timeSeries[0] + duration - 1;
        int n = timeSeries.size();
        int result = 0;
        for(int i = 1; i < n; i ++) {
            if(timeSeries[i] <= right) {
                right = max(right, timeSeries[i] + duration - 1);
            } else {
                result += right - left + 1;
                left = timeSeries[i];
                right = timeSeries[i] + duration - 1;
            }
        }
        result += right - left + 1;
        return result;
    }
};

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int result = 0;
        for(int i = 1; i < timeSeries.size(); i ++) {
            result += min(timeSeries[i] - timeSeries[i - 1], duration);
        }
        if(timeSeries.size()) result += duration;
        return result;
    }
};