#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, result;
    
    while(cin >> s) {
        result = s + ' ' + result;
    }
    
    result.pop_back();
    
    cout << result << endl;
    
    return 0;
}