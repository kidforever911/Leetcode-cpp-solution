#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        string s, a;
        cin >> s;
        int len = 1e9;
        for(int i = 1; i < n; i ++) {
            cin >> a;
            int cur = 0;
            for(int j = 0; j < a.size() && j < s.size(); j ++) {
                if(a[a.size() - 1 - j] == s[s.size() - 1 - j]) cur ++;
                else break;
            }
            len = min(len, cur);
        }
        if(len) cout << s.substr(s.size() - len) << endl;
        else cout << endl;
    }
    return 0;
}