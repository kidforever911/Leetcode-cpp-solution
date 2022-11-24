class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> q;
        int n = profits.size();
        for(int i = 0; i < n; i ++) q.push_back({capital[i], profits[i]});
        sort(q.begin(), q.end());
        priority_queue<int> heap;
        int result = 0, i = 0;
        while(k --) {
            while(i < n && q[i].first <= w) heap.push(q[i].second), i ++;
            if(heap.empty()) break;
            auto t = heap.top();
            w += t;
            heap.pop();
        }
        return w;
    }
};