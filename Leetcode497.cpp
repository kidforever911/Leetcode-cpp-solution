class Solution {
public:
    int n;
    vector<int> s;
    vector<vector<int>> rects;

    Solution(vector<vector<int>>& _rects) {
        s.push_back(0);
        rects = _rects;
        n = rects.size();
        for(auto& r : rects) {
            int dx = r[2] - r[0] + 1;
            int dy = r[3] - r[1] + 1;
            s.push_back(s.back() + dx * dy);
        }
    }

    vector<int> pick() {
        int k = rand() % s.back() + 1;
        int left = 1, right = n;
        while(left < right) {
            int mid = left + right >> 1;
            if(s[mid] >= k) right = mid;
            else left = mid + 1;
        }
        auto& t = rects[right - 1];
        int dx = t[2] - t[0] + 1;
        int dy = t[3] - t[1] + 1;
        return {rand() % dx + t[0], rand() % dy + t[1]};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */