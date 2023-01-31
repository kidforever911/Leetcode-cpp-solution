class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        for(int i = 0; i < senate.size(); i ++) {
            if(senate[i] == 'R') r.push(i);
            else d.push(i);
        }
        int n = senate.size();
        while(r.size() && d.size()) {
            if(r.front() < d.front()) r.push(r.front() + n);
            else d.push(d.front() + n);
            r.pop(), d.pop();
        }

        if(r.size()) return "Radiant";
        return "Dire";
    }
};