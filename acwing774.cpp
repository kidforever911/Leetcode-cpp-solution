#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, result;
    while(cin >> s) {
        if(s.back() == '.') s.pop_back();
        if(s.size() > result.size()) result = s;
    }
    
    cout << result << endl;
    
    return 0;
}