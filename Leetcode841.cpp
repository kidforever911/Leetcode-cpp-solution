class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if(rooms.empty() || rooms[0].empty()) return false;
        unordered_set<int> record;
        int n = rooms.size();
        queue<vector<int>> q;
        q.push(rooms[0]);
        record.insert(0);
        while(q.size()) {
            auto cur = q.front();
            q.pop();
            for(auto& x : cur) {
                if(!record.count(x)) {
                    record.insert(x);
                    q.push(rooms[x]);
                }
            }
            if(record.size() == n) return true;
        }
        return false;
    }
};