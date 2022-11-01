#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string a, b;
    
    getline(cin, a);
    getline(cin, b);
    for(auto &c : a) {
        if(c >= 'A' && c <= 'Z') c += 32;
    }
    for(auto &c : b) {
        if(c >= 'A' && c <= 'Z') c += 32;
    }
    if(a == b) printf("=");
    else if(a > b) printf(">");
    else printf("<");
    
    return 0;
}