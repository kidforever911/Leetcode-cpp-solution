#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, s;
    cin >> a >> b;
    if(a.size() < b.size()) swap(a, b);
    s = a + a;
    if(s.find(b) == string::npos) cout << "false";
    else cout << "true";
    
    return 0;
}