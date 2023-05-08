class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX, maxSalary = 0, total = 0;
        for(auto& x : salary) {
            minSalary = min(x, minSalary);
            maxSalary = max(x, maxSalary);
            total += x;
        }
        return 1.0 * (total - minSalary - maxSalary) / (salary.size() - 2);
    }
};