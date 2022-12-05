class Solution {
public:
    int row, col, k;
    //hashmap的key是已经标记为1的位置，value是还未标记为1的位置
    unordered_map<int, int> record;

    Solution(int m, int n) {
        row = m, col = n;
        k = row * col;
    }

    vector<int> flip() {
        int x = rand() % k;
        int y = x;
        if(record.count(x)) y = record[x];
        if(record.count(k - 1)) {
            record[x] = record[k - 1];
            record.erase(k - 1);
        } else record[x] = k - 1;
        k --;
        return {y / col, y % col};
    }

    void reset() {
        record.clear();
        k = row * col;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */