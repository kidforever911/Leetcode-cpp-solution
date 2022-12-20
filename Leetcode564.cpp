class Solution {
public:
    string nearestPalindromic(string n) {
        typedef long long LL;
        int len = n.size();
        set<LL> record;
        record.insert((LL)pow(10, len - 1) - 1);
        record.insert((LL)pow(10, len) + 1);
        LL m = stoll(n.substr(0, (len + 1) / 2));
        for(LL i = m - 1; i <= m + 1; i ++) {
            string a = to_string(i), b = a;
            reverse(b.begin(), b.end());
            if(len % 2) record.insert(stoll(a + b.substr(1)));
            else record.insert(stoll(a + b));
        }

        LL k = stoll(n);
        record.erase(k);
        LL result = 2e18;
        for(auto& x : record) {
            if(abs(x - k) < abs(result - k)) {
                result = x;
            }
        }
        return to_string(result);
    }
};