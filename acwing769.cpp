#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    for(auto &x : s) {
        if(x == c) {
            x = '#';
        }
    }
    
    cout << s << endl;
    
    return 0;
}