#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string a, b, c;
    
    getline(cin, a);
    cin >> b >> c;
    
    stringstream ssin(a);
    string str;
    while(ssin >> str) {
        if(str == b) cout << c << ' ';
        else cout << str << ' ';
    }
    
    return 0;
}