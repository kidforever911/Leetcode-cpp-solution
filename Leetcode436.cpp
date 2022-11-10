class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> result(n, -1);
        for(int i = 0; i < n; i ++) intervals[i].push_back(i);
        sort(intervals.begin(), intervals.end());
        for(auto temp : intervals) {
            int left = 0, right = n - 1;
            while(left < right) {
                int mid = left + right >> 1;
                if(intervals[mid][0] >= temp[1]) right = mid;
                else left = mid + 1;
            }
            if(intervals[right][0] >= temp[1]) result[temp[2]] = intervals[right][2];
        }
        return result;
    }
};