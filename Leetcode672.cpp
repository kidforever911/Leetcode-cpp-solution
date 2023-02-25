class Solution {
public:
    int state[8][6] = {
            {1, 1, 1, 1, 1, 1}, //不按
            {0, 0, 0, 0, 0, 0}, //1
            {1, 0, 1, 0, 1, 0}, //2
            {0, 1, 0, 1, 0, 1}, //3;
            {0, 1, 1, 0, 1, 1}, //4
            {1, 0, 0, 1, 0, 0}, //14
            {0, 0, 1, 1, 1, 0}, //24
            {1, 1, 0, 0, 0, 1},
    };

    int work(int n, vector<int> ops) {
        unordered_set<int> record;
        for(auto& op : ops) {
            int t = 0;
            for(int i = 0; i < n; i ++) {
                t = t * 2 + state[op][i];
            }
            record.insert(t);
        }
        return record.size();
    }

    int flipLights(int n, int presses) {
        n = min(n, 6);
        if(presses == 0) return work(n, {0});
        else if(presses == 1) return work(n, {1, 2, 3, 4});
        else if(presses == 2) return work(n, {0, 1, 2, 3, 5, 6, 7});
        else return work(n, {0, 1, 2, 3, 4, 5, 6, 7});
    }
};