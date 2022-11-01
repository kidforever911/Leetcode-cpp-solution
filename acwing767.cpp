#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(auto &c : s) {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if(c == 'Z') {
                c = 'A';
            } else if(c == 'z') {
                c = 'a';
            } else {
                c += 1;
            }
        }
    }
        
    cout << s << endl;
    
    return 0;
}