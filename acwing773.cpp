#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    while(cin >> a >> b) {
        int p = 0;
        for(int i = 0; i < a.size(); i ++) {
            if(a[i] > a[p]) {
                p = i;
            }
        }
        cout << a.substr(0, p + 1) + b + a.substr(p + 1) << endl;
    }
    
    return 0;
}