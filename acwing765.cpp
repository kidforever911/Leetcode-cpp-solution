#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    string b;
    
    for(auto c : a) {
        b = b + c + ' ';
    }
    
    b.pop_back();
    
    cout << b << endl;
    
    return 0;
}