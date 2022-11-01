#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, s1, s2;
    char c;
    while(cin >> c && c != ',') s += c;
    while(cin >> c && c != ',') s1 += c;
    while(cin >>c) s2 += c;

    if(s.size() < s1.size() || s.size() < s2.size()) {
        puts("-1");
    }
    int index1 = -1, index2 = -1;
    for(int i = 0; i < s.size() - s1.size(); i ++) {
        if(s.substr(i, s1.size()) == s1) {
            index1 = i + s1.size() - 1;
            break;
        }
    }
    for(int i = s.size() - s2.size(); i >= 0; i --) {
        if(s.substr(i, s2.size()) == s2) {
            index2 = i;
            break;
        }
    }
    if(index1 == -1 || index2 == -1 || index1 >= index2) puts("-1");
    else cout << index2 - index1 - 1;

    return 0;
}