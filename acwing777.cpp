#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    while(true) {
        cin >> s;
        if(s == ".") break;
        int len = s.size();
        for(int n = len; n > 0; n --) {
            if(len % n == 0) {
                int m = len / n;
                string str = s.substr(0, m);
                string temp;
                for(int i = 0; i < n; i ++) {
                    temp += str;
                }
                if(temp == s) {
                    cout << n << endl;
                    break;
                } 
            }
        }
    }
    return 0;
}