class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.empty()) return 0;
        sort(courses.begin(), courses.end(), [](vector<int> &a, vector<int> &b) {
            return a[1] < b[1];
        });
        priority_queue<int> record;
        int total = 0;
        for(auto& c : courses) {
            total += c[0];
            record.push(c[0]);
            if(total > c[1]) {
                total -= record.top();
                record.pop();
            }
        }
        return record.size();
    }
};