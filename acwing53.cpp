class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int> q;
        for(int x : input) {
            q.push(x);
            if(q.size() > k) {
                q.pop();
            }
        }
        vector<int> result;
        while(q.size()) {
            result.push_back(q.top());
            q.pop();
        }
        return vector<int>(result.rbegin(), result.rend());
    }
};

class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(), input.end());
        vector<int> result;
        for(int i = 0; i < k; i ++) {
            result.push_back(input[i]);
        }
        return result;
    }
};