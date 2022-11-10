class Solution {
public:
    int getKth(int lo, int hi, int k) {
        priority_queue<pair<int, int>> q;
        for(int i = lo; i <= hi; i ++) {
            q.push({calculatePower(i), i});
            if(q.size() > k) {
                q.pop();
            }
        }
        return q.top().second;
    }
    
    int calculatePower(int x) {
        int count = 0;
        while(x != 1) {
            if(x % 2) {
                x = x * 3 + 1;
            } else {
                x /= 2;
            }
            count ++;
        }
        return count;
    }
};