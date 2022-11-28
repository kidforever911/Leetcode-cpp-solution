class Solution {
public:
    struct Job {
        int l, r, w;

        bool operator< (const Job& t) const {
            return r < t.r;
        }
    };

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<Job> jobs;
        for(int i = 0; i < n; i ++) {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        vector<int> f(n);
        f[0] = jobs[0].w;
        for(int i = 1; i < n; i ++) {
            f[i] = max(f[i - 1], jobs[i].w);
            if(jobs[0].r <= jobs[i].l) {
                int left = 0, right = i - 1;
                while(left < right) {
                    int mid = left + right + 1 >> 1;
                    if(jobs[mid].r <= jobs[i].l) left = mid;
                    else right = mid - 1;
                }
                f[i] = max(f[i], f[right] + jobs[i].w);
            }
        }
        return f[n - 1];
    }
};