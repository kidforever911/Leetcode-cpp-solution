#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string result;
    while(cin >> s) {
        result = result + s + ' ';
    }
    
    result.pop_back();
    
    cout << result << endl;
    
    return 0;
}